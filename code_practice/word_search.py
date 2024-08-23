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