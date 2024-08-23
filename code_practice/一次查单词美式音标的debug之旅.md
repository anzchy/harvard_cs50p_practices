# Prompt to POE

我这里写了段代码来在 json 词典中查询词典的美式音标，代码如下：

```python
# 尝试读取 cam_dict.json
# 这个程序不够健壮，查询一个单词是没问题的，但是当批量查询单词，会报错，显示 index out of range

import json
import csv

filepath = '/Users/chengyong/Documents/01_Coding/03_Harvard_CS50P/harvard_cs50p_practices/code_practice/cambridge_dict.json'
data = {} # 初始化一个空字典存储 JSON 数据

def proun_search(word_to_search):
    with open(filepath, 'r', ) as file:
        for line in file:
            line = line.strip() # 移除行尾的换行符
    
            if line:
                try:
                    json_obj = json.loads(line) # 将每一行解析为一个 JSON 对象
                                      
                    if json_obj['word'] == word_to_search:
                        proun = json_obj['pos_items'][0]['pronunciations'][1]['pronunciation']
                        if proun:
                            return proun
                        else:
                            return 'proun not exist'
                    
                except json.JSONDecodeError as e:
                    print(f"Error decoding line: {line}, Error: {e}")

# proun_search('open') 

words = []
with open("words.csv", 'r', newline='') as file:
    reader = csv.reader(file)
    for row in reader:
        words.append(row[0])
        
# print(words) 

for word in words:
    print(word,"|",proun_search(word))
```

Cambride.JSON 格式部分如下：

```json
{"_id":{"$oid":"60c06f88a54d753a1e7ff079"},"word":"aardvarks","pos_items":[{"type":"noun","pronunciations":[{"region":"uk","audio":"https://dictionary.cambridge.org/media/english/uk_pron/u/uka/uka__/uka____009.mp3","pronunciation":"ˈɑːd.vɑːk"},{"region":"us","audio":"https://dictionary.cambridge.org/media/english/us_pron/u/usa/usad_/usad___007.mp3","pronunciation":"ˈɑːrd.vɑːrk"}],"definitions":[{"definition":"an African mammal with a long nose and large ears that lives underground and eats insects","examples":[]}]}]}
{"_id":{"$oid":"60c06f76a54d753a1e7ff075"},"word":"aah","pos_items":[{"type":"exclamation","pronunciations":[{"region":"uk","audio":"https://dictionary.cambridge.org/media/english/uk_pron/u/uka/uka__/uka____008.mp3","pronunciation":"ɑː"},{"region":"us","audio":"https://dictionary.cambridge.org/media/english/us_pron/u/usa/usad_/usad___006.mp3","pronunciation":"ɑː"}],"definitions":[{"definition":"another spelling of ah","examples":[]}]}]}
{"_id":{"$oid":"60c06fe1a54d753b12266636"},"word":"aback","pos_items":[{"type":"adverb","pronunciations":[{"region":"uk","audio":"https://dictionary.cambridge.org/media/english/uk_pron/u/uka/uka__/uka____011.mp3","pronunciation":"əˈbæk"},{"region":"us","audio":"https://dictionary.cambridge.org/media/english/us_pron/u/usa/usad_/usad___009.mp3","pronunciation":"əˈbæk"}],"definitions":[{"definition":"to be very shocked or surprised","examples":["I was somewhat taken aback by her honesty."]}]}]}
```

运行的时候报错如下：

```
cell | word not exist
cent | word not exist

harvard_cs50p_practices/code_practice on  main [!?] via 🅒 base 
➜ python word_search.py
Adam | None
air  | None
aloud | əˈlaʊd
altar | ˈɑːl.tɚ
ant | ænt
ate | et
band | bænd
bare | ber
base | beɪs
be | biː
beat | biːt
berry | ˈber.i
Traceback (most recent call last):
  File "/Users/chengyong/Documents/01_Coding/03_Harvard_CS50P/harvard_cs50p_practices/code_practice/word_search.py", line 42, in <module>
    print(word,"|",proun_search(word))
                   ^^^^^^^^^^^^^^^^^^
  File "/Users/chengyong/Documents/01_Coding/03_Harvard_CS50P/harvard_cs50p_practices/code_practice/word_search.py", line 22, in proun_search
    proun = json_obj['pos_items'][0]['pronunciations'][1]['pronunciation']
            ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~^^^
IndexError: list index out of range
```

确实查询除了对应的代码，但是有 list index out of range，请问原因是什么？如何能够解决这个 bug？



# POE 回复：

> 出现 `IndexError: list index out of range` 的原因是代码在访问 `json_obj['pos_items'][0]['pronunciations'][1]` 时，假设每个单词都有至少两个发音选项（例如英式和美式）。然而，某些词可能没有第二个发音选项，导致访问不存在的索引。
>
> 要解决此问题，可以在访问列表之前检查其长度。以下是修复后的代码：

```python
import json
import csv

filepath = '''/Users/chengyong/Documents/01_Coding/03_Harvard_CS50P
/harvard_cs50p_practices/code_practice/cambridge_dict.json'''

def proun_search(word_to_search):
    with open(filepath, 'r') as file:
        for line in file:
            line = line.strip()
            if line:
                try:
                    json_obj = json.loads(line)
                    if json_obj['word'] == word_to_search:
                        # 我之前就直接赋值给 prounciation，但是存在可能没有音标的情况
                        # 这样会导致 index out of range，所以先获取有没有 item，存在的话，再赋值；
                        pos_items = json_obj.get('pos_items', [])  # 用是 dict.get()method，下同
                        if pos_items:
                            pronunciations = pos_items[0].get('pronunciations', [])
                            # 赋值的时候，由于音标存在 uk 和 us两种情况，所以上面的赋值是把 prounciation 这个字典，														 # 包括 uk 和 us 的部分一起存到 prounciations 这个字典中。
                            # 再做一个判断，是否存在 us 发音，存在再 get。
                            for pron in pronunciations:
                                if pron['region'] == 'us':
                                    return pron.get('pronunciation', 'proun not exist')
                        return 'proun not exist' # 注意这个对应的是if pos_items 的剩余情况
                except json.JSONDecodeError as e:
                    print(f"Error decoding line: {line}, Error: {e}")
    return 'word not exist'

words = []
with open("words.csv", 'r', newline='') as file:
    reader = csv.reader(file)
    for row in reader:
        words.append(row[0])

for word in words:
    print(word, "|", proun_search(word))
```

### 关键更改：

1. **检查和循环**：在访问 `pronunciations` 列表时，先检查其长度。
2. **使用 `get` 方法**：在访问字典的键时，使用 `get` 来避免 KeyError。
3. **返回默认值**：如果找不到单词或发音，返回适当的默认消息。