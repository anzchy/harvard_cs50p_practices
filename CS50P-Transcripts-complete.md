# lecture0-Functions, variables

[GENTLE ORCHESTRAL MUSIC PLAYING] DAVID MALAN: All right, this is CS50's Introduction to Programming with Python. My name is David Malan and this is our week on functions and variables. But odds are, many of you, most of you, have never actually programmed before. So let's start by doing just that. Let me go ahead here and open up my computer and on it, a program called Visual Studio Code or VS Code, which is just a very popular program nowadays for actually writing code. Now, you don't have to write code using this particular tool. In fact, all we need at the end of the day is a so-called text editor, a program for writing text. And, heck, if you really want, you could even use something like Google Docs or Microsoft Word. You'd have to save it in the right format, but really, at the end of the day, all you need is a program for writing text because that's what code is-- text. 

Now within this particular program, I'm going to have the ability to create one or more files via this top portion of the screen. And I'm going to do so by diving right in and doing this at the bottom of my screen. At the bottom of my screen is a so-called terminal window and this is a command line interface or CLI interface to the underlying computer, be it your Mac or your PC or even some server in the cloud. And what I'm going to do here is literally write, "code" and then the name of the file that I want to code, for instance, Hello.py. As we'll soon see, any program that you write in Python generally has a file name that ends in .py to indicate to the computer that it's indeed a program written in Python. 

Now you'll see here at the top of my screen, I have a blinking cursor, a line one-- which is where the very first line of my code is going to go-- and then just a tab that reminds me of the name of this file Hello.py. And without even knowing much Python, I'm going to write my very first program here as follows-- print("hello,world"). And you'll see that, at my keyboard, some of my thoughts were finished for me. I only had to type one parenthesis and the other one automatically appeared, and that's just the feature that we'll see of tools like this tool here. 

Now even if you've never programmed before, odds are you can guess, infer what this simple program is going to do. And it's only one line. print("hello,world"). Indeed, when I run this program ultimately, it's just going to say, Hello to the world. And, in fact, this is a very famous-- perhaps the most canonical-- program that you can write as your very first program in Python or any other language, and so that's what I've done here. But on my Mac, my PC, even my phone, I'm generally in the habit, like you, of running programs by double clicking an icon or just tapping on the screen. But I see no such icons here. And in fact, that's because my interface to at least my current Mac or PC or some server in the cloud, is again only a CLI-- command line interface-- which even though it might feel like it's a step back from the menus and buttons and icons that you and I take for granted every day, you'll find, we think, that it's ultimately a much more powerful interface and incredibly popular to use among programmers in the real world. 

So to run this program, I'm going to have to use a command and I'm going to move my cursor back down to the bottom of the screen here where previously I already ran one command-- the command Code which has the effect of opening VS Code in my computer, and then I passed in the name of the file that I wanted to code up. Now I have a chance to type a second command, and you'll see I see a second dollar sign. Now the dollar sign here doesn't indicate any kind of currency or money, it just is the symbol that's generally used to indicate your prompt-- where the command line interface wants you to put those commands. 

Now the command I can run here is going to be this-- I'm going to run Python of Hello.py. Now why is that? Well, it turns out that when I actually write code in a language like Python, it's of course stored in that file-- Hello.py, but I need to interpret the code top to bottom, left to right so that the computer knows what to do. Indeed, at the end of the day, even if you don't really know much about computers, you've probably heard the computers only understand zeros and ones, the so-called binary system. 

Well if that's the case, then something that says "print" and parentheses and quote unquote hello world, is not surely zeros and ones. We have to somehow translate it into the zeros and ones that the computer understands. Now fortunately, so long as you've installed such a program in advance, there's a program as well as a language called Python. So Python is not only a language in which we're going to write code, it's also a program otherwise known as an interpreter that you install for free on your own Mac or PC or some server in the cloud and you can then run that program, that interpreter, passing to it as input the name of your file like mine here, Hello.py. And then that program, that interpreter, will handle the process of reading it top to bottom, left to right and translating it effectively into those zeros and ones that the computer can understand. 

So let's do just that. Let me go back to VS Code here. I already typed out Python of Hello.py but I didn't get hit Enter. And that's what's now going to kick off this command and hopefully, if I didn't mess any of this up, I should see my very first program's output to the screen. And voila, hello, world. So if you too have typed exactly that same code and have executed exactly that same command, you will have written your very first program in this case in Python. 

Well now let's take a step back and consider, what is it that we actually just did and what is it we're looking here on the screen? Well first and foremost, in most any programming language, you tend to have access to what are called functions. A function is like an action or a verb that lets you do something in the program. And generally speaking, any language comes with some predetermined set of functions-- some very basic actions or verbs that the computer will already know how to do for you, that the language, really, will know how to do for you. And you, the programmer, the human, can use those functions at will to get the computer to do those things. 

Now the program in question here, Hello.py is using one function. And you could perhaps guess what it is. That function is, of course, going to be this function print and that print function, of course, doesn't print some preordained string of text. That is to say, it prints whatever it is you want it to print. And here too, do we have another piece of terminology in the world of programming, namely arguments. An argument is an input to a function that somehow influences its behavior. The people who invented Python, of course, didn't necessarily know what it is you and I are going to want to print to the screen, so they designed this print function using these parentheses with the ability to take as input some string of text, be it in English or any other human language, that is what you want this function ultimately to print onto the screen. 

And what is it that the program is ultimately doing on the screen? Well, it's printing, of course. It's showing us hello, world on the screen. And that's generally in programming known as a side effect. It can be visual, it can be audio. In this case, it's something that appears on the screen and functions, therefore, can indeed have these side effects. One of the things they can do as this verb or action is to display on the screen as a side effect, something like those words that we wanted-- hello, world. 

So that's my first program and, you know, I'm feeling pretty good. Everything worked as planned. I didn't make any mistakes, but, honestly, when you're learning how to program and even once you've learned how to program years later, you're going to make mistakes. And those mistakes, of course, are referred to a term you might already know, which is that of a bug. A bug is a mistake in a program and they can take so many forms. And take comfort, perhaps, in knowing that over the coming weeks, you're going to make so many mistakes. You're going to have so many bugs in your code, just like I did and just as I still do. And those bugs themselves are just mistakes that are problems for you to solve. And over the weeks to come, we're going to give you a lot of tools both mental and technical via which you can solve those problems. But just don't get discouraged if when writing your program for the first time it doesn't even work that first time, it will with time, with practice, and with experience. 

So let me deliberately now make a mistake that there was a non-zero chance I might have done accidentally already, but I got lucky. Let me go ahead and just suppose I forgot to include something like the closing parenthesis at the end of this line of code. The code is almost correct, it's like 99% of the way there, but now that I've pointed it out, it's pretty obvious that it's missing that closed parenthesis. But even little, seemingly minor details like that, that you and I as humans wouldn't really care about. And if you're sending an email or a text message, whatever, it's just a typo. It's not that big a deal. It is going to be a big deal to the computer. A computer is going to take you literally, and if you don't finish your thought in the way the language expects, it's not going to necessarily run at all. 

So let's do this. I'm going to go ahead here and clear my screen down at the bottom just so I can start fresh, and I'm going to go ahead and run this version of my program after having made that change by deleting the parenthesis. I'm going to go ahead and type Python again of Hello.py and this time when I hit Enter, I'm hoping I'm going to see hello, world, but here we have an error on the screen, a so-called syntax error, which refers to my having made a mistake at my keyboard. And this one, fortunately, is pretty straightforward. It indeed says that this open parenthesis was never closed. And so that's probably pretty intuitive. Now what I need to do, I need to, of course, to close it. Unfortunately, sometimes the error messages we'll see in the coming weeks are not going to be nearly that user-friendly. But there too again, with experience, with practice, will you get better at debugging such programs. 

Let me now make sure that I indeed fixed it correctly. Let me go ahead and run now Hello.py and hit Enter and, voila, we're back in business. Well let me pause here and see if we have any questions now about Python itself, writing, or running even the simplest of these programs. 

AUDIENCE: Could I write code inside a word or, for example, Microsoft Excel? And what's the barrier to doing that? 

DAVID MALAN: A really good question, and allow me to very explicitly say to the entire internet that you should not write code with Microsoft Word. I mentioned that only because it's a tool via which you can write text and code is, at the end of the day, just text. But it's not the right tool for the job. We don't need bold facing, underlining, paragraphs and the like. We generally want something much simpler than Microsoft Word or Google Docs. And so VS Code is an example of just a more general purpose text editor. Its purpose in life is to allow you, the human, to edit text. Nowadays these text editors come with many more features. In fact, you'll notice that even in my code here, even though it's just one line, there's a bit of color to it. The word "print" for me is appearing in blue. The parentheses are black. And we'll see as we write more lines of code, more and more of the lines will come to life in various colors. 

Now that's just one feature of a text editor. We'll see too that it has features like this built-in terminal window. It's going to have a built-in tool for debugging or finding problems with code. And it's just a very popular tool nowadays, but there are many, many others out there. You're welcome to use them for this course and beyond. We just happen to use this one in large part too because you can also use VS Code nowadays for free in the cloud. How about one other question here on programming with Python or hello, world or syntax more generally? 

AUDIENCE: Yeah I was trying to ask if it's not possible to run the computer using the terminal window? 

DAVID MALAN: I think I heard is it not-- if it's possible to run the program without the terminal window? Are you-- 

AUDIENCE: Yes, sir. 

DAVID MALAN: OK, you froze for me again. But let me infer what the question is. So in this environment, as I've configured my computer, I can only run these Python programs via the terminal window. Now that's good for me, the programmer, or the person who's trying to learn how to program, but it's not very good if you want to ship this software and have other people use your actual code. You can absolutely write programs and then allow other people to use, not a command line interface, but a graphical user interface or GUI-- G-U-I. This is just one mechanism and perhaps, I think, the best one with which to start writing code because eventually it's going to give us a lot more control. 

Allow me to forge ahead here, but please feel free to continue asking questions along the way if only via the chat. Let's consider now how we might go about improving this program. Let's go about improving this program to make it a little more interactive and not just assume that everyone is going to want to be greeted more generically as hello, world. Let's see if I can't get this program to say something like Hello, David or Hello, Jeremiah or Hello, Horatio or whatever the actual user's name is. Well to do this I'm going to go back up to Hello to pi and I'm going to add another line of code at the very top that simply says, for instance, what's your name, quote unquote with an extra space at the end. 

So I'm printing to the user asking them a question for some input, but now I need another function to actually get input from the user. And, perfectly, enough Python comes with a function named input. So here I'm going to go ahead and call a function input, open paren, close paren. And that's going to prompt the user with just a blinking cursor waiting for them to type something in. Now it turns out, if I read the documentation for the input function, it actually takes an argument itself. I don't need to use "print" separately and then prompt the user for input. So I can actually simplify this code before we even use it. I'm going to go ahead here and take that same string from print, put it as an argument to the input function, and get rid of the "print" altogether. And, in fact, that "print" would have added a new line anyway. So now I've just got a prompt where the user's cursor is going to end up blinking at the end of the line asking them, what's your name? 

In my terminal window I'm going to run Python of Hello.py, Enter. OK. We're making progress. It seems that this new function input is indeed prompting me, the human, for input. So I'm going to type in my name-- David-- and hit Enter. Unfortunately, it doesn't really do anything with my name, it just outputs it immediately. All right, well, I could fix this, right? I could go up to line 2 and I could change "world" to "David," and then back in my terminal window here I can do Python of Hello.py, Enter. What's your name? David, Enter. And there we go. All right now I'm up and running. Now my program is working as intended. 

Of course, this isn't really working as intended here. Let me go ahead and try pretending to be my colleague, Carter here. Well Carter's name is this. I'm going to go ahead and hit Enter and I'll see, of course, Hello, Carter-- well, obviously not, because I've hardcoded, so to speak, I've written literally my name inside of the string. So we need some way now of actually getting back what the user's input is and doing something with it ultimately. And for this we're going to leverage another feature of programming, specifically a feature of some functions, which is that they can have return values as well. 

If you think of input as being, again, this action, this verb-- you can actually personify it as maybe a person, like a friend of yours that you've asked a question of and you've asked your friend to go get input from someone else-- go ask that person their name. And if your friend comes back knowing that person's name, well, wouldn't it be nice if they handed that name back to you? That's kind of what we need metaphorically the function to do, is get the user's input and then hand it back to me so that I, the programmer, can do something with it. 

But if it's going to be handed back to me, I kind of want to put it somewhere so that I can then print it back on the screen. I need to do the equivalent of take out like a piece of paper or Post-It note, write down on this piece of paper what it is the human has said, so that I can then feed it into as input that print function. And to do that, we're going to need one more feature of programming, namely variables. And odds are, most everyone's familiar with variables from math class way back when-- x and y and z and the like. Well, programming has that same capability, this ability to create a variable-- in this case, in the computer's memory-- not just on a piece of paper. And that variable can store a value-- a number, some text, even an image or video or more. A variable is just a container for some value inside of a computer or inside of your own program. 

So how do I go about expressing myself in this way? Well I think what I'm going to do is introduce a variable that's a little more interestingly named than x or y. I could just say this-- x = input. But I'm going to use a better name than a typical mathematical variable here and I'm going to literally call my variable "name," why? Well in programming, because I have a whole keyboard in front of me, I can use more descriptive terms to describe what it is I'm writing. And now, though, there's an opportunity to consider a specific piece of syntax. We've seen parentheses, we've seen quotes, all of which are necessary when passing inputs to a function, but this equal sign here that's in between input on the right and name on the left is actually important. And it's technically not an equal sign per se. It doesn't mean equality as much as it means assignment. 

So in Python and many programming languages, a single equal sign is the assignment operator and what that means specifically is that, you want to assign from right to left whatever the user's input is. So the equal sign copies from the right to the left whatever the return value of the function on the right is. So again, the input function clearly gets input from the user. That's why I was able to type my name or Carter's, but it also sort of behind the scenes hands that value, that return value, back to me the programmer. And if I use an equal sign and a variable, no matter what I call it, I can store that input in that variable so as to reuse it later. 

So now, sitting in the computer's memory somewhere, is a container containing "David" quote, unquote or "Carter" quote, unquote, or whatever the human has typed in. But here it's easy to make a mistake. Suppose I decide to try to print that name and so I kind of on a hunch type in this, hello, name. Just kind of plugging in the name of the variable. Well let me go ahead here and run Python of Hello.py and hit Enter. That's going to prompt me for my name. And let me type in my name-- D-A-V-I-D. But I haven't hit Enter yet. And perhaps via the chat, what's going to happen here when I now hit Enter? I'm hoping it says, Hello, David. I'd be OK if it says Hello, world, but I don't want it to say what it's actually going to say and, yep, what we're seeing in the chat is, well, it's probably going to say literally Hello, name. 

So that's not quite right. So we need another way of printing out the value inside of that variable rather than just this word "name." Well let me try this in a couple of different ways. Let me try this as follows-- let me go ahead and maybe undo this because I've gotten pretty good already at saying Hello. So let's draw that line in the sand and just say, all right, let's get at least get Hello comma out the door. Let's now print name and just on a hunch, I'm going to try this. I'm going to use print again-- because you can use these functions as many times as you need-- and I'm going to pass to the print function the variable called name. But notice I'm being a little clever now. I'm not putting it in double quotes because we've seen already that double quotes means literally print out N-A-M-E. I'm getting rid of the quotes this time in hopes that, now by passing the variable called name to the function called print it will, in fact, go about printing the contents of that variable that is, its so-called value. 

All right, let's go ahead and do this here. Python of Hello.py, Enter. What's your name? David. And now, crossing my fingers still, I see Hello comma David. All right. So it's not the best program. I'm kind of cutting some corners here, so to speak. I'm saying Hello, David on two separate lines. So it's not as elegant, it's not as pretty, it's not as grammatically appropriate in English as just saying it all in one breath on one line, but at least I've solved the problem, just not very well yet. But let me take a step back now and perhaps introduce a couple of other concepts with which we should be familiar, which is as our programs get longer and they're no longer just one line or two or even three, eventually our programs are going to become dozens of lines, maybe even hundreds of lines long. Let's set the stage for success moving forward. 

It turns out that Python and a lot of programming languages also support something called comments. Comments are notes to yourself in your code and you include comments by way of a special symbol-- in Python it's going to be the hash symbol, typically-- and that allows you to write the equivalent of a note to yourself but in a way that's not going to break your code. The computer actually ignores your comment. It's just there for you, it's just there for your teacher, it's just there for your colleague with whom you're sharing ultimately that code. 

So if I go back to VS Code here and I just want to add some comments to this program to explain to my teacher, to myself, to my colleagues what this program is doing, well, let's go ahead and do that. I'm going to go at the very top of my program and on line 1 now I'm going to move that original line of code down a bit, I'm going to add a hash, and I'm going to say something like this, ask user for their name. Now, I don't have to use that language. I don't have to use that text. I could use any human language whatsoever. It doesn't have to be English. But I'm going to now, below that, just say something like this-- say Hello to user. 

And you'll notice that VS Code by default is kind of graying out my comments. They're no longer blue, there's no red, there's no color in them. And that's just because they're notes to myself and the computer ultimately is going to ignore them. But what we have now is two comments-- ask user for their name and then a second comment, say Hello to user. And I've just kind of commented each chunk of code, like each line or lines plural of code, that are doing something noteworthy. Why? Well, tomorrow morning when I wake up having slept for quite some time, forgotten what it is I did the previous day, it's convenient with comments to just see in English or your own human language what it is this program is doing so that you don't have to read the code itself and, better yet, if there's maybe a mistake down the road, you can read what your intention was and then you can look at the code and figure out if your code is now doing what you intended. 

So this isn't really necessary for a program this small. It's pretty obvious with just one or two or three lines what the program is doing. It's just as fast to read the code than the comments, but getting into this habit is generally a good thing-- to comment your code every one or a few lines so as to remind yourself and others what it is your intent and your code is doing. What's nice about comments too is this-- comments can also serve to be sort of a to-do list for yourself. 

There's this notion in programming of pseudocode. Pseudocode isn't a formal thing. It's not one specific language. It's just using English or your own human language to express your thoughts succinctly, methodically, algorithmically, so to speak. But pseudocode, therefore, because it's not Python and it's not necessarily English, it just kind of allows you to outline your program even in advance. So for instance, if I wasn't sure today how I wanted to go about writing this program but I didn't know what I wanted to do, I could have started today by just writing this in Hello.py. No code, I could have written just a couple of comments to myself-- Step 1, ask user for their name. Step 2, say Hello to user. 

Then once I've outlined my program in pseudocode, then I can go in there and say, all right, how do I ask the user for their name? Well, I can do input "what's your name" question? And then on the left here, I can maybe put a variable and assign it to that. OK, how do I say Hello to the user? Well, I know I can use print to say things on the screen. Let me say hello, and let me-- OK, let me now print the person's name. 

So again, pseudocode is a nice way of structuring your to-do list, especially if you have no idea how to write the code, because it breaks a bigger program down into small bite-sized tasks. All right, let me pause here to see if there are now any questions on comments, pseudocode, return values, or variables. Any questions we can clear up here? 

AUDIENCE: Yeah, my question is does the function input work for any type of information, or only for words? 

DAVID MALAN: Yeah, really good question. So according to its documentation, and we'll look more at formal documentation soon, input is going to expect what's called a string, that is a sequence of text, be it in English or any other human language. But it's indeed going to be expecting text with which to prompt the user. A good question. How about another question from the group, if we could? 

AUDIENCE: I wanted to ask how would I make a several line comment? 

DAVID MALAN: Oh, how do you do many lines of comments, if I'm hearing you correctly? 

AUDIENCE: Yes. 

DAVID MALAN: Sure. You would just keep doing them like this. You just prefix each of the lines with a hash symbol, like I'm doing here. There is another technique for doing multi-line comments in Python that actually tend to have special meaning. You can do three double quotes like this and then anything in between here is a comment. That's another technique. Or you can use single quotes as well. But more on those, I think, another time. 

All right, well, you don't mind, let me forge ahead here and see how we might improve this program further and also introduce a few other features that we might want to take into account over time. So it turns out that we can certainly improve on this program because it's a little disappointing that I'm cutting this corner and saying Hello comma and then on a new line printing out name. Like we can do better. And most programs you use on your phone or your laptop certainly keep text together when people want. So how can we go about doing that? Well there's a few different ways. And in fact, the goal here is not so much to solve this one problem, but to demonstrate and emphasize that in programming-- Python and other languages-- there's so many ways sometimes to solve the same problem. And here's one way to solve this problem. 

Let me go in here and let me go ahead now and say hello, and let me just add to the end of that the user's name. So I'm using + in kind of an interesting way. This is not addition, per se. I'm not adding numbers, obviously, but I do kind of want to add the person's name to the string of text Hello comma. Well let me go now down to my terminal window and run Python of Hello.py again, Enter. What's your name? I'm going to type in David. Enter. OK, it's better. It's better, but there's a minor bug, albeit aesthetic here. There's missing space, but let's just use some intuition here. Well, if I'm missing the space after the comma, why don't I go ahead and just add it manually here. Let me now rerun the program Python of Hello.py, Enter, David, Enter. And there we go. Now we have something that looks a little prettier in terms of English grammar. Hello, comma, space, David. 

And now if we rewind, you might have noticed before or wondered why I had this seemingly extra space after my question mark, namely here. There's a space after the question mark but before the double quote and that was just for aesthetics too. I wanted to move the user's cursor one space to the right so that when I typed their name or they typed their name, it's not immediately next to that same question mark there. But there's other ways we can do this. 

It turns out that some functions, print among them, actually take multiple arguments. And it turns out that if you separate the inputs to a function-- the so-called arguments to a function-- with a comma, you can pass in not just one, but two, three, four, five, onward. So let me go ahead and pass in not just hello, comma, space, but that followed by name. And this is a little confusing potentially at first glance because now I've got two commas but it's important to note that the first comma is inside of my quotation marks, which is simply an English grammatical thing. The second comma here is outside of the quotes, but between what are now two separate arguments to print. The first argument is hello, comma, space. The second argument is the name variable itself. So let's see how this looks. 

Python of Hello.py, Enter. What's your name? David. Enter. OK, I've kind of over-corrected. Now I've got two spaces for some reason. Well, it turns out, and this is subtle, when you pass multiple arguments to print, it automatically inserts a space for you. This was not relevant earlier because I was passing in one big argument to print all at once by using that + operator. This time I'm passing in two because of the comma. So if I don't want that extra space, I don't need to pass in one myself, I can just do this and now notice, if I run this program again-- Python of Hello.py, type in my name David, now it looks grammatically like I might want. 

Now which of these approaches is better? This approach uses a function print with two arguments-- Hello, comma and the name variable. The previous version, recall, technically used one argument, even though it looked a little curious. It's one argument in the sense that the computer, just like mathematicians, are going to do what's inside of parentheses first. So if inside of parentheses you have this string of text-- hello, comma, and a space, which I need to add back. Then you have a +, which means not addition, per se, but concatenation-- to join the thing on the left and the thing on the right. This ultimately becomes the English phrase-- Hello, comma, space, David. And then what's being passed ultimately to the function is technically something like this, but it's doing it all dynamically. It's not me typing in David as I discreetly did earlier. It's figuring out dynamically what that value is after concatenating Hello with the value of name and then passing that ultimately to print as the sole argument. 

Let me pause here to see if there's any questions on numbers of arguments now to functions. 

AUDIENCE: Can we use a function many times to solve a certain problem which we can encounter many times in our code? 

DAVID MALAN: You can. You can use a function many different times to solve some problem. What we'll soon see, though, is if you find yourself as the programmer solving a problem the same way again, and again, and again, it turns out you'll be able to make your own function so that you don't have to keep reusing the basic ones that come with the language. 

AUDIENCE: I was curious about the comma and the + sign. So after + sign, can we give just one variable and after comma again we give multiple variable status? What is the difference? 

DAVID MALAN: A good question. So in the context of strings-- and I keep using that term. "String" is a technical term in a programming language and again, it means a sequence of text-- a character, a word, a whole paragraph, even. So the + operator is not just used, as we'll see, for addition of numbers in Python, like we do on paper pencil, but it also is used for concatenation of strings on the left and the right. If you did want to combine not just two strings-- left and right-- but a third and a fourth, you can absolutely keep using +, +, +, +, and chain them together just like in math. Eventually that's going to start to look a little ugly, I dare say, especially if your line of code gets long. So there's better ways that we'll actually soon see. And a good question as well. 

Well let me come back to the code here in question and see if we can show you just a couple of other ways to solve the same problem, along the way emphasizing that what we're technically talking about here, yes, are strings, but there's even a technical term for these strings in Python, it's just STR, so to speak, S-T-R for short, for string. As you may know if you programmed in other languages, people who invent programming languages like to be very succinct, to the point, so we tend to use fairly short phrases to describe things, not necessarily full words. So while you might say "string," technically in Python what we're really talking about, these sequences of text, are technically STRs. This is an actual type of data in a program. But we'll soon see that there's other types of data in programs as well. In fact, let's see if we can't improve this in one other way. 

I like the progress we've made by keeping everything on the same line-- Hello, David all on the same line. What more though could we do in terms of solving this problem? Well, it turns out that we didn't have to give up entirely with using print twice. Let me rewind a little bit and go back to that earlier version where I wasn't really sure how to solve this problem so I was using print once to print out just the Hello and the space and the comma. And then I used print again to print name. That's, strictly speaking, wasn't bad, but there was this visual side effect that I didn't like. It just looked ugly to have these two lines of text separate from one another. But there's another way to fix this. 

Clearly it seems to be the case that the print function is automatically outputting a blank line. It's moving the cursor automatically for me to the next line because that's why I'm seeing Hello on one line and David on the next and then my prompt-- the dollar sign-- on the line below that. So print seems to be presuming automatically that you want it to move the cursor to the next line after you pass it some argument. But you can override that behavior. Again, functions take arguments which influence their behavior, you just have to know what those arguments are. And it turns out that if we look at the documentation for Python's print function, we can actually look up at this URL here-- docs.python.org is where all of Python's official documentation lies. 

If I poke around, I can find my way to more specifically this URL here where I can find all of the available functions in Python and the documentation there for. And if I go a little more precisely, I can even find specific documentation for the print function itself. And rather than pull that up in a browser, I'm going to go ahead and highlight just one line from that same URL, which is this, and this is easily the most cryptic thing we've seen yet, but this is the official documentation for the print function. And one of the best things you can do when learning a programming language is, honestly, learn to read the documentation, because truly, all of the answers to your questions will in some way be there, even though, admittedly, it's not always obvious. And I will say too, Python's documentation isn't necessarily the easiest thing, especially for a first time or novice programmer. It too just takes practice, so try not to get overwhelmed if you're not sure what you're looking at. 

But let me walk you through this example. This again is a line of text from Python's official documentation for the print function. What this indicates as follows is this-- the name of this function is, of course print. Then there's a parenthesis over here and another close parenthesis way over there. Everything inside of those parentheses are the arguments, the potential arguments, to the function. However, when we're looking at these arguments in the documentation like this, there's technically a different term that we would use. These are technically the parameters to the function. So when you're talking about what you can pass to a function and what those inputs are called, those are parameters. When you actually use the function and pass in values inside of those parentheses, those inputs, those values are arguments. So we're talking about the exact same thing-- parameters and arguments are effectively the same thing, but the terms you use from looking at the problem from different directions. When we're looking at what the function can take versus what you're actually passing into the function. 

So what does this imply? Well this syntax is pretty cryptic, but at the moment, just know that an asterisk, a star, and then the word "objects" means that the print function can take any number of objects. You can pass in 0 strings of text, one string like I did, two strings like I did, or, technically, infinitely many if you really want, though that code is not going to look very good. After that we see a comma, then we see another parameter here called SEP, short for separator in English. And notice the equal sign and the single quote, space, single quote. So 'space' I don't know what that is yet, but I think we've seen a hint about it. 

Let's focus though for a moment on this-- the print function takes another parameter called end and the default value of that parameter is apparently, based on this equal sign and these quotes, \n. And what is \n, if you'd like to chime in in the chat? Anyone who's program before has probably seen this, though if you've never programmed before, this might look quite cryptic. Backslash n means new line, and it's a way textually of indicating if and when you want the computer effectively to move the cursor to the next line, create a new line of text. And so technically, if we read into the documentation, we'll see more detail on this. The fact that there's a parameter called end in the documentation for the print function, just means that by default this print function is going to end every line with \n. You don't literally see \n, you see a new line. You see the cursor moving to the next line. 

Now by that logic, let's move backwards. SEP four separator-- the default value of separator is apparently a single blank space. Well where have we seen that? Well recall in an earlier example when I passed in not just one but two arguments to the print function. Recall that they magically had a space between them. In fact, they had that space + my own space and that's why I deleted my space because at that point it was extra. So this just means that when you pass multiple arguments to print, by default they're going to be separated by a single space. By default, when you pass arguments to print, it's the whole thing is going to be ended with a new line. 

Now just by knowing this, and let me literally wave my hand at the rest of the documentation for another day, there's more things that print can do, but we're going to focus just on SEP and on END, let's see if we can't leverage this now to solve that original problem. The original problem was this, I don't like how Hello, David is on two different lines. Well that's happening again because print is automatically printing out a new line, so let's tell it not to do that. Let's tell it by passing a second argument to the first use of PRINT to say END = quote, unquote-- not \n, which is the default automatically. Let's make it quote, unquote nothing else. Let's override the default value so there is no new line. There's literally nothing there. And let's see what happens. 

Let me now go down to my terminal window and clear it. And I'm going to run Python of Hello.py, Enter. I'm going to type in my name, David and I think now everything is going to stay on the same line because-- and it did-- this line here, 5, is going to print out Hello, comma, space, but then nothing at the end of it because I changed it to be quote, unquote. The second line is going to print the name, David, or whatever the human's name is, and it will move the cursor to the next line because I didn't override the value of END there. 

Just to see this more explicitly, if you do something cryptic like, well I have no idea what's going on. Let me just put in temporarily three question marks here. We'll see the results of this too. Let me go back down to my terminal window, run Python of hello. py, what's your name? David. And now you see literally really ugly output, but you see literally what's going on. Hello, comma, space, then three question marks, END, that print statement, and then you see D-A-V-I-D. So not a good outcome, but it demonstrates just how much control we have here too. 

And let me rewind further. Recall that in our other version of this, when I passed in Hello, comma and name, they were separated by a single space. So Python of Hello.py, D-A-V-I-D, Enter. That just worked. Well what if we override the value of SEP for separator? Instead of being one space, we could say something like, question mark, question mark, question mark just to wrap our minds around what's going on there. Let me now do Python of Hello.py, D-A-V-I-D, Enter. And you see two. These two inputs-- Hello, comma and the name are now separated in an ugly way by three question marks because I've overridden the default behavior of SEP. 

And even though the documentation uses single quotes, I've been in the habit of using double quotes. In Python you can use either. Strictly speaking, it doesn't matter, but you should be consistent and I generally always use double quotes. Python's documentation, though, always uses single quotes. Questions now on these types of parameters? And allow me to propose that we give these an official name. Up until now, when we've been passing values to print, those are called positional parameters-- positional in the sense that the first thing you pass to print gets printed first. The second thing you pass to print after a comma gets printed second. And so forth. But there's also these things we've now seen called named parameters. Named SEP, separator, or END, E-N-D for the line ending. Those are named parameters because one, they're optional and you can pass them in at the end of your print statement, but you can also use them by name. 

AUDIENCE: This may be a weird question, but I was wondering, what if someone wants to add actually quotation marks within the quotation marks? 

DAVID MALAN: Yeah, I like how you think. This is what we would call a corner case, right? Just when we've made-- right, this is all sounding great, at least as programming goes, but, wait a minute, what if you want to print a quote? That's a really good question. Well, let's see if we can't figure this out. Suppose that I want to print out not just the user's name. Let me simplify this further. Let me go ahead and get rid of a lot of this, and let me just say something like, Hello-- maybe I'm being a little sarcastic here. Hello, (sarcastically) "friend." You know, in that kind of tone. Well this is not going to work, actually, because you are trying to use quotes to be like "friend" in finger quotes, but you're also trying to end the sentence. And if I try running this, let's do this. Python of Hello.py, you'll see that this is just invalid syntax. Perhaps you forgot a comma. And this is actually a bit annoying. Sometimes the error messages you see are misleading. Like the computer, the language, doesn't really know what's going on so it gives its best guess, but it's not necessarily correct. 

But I can solve this problem in a couple of ways. I can do this-- I can change my outermost quotes to single quotes. Because recall a moment again, I said you could use double quotes or single quotes so long as you're consistent. So that's fine. If you use single quotes on the outside, you can then use double quotes on the inside and you'll see them literally. So for instance, if I run Python of Hello.py, there we go. Hello, "friend." 

But there's another way. If you insist on using double quotes as you might want to, just to be consistent, you can also use that backslash character again. We saw the \n a moment ago. And that meant we don't want a literal n to be in the output, we wanted a new line. So the backslash actually represents what's called an escape character. An escape character is one that you can't just type necessarily once on your keyboard. You need to express it with multiple characters. So I can actually put backslashes in front of these inner double quotes so that the computer realizes, Oh wait a minute, those aren't quotes that finish or start the thought, they're literal quotes. So now let me go back to my terminal window, run Python of Hello.py, Enter. And now it's working as well. So escaping is a general technique that allows us to do that too. 

And if I may, let me rewind now on these examples and go back to where we left off with my code, I'm just undoing all of that, because I want to get back to the point ultimately of specifying now a final way of solving this problem. Well, it turns out that we have yet another way we can solve this problem, which is perhaps the most frequently done now or at least the most elegant when it comes to setting us up for longer and longer uses of strings. You can use a relatively new feature of Python that allows you to do this. You can literally put, not the name of the variable like that in your string, because we already saw this is wrong, right? If you do this, you will literally see Hello, comma, name. But what if I do this? What if I put curly braces or curly brackets around the variable's name? Notice VS Code is actually very subtly changing the color of it. So VS Code knows something interesting is going on here. 

Let me run this program, but I'm not done yet Python of Hello.py, Enter. D-A-V-I-D, Enter. OK, obviously not what I want, but I need to tell Python that this is a special string. This is what we're going to call a format string or an F string, a relatively new feature of Python in the past few years that tells Python to actually format stuff in the string in a special way. And the symbol via what you do this is a little weird, but this is what the world chose. If you put an F at the beginning of the string, right before the first quote mark, that's a clue to Python that, ooh, this is a special string. Let me format this in a special way for you. Let me now rerun the program. Python Hello.py, Enter. D-A-V-I-D, Enter. And now we see the goal this whole time-- Hello, David. 

We don't start with this way, because I think if we did this the first way, you'd be like, why are we doing this? What are all these magical symbols? But this is just yet another way to solve the same problem. But let me propose that we consider now yet other things we can do with strings. And it turns out that even as we've been doing some relatively simple operations here, we've generally been trusting that the user is going to cooperate and that is to say that they're going to actually type in what we want them to type. 

Now just because they type a string, though, doesn't mean it's going to look the way we want. You and I, honestly, as humans are actually in the habit-- on websites and apps-- of like accidentally hitting the spacebar a lot, either at the beginning of our input or at the end, maybe because the space bar tends to be so big. It's pretty common to get accidental spaces before or after some users' input. You and I are definitely in the habit of not necessarily capitalizing words like we should. If we're sending text messages, we're probably being a little quick and just sending everything in lowercase, for instance, if that's your style, if your phone's not fixing it for you. Maybe in a formal letter you would capitalize things properly. But you and I as humans, we can't really be trusted to type things in a nice way necessarily when using some piece of software, be it an app or a website or something else. 

But it turns out that strings themselves come with a lot of built-in functionality. You can see all of that in Python's own documentation here. The string data type that we've been talking about comes with a lot of functionality built in that means that we can manipulate the user's input to do more than just join it with something else like Hello, we can actually clean it up or reformat it in a way that hopefully looks a little better for us. 

So let me go back to my code here and let me just demonstrate what might happen if a user doesn't cooperate. If I go ahead here and run Python of Hello.py, Enter. Let me just sloppily hit the spacebar a few too many times. Why? I just wasn't paying attention. And now I'm going to type in my name D-A-V-I-D and, I don't know, I hit the spacebar a couple more times. Like it's kind of a mess. It's all lowercase. That's not going to necessarily look grammatically right. It's got spaces here and here. The program is going to print exactly that and that looks really bad, at least if we're prioritizing aesthetics and grammar. Like, why are there so many spaces after the comma? This is not a very nice way to greet your users. 

But we can clean this up. It turns out that built into strings, which, again, is this data type, so to speak, this type of data in Python-- is the ability to actually do things to that string. So let me do this, I can actually go ahead and do something like this-- name = name.strip. And what does this do? Remove white space from string. And what do I mean by this? Well, on the right-hand side, notice I've written the variable name called Name. I've then used a period or a dot, and then I seem to be doing what's a function, right? Any time we've seen a function thus far, we see the function's name-- print or input, then we see a parenthesis, then another parenthesis, and that's exactly what I see here. 

But I'm using this function a little differently. Technically, this function is-- in this context-- called a method. And what do I mean by that? Well, if Name is a string, a.k.a. STR, well it turns out, according to the documentation, there's a lot of functions that come with strings in Python. And you can access that functionality by using the name of a string like literally name here, then a period, then the name of the, function and then an open parenthesis and a closed parenthesis. Maybe some arguments inside of those parentheses, but in this case, it doesn't need any arguments. I just want to strip the space from the left and the space from the right of the user's input. But that's not enough. I want to remember that I've stripped off that white space on the left and the right, so I'm going to use the equal sign again here. And notice that just as before, this doesn't mean equality, this means assignment from right to left. So when this line of code here-- name.strip-- returns to me, a.k.a. a return value, it will return the same thing that the user typed in, but with no more white space to the left or to the white [CHUCKLES] to the right. 

So then the equal sign assignment is going to copy that value from the right to the left, thereby updating the value inside of my name variable. So you can not only assign values to variables, you can absolutely change the value of variables by just using the assignment operator, the equal sign again, and again, and again, and it will just keep copying from right to left whatever the new value should be. 

So now if I rerun this program, Python of Hello.py, Enter. I have D-A-V-I-- oop, let's do it again. Space, space, space, space, space. d-a-v-i-d in all lowercase, space, space, Enter. It's better. It hasn't fixed my capitalization, so I'm still being a little sloppy with the first D, But it has stripped off all of that extra space. Super minor detail, right? Like this isn't all that exciting, but it just speaks to the power of what you can do with just a single line of code. 

Now what else can I do here? Well I could capitalize the user's input. Let me go ahead and try this. It turns out that I could also do this-- name.capitalize. So let me go ahead and capitalize user's name. And again, I'm making comments and there's no one right way to write the comments. I'm just using some short English phrases here to remind myself of what I'm doing. What's now going on here? Well let me go ahead and run Python of Hello.py, Enter. Space, space, space, space, space, d-a-v-i-d, space, space, Enter. OK. Now it's looking prettier, right? No matter how the user typed in their name, even a little sloppily, I'm now fixing that. 

But let's try something. I'm getting a little curious here. How about this? Space, space, space, space, space, d-a-v-i-d space m-a-l-a-n-- I'll use my last name now-- Enter. OK, so ironically, "capitalize" is not really capitalizing everything we want. It's clearly capitalizing what? Just the very first letter. So it turns out that, again, there's other functions in Python that come with strings. And if we poke around the documentation, scrolling through a URL like that, I bet we'll find another solution, one of which is actually this. 

Let's actually change this to title. There's yet another function that comes with strings called Title that do title-based capitalization, just like a book or a person's name, capitalizing the first letter of each word. And this is just going to do a little more work for us. So let's go ahead and run this. And as an aside, I'm kind of tired now at this point of typing Python, Python, Python all the time. It turns out that when using a command line interface like this, you can actually go back through all of your old commands. What I just did a moment ago was I hit the up arrow. That immediately goes back through my history of all of the commands I've ever typed. So this is just a faster way now for me to repeat myself than typing everything manually. 

Let me go ahead and hit Enter, space, space, space, space, space, d-a-v-i-d m-a-l-a-n space, space, all lowercase, Enter. Now it's looking better. Now I've capitalized things and cleaned things up. But what about my code? I've got like eight lines of code now, four of which are comments, four of which are actual code. Do I really need this much? Well, not necessarily. Watch what I can also do in Python. Let me not bother capitalizing the user's name separately. Let me say this-- and capitalize user's name. I can chain these functions together. I can add Title to the end of this. And now what's happening? Well again, with a line of code like this, you first focus on what's to the right of the equal sign, then we'll get to the left of the equal sign. 

What's on the right of the equals sign? This line here. Well what does this mean? Get the value of the name variable, like D-A-V-I-D space, M-A-L-A-N. Then strip off the white space on the left and the right. That is going to return a value. It's going to return D-A-V-I-D space M-A-L-A-N without any white space to the left or right. What do you want to do with that return value? You want Python to title case it, that is go through every word in that resulting string and fix the first letter of the first word, the first letter of the second word, and so forth. And then-- now we can finish our thought-- copy the whole thing from right to left into that same name variable. 

And you know what? I can take this even one step further. Why don't we go ahead and do this if we want. Let me get rid of all of that, and let me just do strip and title all on that first line. And now we've gone from like eight lines of code to four. It's a lot tighter. It's a lot neater. And even though reasonable people might disagree, it's arguably better because it's just easier to read. Fewer lines of code, fewer opportunities for mistakes, it just allows me to move on with my next problem to solve. 

All right, let me pause here and see if there's any questions on these methods. A method is a function that's built in to a type of value, like these functions are. Or on F strings which we saw a moment ago. 

AUDIENCE: Yes, hi. Thanks, David. So is there a way to remove the spaces between the spaces that I might have added? 

DAVID MALAN: Short answer, no. If you read the documentation at that same URL earlier, you'll see that strip removes from the left and the right, but not in between. In fact, there's two other functions that come with strings. One is called L strip, the other is called R strip, that allow you to do one or the other. If we want to start getting rid of space in the middle, we're going to have to do a different trick altogether. 

AUDIENCE: How many functions can be combine like this dot strip, dot title, all combined. So how many we can combine? 

DAVID MALAN: Yeah, a really good question. Technically, as many as you want, but at some point your code is going to start to look really, really bad, right? Because the line of code is going to get really, really long. It's eventually going to maybe wrap around again and again. So at some point, you just kind of say like, uh-uh, that's too many. And you start breaking it up into multiple lines like I did. Maybe reassigning the value to the variable as needed. And this is actually a good question. 

If I can pivot, [INAUDIBLE] off your question, I mean, what do people think? If we could go ahead and put everyone's hands down for a moment. Let me ask this-- is the way I've done this now, with strip and title and input all in the same line-- better than my previous approach? In Zoom you can use the Yes icon or the No icon. If you think this version is better, say Yes. If you think this previous version was better, for instance, this one here where we had everything broken out, say No. And then we'll see why in just a moment. I proposed earlier that reasonable people can disagree and that's absolutely the case. Doing it one way or the other isn't necessarily best, at least if you can justify it. Let me go back to the most recent version here. 

All right so we're seeing a lot of Yeses and a lot of Nos. Why don't we go ahead and call on one of the Yeses, if we could. Someone who's voting Yes, why do you think the current version of this code is indeed better than the previous longer version of the code? 

AUDIENCE: I think it's more readable. So I can say, this is the name variable. It gets some input and then remove the space and give it a title. And there you go. You have a hello, name. 

DAVID MALAN: Yeah, I think that's pretty reasonable. It's very readable, at least if you're in the habit, as you are in English, of reading left to right. It just kind of flows very naturally as a result. The lines is not really that long. It's certainly fitting nicely onto the screen. So I think that's a good argument. How about a counterpoint, though? Someone who voted No, if we could call on someone who thinks this is worse. 

AUDIENCE: Because it's not readable at all. It seems like it's a very long line. So I think it's better to separate. 

DAVID MALAN: Yeah. I think that's persuasive too, right? It's getting a little longer. And even though my sentence here-- what's your name-- is relatively short, you could imagine that this could get even uglier quickly if I were asking a longer question of the user, that's going to make this line of code even longer and therefore less readable. It might be less obvious to me or my colleagues that I am calling strip or that I am calling title. It might be kind of an unexpected surprise. So I think that's reasonable too. 

In short, there is no right answer here. And in fact, part of the process of getting better at programming is getting your own sense of style or working for a company where they might prescribe which way is better than the other because they just want everyone doing the same thing, even though reasonable people might disagree. Ultimately though, so long as you have what's a pretty good argument in favor of one way or the other, like ultimately, that's what's important. If you're just doing things because you don't really know which one is better, that's not great. But if and when you start to acquire opinions and if your boss, if your teacher, if your colleague, your friend, can challenge you and say, wait, why did you do it like this? They might not agree with you, but at least have an answer, and that should be sufficiently persuasive in general. 

Now, strings come with a whole bunch of other methods as well, among which is one called split, which can, as the name suggests, split a string into multiple smaller substrings, so to speak. For instance, if the human here is in the habit of typing in their first name, then a space, and then their last name, and you want to go ahead and greet them only by first name, well we could actually leverage that single space between the first name and last name and split that string into two smaller substrings. How can we do this? Well, let me go ahead and in between these lines proactively comment that we're about to split user's name into first name and last name. And then let's go ahead and take that name variable, which currently contains something like, presumably, David, space, Malan, and let me go ahead and call split and pass in as the argument to split a single white space, thereby indicating that I indeed want to split on that character 

Now it turns out split is going to return a sequence of values, ideally a first name and then a last name. And we can actually, in Python, assign both of those values from that sequence at once to some variables. For instance, first comma last equals, and that's going to have the effect from right to left of putting the first such value in the first variable, the second such value in the second variable. So now on my last line of code, I can go in and say hello not to the full name, something like David Malan, I can just say Hello, first. All right, let's go ahead and clear my terminal window, run Python of Hello.py and hit Enter. I won't bother with any leading white space this time, but let me go ahead and type in David space Malan, and crossing my fingers as usual, Hello, David is what we now see. 

All right, so we've seen so much, so many examples thus far involving strings, but certainly programs and programming languages can manipulate other types of data as well. Let's go ahead and transition then to another very common type of data in Python, in programming more generally, namely integers, otherwise known in Python as INT-- I-N-T. So just as STR, S-T-R is short for string, so is INT in Python short for integer. Well, what's an integer? Well just like in math it's a number like negative 2, negative 1, 0, 1, 2, and all the way toward negative infinity, all the way toward positive infinity. 

But there's no decimal point in an integer. It's just a number like negative 2, negative 1, 0, 1, and 2 onward. That's an INT. Of course, in the world of mathematics, there's lots of symbols that we use. And we've seen + before, although we used it for a different purpose. But Python supports these symbols and more. And Python allows you to add numbers together +, subtract numbers, multiply numbers, divide numbers. And the only one here that might look a little strange to people or unfamiliar is this percent sign, but it doesn't mean percent in this context. If you use a single percent sign in a Python program, that's actually the so-called modulo operator, the operator that allows you to take the remainder after dividing one number by another. So we'll see examples of that before long, but the first four of these are perhaps quite, quite familiar. 

Well it turns out that in Python you cannot necessarily-- you don't necessarily have to keep writing code in a file like Hello.py and then running it in a terminal window. One of the features that many people like about Python is that it supports this so-called interactive mode. Like you can start writing Python code and immediately execute each of those lines interactively, especially if you don't care about saving all of your lines of code. You just want to execute code and get back some answers. So for instance, let me go back to VS Code here and let me close Hello.py and let me click on the little triangle over here in my terminal window just to make it much bigger just temporarily for a moment. 

So I'm not creating any .py file now, I'm just going to run Python by itself at my prompt. And you'll see when I do this, I get some cryptic looking output and the date and time at which the program was last updated, and so forth. But I ultimately get three triple brackets like this. Is the interactive mode for Python. So I'm running the Python interpreter and any time I type a line of code in the interpreter, it's going to execute it immediately. I don't have to keep running Python again and again. It's as though in the human world, if you were standing next to a human who speaks some other language, and you're just having a conversation with them back and forth, it's all happening-- the translation-- immediately. 

So what might I do in interactive mode? Well I could do something like 1 + 1, Enter. That's actually code, all right? You might not think of it as code, but if a bit of arithmetic and you know numbers, and you know +, that's valid Python code. And you can use Python really as a fancy calculator. But I could do other things too. If I want to print to myself Hello, world, I can also print out that line of code there too-- Hello, world. So it's interactive in the sense that the moment you execute a line of code, boom, you see the result. 

We're generally not going to do that because at least when teaching the language, we tend to want to do things incrementally and we want you to be able to see where it is we came from. And we want to be able to try things again and again, especially if we make mistakes. But know that this is indeed a feature of Python, this so-called interactive mode. But let's focus for a moment now, not just on that interactivity, but really on the fact that Python apparently supports integers and mathematics and some of those basic operations. And let's see if we can't make maybe our own little calculator. 

So let me go ahead and open up VS Code again, and I'm going to shrink down my terminal window, and I'm going to create a new file called Calculator.py. So to do that recall, I can type Code down here, and the name of the file I want to create, .py, Enter. That gives me a new tab up top. So I have already closed Hello.py. I'm now in Calculator.py. And let's just make a simple calculator that does some addition for me. But I'm going to do it in a file so that we can iterate on this and make changes for better or for worse over time. 

Let me go ahead and first declare a couple of variables. I'm going to do the mathematical thing of calling my first variable x, my second variable y, and then I'm going to give myself a third variable z = x + y. And then I'm going to go ahead and print out z. Now this program, admittedly not very exciting or interesting, in fact, it's a little less interesting than printing stuff on the screen like before with strings, but we'll build on this and see what other features exist in Python that we can leverage. So hopefully, if Python knows it's math as well as I do, when I run Python of Calculator.py, I should see hopefully that 1 + 2 = indeed 3. All right, so not that surprising and not that interesting. And honestly this isn't the most useful program because it's always going to calculate 1 + 2 = 3. Let's at least make this program, say, a little more interactive, right? 

We already know from previous examples how we can get input from the user. Let's bring back that input function. And let's do this, let me go ahead now and at the top of my code, let's change x to not be the number 1 always, let's change it to be whatever the return value is of asking the user for x. And I can use any English or human language I want here. I'm going to say, what's x? Just like I asked before, what's your name? And I'm going to do the same thing for y. I'm going to use Input again, but this time change the question to be, what's y? 

All right, at this point, I think I'm going to leave the rest of the code the same. Z = x + y And then print z but what's nice now is that I think I have a nice interactive calculator. Right, now it's not going to do 1 + 2 all the time. It's going to do whatever the user types + whatever the user types. So let's try this. Let me go ahead and run that program. All right, let's do it. 1 is going to be x, 2 is going to be y, and of course, everyone in agreement, 1 + 2 = thr-- huh. What's going on there? Either your math class misled you or I have misled you. Why don't we call on someone here to see if you can't help us reason through what the bug is, what's the mistake? Anjali, if I'm saying it right. 

AUDIENCE: I think the issue is that it's concatenating strings because you use the + operator instead of adding. 

DAVID MALAN: Perfect. So perfect intuition. We've seen that + is used a little differently in the context of strings because it concatenates, that is, it joins the two strings, and that seems to Indeed be what's happening here, even though the user typed a number. But the interesting thing here is that, when you get user input, because they're using a keyboard on their Mac or PC or their phone, it is always going to be text. It might look like a number, but by default, it's coming from the keyboard as a string-- that is, as text. And so, how do we go about resolving this if ultimately we don't want to treat those inputs as strings, we want to treat them as actual numbers? 

Well we need another function and it turns out in Python that you can convert sometimes from one type of data to another type of data, for instance, from string to INT by doing something like this. Let me go back into my code and let me change x before adding it to y to be whatever the integer version of x is, + whatever the integer version of y is. So it turns out that INT is not only a type of data in Python, it's also a function, and it's a function that if you pass in an input, like a string, so long as that string looks like a number like 1 or like 2, it will convert it to an actual number that you can perform mathematics on instead. 

So if I now go back to my terminal window and run Python-- and let me show you another trick. "Calculator" is kind of a long word. It's a little tedious to type. Notice what I can do in my terminal window, in a command line interface in general. If I start typing C-A-L for calculator, I can actually hit Tab to finish my thought. So auto-complete is possible in a terminal window like this. Type the first letter or few letters and then, boom, with Tab, it'll finish your thought for you. Or you can go back in your history like I did with the Up and Down Arrows. 

Let me go ahead and execute this. What's x? 1. What's x? 2. And there we go. Now we have a general purpose calculator that's going to support not just the addition of 1 and 2, but now any two integers that the user types. And let me now improve this, right? We've seen how we can make improvements to code and I don't know if it's going to necessarily be better, but let's try this. Do I really need the z variable? It's worth noting that I'm creating a variable called z, and then I'm immediately using it on the next line of code. Now that's not that compelling, because if you're creating a variable and then immediately using it, but never again using it, did you really need to take the time to introduce another symbol and another variable just to use it once and only once? Well, maybe not. Maybe we don't really need z in this way. 

Maybe I should go and do something like this. Maybe I should get rid of z here. Maybe I should change this to be INT up here, change this to be INT up here, doing something that's pretty interesting now. Even though it's a bit of new syntax, notice that you can nest functions, so to speak. You can put one function call that is the use of a function inside of the use of another function so that the return value of the inner function becomes the argument to or the input to the outer function. Just like in math, if you have parentheses, parentheses, parentheses, your teacher probably taught you to focus on what's inside the innermost parentheses first and then work your way out. Same thing with programming. That's what's Python is going to do. It's going to look at what's inside of the parentheses first, it's going to get the answer, and then it's going to pass the return value to the outermost function. 

So what happens on line 1 now is that the input function gets called first, then the result of that, quote unquote one becomes the input to the INT function, and same on line 2. The output of what's y becomes the input to this INT function. And now there is no z. I could just do print x + y. And because I've taken the time to convert each of those strings to an integer, I think we're OK. So let me try this, Python of Calculator.py, Enter. 1 and 2, and we're still getting 3. Not 12, or not 12, 1,2, we're indeed getting 3. And we've additionally gotten rid of the variable because we didn't necessarily need it, it seems, especially if only using it once. 

Well here too, let me put everyone's hands down for just a moment and let me ask as before-- this version now which uses INT around the invocations of input, and does not use z, is this better than the previous version? If you want to vote Yes, go ahead. Or if you prefer the old way, vote No. The old way, I'll undo all of this as we vote, instead looked like this. All right, and let me go back to now the newest version. Let's take a hand of the Yeses, someone who thinks this latest version is better. 

AUDIENCE: I think this way is better because it allows us to immediately see what the x and y variables are with integers and so we know what to expect from them. And also the print argument is more intuitive. We avoid too much clutter in the code. 

DAVID MALAN: I think those are all good reasons. It's nice and succinct. The lines of code are not very long. I don't need to know what z is because it doesn't exist. It just sees print x + y. I like that. But someone who prefers the older way where we did have z and we more explicitly passed individual variables to the INT function. 

AUDIENCE: Yeah, hi. I think that the earlier version is better because when-- I mean, if user input something else other than, let's say, I mean, let's say, they type 1 and 2, like, so it will be easier to debug. 

DAVID MALAN: This version or-- this version here or the old version? 

AUDIENCE: The old version. 

DAVID MALAN: OK, that's fair. And in fact, I'm being very careful today, as best I can, not to mess up. I have thus far only inputted integers when I'm expecting integers. And Raoul's actually pointing to something we'll come back to in the coming weeks, how do we actually handle errors? What if the user doesn't type in the number 1 or the number 2, or a number at all? What if they type in a word like cat, C-A-T? That's not a number, and I bet I can't convert it to an integer. But for today, I'm not going to focus on that. I'm just going to hope that the user cooperates. But that's not going to be the case. And so perhaps one way would set us up for more success when it comes to handling those errors. 

Now for today's purposes, which is better? Eh, I mean, I like both. And I think both of you made very valid arguments in there too, so long as you have a justification that feels pretty reasonable. I mean, that's what ultimately matters. But acquiring, again, a sense of the trade-offs here. Well, is this way better? If so, why or why not? Just understanding what those trade-offs are. But generally speaking, prioritizing readability is a very good thing. Making your code readable for someone else is a very good thing and very good for you too so that when you wake up the next morning, or you come back the next week, or the next year, you too can read your own code without having to waste time trying to remember what you did. And simplicity tends to be a good thing too-- keeping your code simple. 

So as you get more comfortable with programming, you might be tempted to try to combine an entire program into one long line. For instance, let me do just that. Technically speaking, we don't really need x in a variable. We don't really need y in a variable. We could also do this-- I could just get rid of x and y altogether. I could then now eliminate that and make it just one line of code. OK, so on some sense, you might be inclined to think, wow, that's really nice. You made it one simple line of code. I would argue this actually isn't that simple. 

Now I think I'm starting to nest too many things. I have to think about print and INT and input. I then have to notice that, OK, I've opened two parentheses, I've closed two of them. There's a +. You're making me think too much and any time you make me think, you're wasting time. And any time you complicate the look of the code like this, you're just going to increase the probability of mistakes and tactical mistakes or logical errors in your code. So if all the things we've done, this is the only one that I would argue, yes, it's one line and it's nice and compact. It's just not readable enough. I would shy away from doing this, especially since two of those function calls are getting input from the user. 

But there too, reasonable people might disagree, but that's the kind of visceral reaction you should have sometimes when code starts getting a little too complicated, a little too clever, perhaps, for its own good. 

All right, well it's not just integers we have access to. Let me propose that we transition from integers to one more data type here, namely a float. So again, a string is a sequence of text. An INT is an integer like negative 1, 0 and 1. A float is a number with a decimal point, properly called a floating point value. And you can think of the floating point as being the decimal that might be over here or over here with some number of digits to the left or the right. Mathematically, it's a real number, a number that has a decimal point in it. So that's a third type of data that Python supports. 

Right now our calculator is somewhat naively assuming that the user is only going to type in integers, but if I want to support floating point values too, I think I can just make a couple of tweaks. So I'm going to go back to VS Code here. And instead of just converting the user's input x and y to integers on line 1 and 2, let's just make a simple change. Let's actually convert it to a float on the first line and a float on the second line here. Now I think, if I go down to my terminal window and run Python of Calculator.py, let's type in a number like 1.2 with a decimal point and 3.4 with a decimal point, and there we go. We have 4.6 as the final answer. So that wouldn't have worked before if I was only expecting integers from the user, but now that I'm expecting floating point values and accommodating it, I can actually now do floating point arithmetic as well. 

But suppose that I don't really want the final answer to be a floating point value like 4.6. I would be happy if we just round to the nearest integer. So I want to support the user typing in floating point values with decimal points, but at the end of the day, I just want to round the result to the nearest possible integer, for instance. Well it turns out that here too Python comes with some functionality built in. And in fact, if we return to this URL from earlier wherein all of the Python built-in functions are listed, there's one called "round" which does exactly as we would expect, it takes as input a number and then rounds it for us, for instance, to the nearest integer. But if we look a little closer at that documentation as we can here-- I'll provide an excerpt-- this is what the function looks like in the documentation. And recall that earlier we looked at the documentation for print and this is similar in spirit that this shows us not just the name of the function but its available parameters, that is, inputs that we can provide when using this function. But this is a little cryptic too, just like Print was, and it adds some syntax. So let's see. 

The name of this function here is of course Round and its first argument is a number. Notice this time there's no star, there's no star objects like there was for print. The Round function takes just one number as its first argument, period. That's its positional parameter. But notice this syntax. And this is a convention in programming or technology more generally, generally speaking, when you see square brackets and documentation like this, this means that you're about to see something optional. And so what this means is that if you want to specify more precisely the number of digits that you want the round function to round to, you can specify it here by adding a comma and then that number. So if we read the documentation, if you don't specify a number of digits, you just specify the number to round, it rounds to the nearest integer. But suppose you want around to the tenths place, or the hundredths place that is one or two digits after the decimal point, you could additionally pass in comma 1 or comma 2 to be more precise. 

So that's what the documentation, there is saying. Let's see if we can't then translate this to some actual code for us. So if I go back now to VS Code and I consider that I want to go ahead and round x and y, I can do this in a couple of ways. I could do round x + y, but you know, I'd actually kind of prefer to break this now out into two lines. I don't have to, and reasonable people here might disagree, but I'd like to revert to a scenario where I'm printing z, so that I can just a little more clearly to myself, to others, say z = the rounded result of x + y. It's not necessarily the better way to do it, but I'm a little more comfortable with breaking out my thoughts one at a time, especially if I want to start commenting each of these chunks of code. 

All right, let me go down to my terminal window now and run Python of Calculator.py. What's x? Let's do 1.2 again. Then let's do 3.4. And now it was previously 4.6, but now it's been rounded up to the nearest integer, which of course is going to be 5. All right, what if I wanted to change this a little further? What if I wanted to support maybe really big numbers, big numbers, irrespective of rounding, let's just do something like this. Let me go ahead and run Python of Calculator.py again and let me just add 999 + 1. And notice, I don't have to type decimal points, even though I'm converting to float, my program will just allow me to type decimal points, but I don't need to oblige. The answer of course here should be, and is in fact, 1,000, whether or not we round. So that's just arithmetic with integers here. 

But in the US, we tend to format long numbers by putting commas after or before every triple of digits. Other countries flip it and they use periods and commas instead. That's a system setting. You can change that on your own Mac or PC or device for Python or any language, but for me, I'm using the US approach here, which is periods for decimal points and commas for separators. What if I wanted this to be outputted as 1,000? Just to make it a little more clear that it's 1,000 and not something like 100. That's even more useful when it's like one million-- 1,000,000. Wouldn't it be nice if we could automatically output those numbers as well? Well, it turns out that we can. There is a way using Python to actually specify that we want to include commas like this. And here we have an opportunity to bring back our old friend, the F string. 

First, let me do something that's not that productive. First let me do this. Let me print out the value of z, but wait a minute. I can't just say "z" because that's literally going to print z on the screen. So let me wrap it with those curly braces like I did before, but that too was not enough. I literally needed to add an F at the beginning of my string to tell Python that this is an F string, a format string. That now is going to print out, not very interestingly, just the value of z itself. So I'm going to great lengths just to print z when really I could have just passed z as the sole argument. 

But just to ensure that I haven't broken it, let's do this again. 999 + 1, Enter. OK, it's still 1,000. So I didn't make anything worse. But notice-- and this syntax is unfortunately a bit cryptic-- notice that I can actually do this. I can put a colon after the z and I can put a comma thereafter. This looks very cryptic, admittedly, and even I have to constantly look things like this up in the documentation to remember the syntax. But here, let me run it again. Python of Calculator.py, 999 1 and now notice that the number has been automatically formatted for me. If I were in a different country or locale, I could absolutely override this to use periods instead of commas or vise versa. But in this case here, it's just happening for me automatically. 

So there too we see a hint of what it means to really format a string. There's even more power-- more powerful capabilities built into that. All right, let me pause here to see if there's any questions now on floats, on rounding, or on this use of F strings. 

AUDIENCE: Yes, so I have a question. So when using floats, is there like a cap to how many decimal points it can have? 

DAVID MALAN: A really good question. So floats, yes, and this is a problem we'll revisit before long. Floats cannot represent numbers infinitely precisely. In a nutshell, because computers only have so much memory. They only have a finite amount of memory. You and I only have a finite amount of hardware inside of the computer, so at some point, they're going to have to round. Right now I'm rounding automatically. Effectively computers will eventually have to do that for us, but we'll see that as a fundamental problem before long. 

Allow me to turn back just for a few final examples on float before we introduce a few final examples that allow us not just to use functions, but to make our own. Let me propose that we also try our hands at a bit of division here. Let me propose that we modify this calculator now to still take a couple of floats, but let's now just do something a little simpler than-- a little different from this, just doing x divided by y. And let me go ahead and get rid of my format string and just keep it simple for now, printing out z instead. And what are we going to see here? Well just some simple division. So Python of Calculator.py, let's do something like 2 divided by 3, and of course I get 0.66666. And to Ethan's question a moment ago, it does seem to be finite. It's not rounding in a weird way here, but I only seem to see so many digits. That's an inevitability of using a float in this way. By contrast, just so you know, integers nowadays in Python can be as big as you want them to be. Unlike other languages, there is no upper bound on how big an INT can be now in Python, but there is a bound on just how precise a floating point value can be. 

All right, now that I've got some simple division working here, let's go ahead and round this. It would be nice to round this really long number 0.6666666 and so forth to maybe just two decimal places. We've seen how to do this with round, though, at least in its documentation. Let's just round this not to the nearest INT, by passing in just x divided by y, which is one argument, once the math is done inside of the parentheses, I don't want to pass in just one argument. I want to pass in two so that I can specify n digits, number of digits, which you'll recall was the second parameter for round. 

Let me go ahead and run Python of Calculator.py. I'll do the same thing-- 2 and then 3, 0.67. So here too we see a way of rounding now, not just to a nearest integer, but to a nearest number of digits. But there's another way to do this here. And in fact, this evokes our F string example again. Let me go ahead and change this. Suppose that you didn't remember the round function or, for some reason, you didn't want to use it. You instead want to just use a format string. Well, let's go there. 

Let me do "z" but let me surround it with those curly braces. Let me add the F at the beginning, and again, this is not interesting yet. This is just going to print out z, but I'm adding a lot more complexity to turn it into an F string. But notice I can do something else after my variable name, after the colon. If this were going to be a big integer, I might want to use a comma like before to separate each triple of numbers with commas. But I don't. I'm going to use a different sequence of characters. I'm going to say 0.2F and this too is one of these very cryptic things I have to constantly look up because I forget if I don't use it that often. So don't be intimidated if this looks especially weird, but this is, according to the documentation, the way you specify using an F string how many digits you want to print. 

So let me run this version of the calculator. Type in 2 and then 3, we get the exact same thing. But again, this is just consistent with my claim that in programming we can so very often solve the same problem in multiple ways. This is just now the F string approach to that very same problem. All right, which one is better? It depends. In this case, they're pretty equivalent. You can imagine, though, it being useful to use a function sometimes so that you can pass in an argument like n digits as that second argument, or you can imagine just deciding in advance that you want 0.2 and then writing it like this. 

Let's transition now from focusing on strings and on integers and on floats to focusing now on functions themselves. We began today by focusing on how you can use functions that come with Python. But wouldn't it be nice if you could invent your own functions, especially if, to our point earlier, you find yourself solving the same kind of problem again and again? It's nice that Python comes with the print function because it's really useful to be able to print things on the screen, but wouldn't it be nice if you could print specific things on the screen by just calling your own function? 

Well let me propose that we do this. Let me go back to VS Code here and let me propose that we go back to Hello.py. I'm going to reopen Hello.py where we left it before and I'm going to go ahead now and propose that we consider how we can start improving this further by making our own function. I have written so many programs today that just say Hello and each time I'm using print. But wouldn't it have been nice if, from the beginning of today, we could just call a function called Hello that just says Hello for us? Now the authors of Python years ago didn't think that we need a special function just to say Hello, but I would like that to exist. I'm saying Hello so many times, I just want to be able to call a function Hello. 

So I'm going to start from scratch here. I'm going to delete all of my code from earlier and I'm going to pretend for the moment that a function called Hello exists. And I'm going to do just as I did before. I'm going to get the user's name with the input function, asking what's your name, question mark. And now I'm going to call a function Hello and then I'm going to print out the user's name. Now I will admit, Hello doesn't exist, so bad things are about to happen, but let's see what. 

Let me go down to my terminal window. Let me run Python of Hello.py. I think the first line is going to be OK because that worked before. And indeed, it's prompting me for my name. So let me type in David. The second line of code is apparently calling a function that looks like it's called Hello, because why is it a function? It has a parenthesis and a closed parenthesis immediately after it. And that's what every function we've used has looked like. But Python is not going to recognize this one. When I hit Enter now, I get a name error. Name "Hello" is not defined, did you mean Help? I didn't, although it's opportune that's what I need at this point is some help, but I am encountering this error because why? The function just doesn't exist. So how do I make this function exist? Well I need to create it myself using this key word, DEF, DEF for define. So here too, just as STR is short for string and INT is short for integer, DEF is short for define. 

If and when you want to define, create, invent your own functions, you can do so using now this keyword in Python. So let me go back to my code here and let me propose that we define this perhaps in this way. At the very top of my file, I'm going to first take a moment to define a function called Hello using DEF Hello, open parenthesis, close parenthesis, colon. What this means now is that Python is going to treat every line of code that I indent underneath this one as the meaning of this new function, Hello. So DEF is important as is the space. I get to choose the name of the function and I'm choosing to call it Hello. The parentheses with nothing inside means that this function at the moment is not going to take any inputs, no arguments there too. The colon means, stay tuned for some indentation. Everything that's indented beneath this line of code is going to be part of this function. It's going to be a super short function-- one line of code-- it's just going to print out "Hello." 

But now on lines 1 and 2, I have invented my own function Hello. Notice these dots that have now magically appeared here. This is just a setting of my text editor, VS Code in this case, that's just making super explicit to me that I've hit the space bar four times, or equivalently the Tab key once, which is converted automatically to four spaces. Generally speaking, I'm going to need to make sure that all of my indented code lines up now so that Python knows that it's all part of the same thing. But it's easy in this case because it's just a single line. 

But now, thanks to lines 1 and 2, the function Hello will absolutely exist when I'm ready to use it on line 6. So let me go down to my terminal window and run Python of Hello.py, Enter. Here comes my name again. And now when I hit Enter, I now see Hello, David. All right, we've kind of regressed though, right? This is not nearly as pretty as it once was. I think we can probably do better than this by improving things further. Why don't we consider, though, how we might say parameterize this same function? That is to say, can we customize Hello to maybe take the user's name as input so that we can say, not only Hello, but the person's name all on one line, all in one breath? Well I think we can do this. Let me propose that we do this as follows. 

Let me go ahead and up in my code, let me inside of these parentheses, let me come up with my own parameter name. I have complete choice here and I'm going to say that the name of my parameter will be the word To. Why? Because I want my function to sound like the verb it represents-- Hello. But who do you want to say Hello to? Well I'm going to call my parameter for this function To, just because in English, it kind of sounds nice to me. Hello To, who do you want to say Hello to? That's why I'm calling this parameter To instead of something simpler like x or y or z. 

All right, well what do I want to do with the word To? Well I can do a couple of different things. We've seen like so many different ways to implement Hello. Let me just add a comma there for grammar's sake. And then let me put the word To after that as the second argument to the function Hello. There's other ways we can do this and we've seen so many, but this one looks a little clear to me, I'll say. What's going to happen next? Well I don't think I need this extra print line here. I think what I'm going to do is this, I'm going to go ahead here and print out not the person's name manually, I'm going to instead say, Hello parentheses name. 

So what am I now doing? On lines 1 and 2 I'm defining my very own function called Hello, but this time that function has been designed to take a parameter, a single parameter, as input. And I'm using the value of that parameter which I called To to plug into print so that I see not only Hello but also that person's name. What am I doing on line 5? Same as always, I'm just getting the user's name. Line 6, I'm not only calling Hello, I'm passing as input the name variable as an argument so that that's what gets passed into Hello. And what's happening here is essentially this-- even though the variable is called Name here, when the function itself is called, the computer assumes that same value is now called To. So Name is essentially copied to another variable called To so that in the context of Hello, I can say Hello to that variable instead. And we'll see in a moment what happens if we don't keep those straight. 

Let me go ahead and run Python of Hello.py, Enter. What's your name? And now I'm crossing my fingers. Enter. There we go. We're back in business, but now I have my own custom function called Hello that's allowing me to say Hello to a specific person. And here's where now things can get really fancy. What if you wanted your Hello function to say Hello to someone specific, but, you know what, if you don't know who you want to say Hello to, you want to say Hello to the whole world, you can give parameters default values. We've seen that. Recall that with print there was a default value for SEP, for the separator. There was a default value for END, the line ending. We can do that too, and here's the syntax. 

If you want the value of this parameter by default, if not provided by the programmer, to be equal to "world," you literally do that in the same line you're defining the function. And I'll admit, it's starting to look more cryptic, but I'm still just defining a function called Hello, it takes a parameter called To, but I'm assigning it with the equal sign a default value of "world," just in case the programmer doesn't call Hello with an argument. And we can see this here. Let me change my code to use Hello in two ways. On line 5, I'm going to very simply call Hello, no arguments. Then on line 6, I'm going to get the name. Line 7, I'm going to call Hello with an argument. So you'll see Hello now being used in two ways. 

Let me go ahead and run Python of Hello.py. I'll type in my name. Oh, interesting. Notice I already see Hello, world, but that's expected because line 5 happens before line 6, but once I type my name, now the program is going to be a little more polite and say hello to me personally. So there too, we see with relatively simple but new syntax how you can implement functionality very similar in spirit to what the print function gave us automatically. Now you have control over doing that yourself. 

But let me now make this point too. One of the whole points of defining your own functions is one, just to avoid having to repeat yourself again and again. You don't have to actually keep reinventing the wheel and keep using the print function again, and again, and again, if you just want to say Hello. Wouldn't it be nice now if I could move this code that I wrote for defining the Hello function, and just to be dramatic, I'm going to hit Enter a whole lot of times, 50 lines down, and put my definition of Hello way further down in this file. Why? Well, just for in the spirit of out of sight, out of mind, because if I now rewind to the start of my program, now you can take for granted that, oh, Hello is a function. Why? Because it's there on line 1 and it has an open parenthesis and a closed parenthesis, which, up until now has meant, call this function. And then on line 2 we're getting a variable from the user by typing in their name and then we're calling Hello, passing in that value. 

Well at this point, I can just take for granted that Hello exists, even if it's way down further in the file or, as we'll see in future weeks, even if it's in a different file altogether. But there's a problem here. And let me go ahead and run this version of Hello.py. Notice that as soon as I run the interpreter, Python of Hello.py, I see a name error, name Hello is not defined. Again, did you mean Help? Well, again, fitting. I do need some help here, but I didn't mean to call the function Help. The problem here, though, is that Python is just taking me literally. I have defined my function Hello all the way down here, but I'm trying to use it way up here. And that's not allowed. Python's interpreter is going to take you literally and if you use a function, it must already exist by the time you are calling it. 

So how do I fix this? Well, apparently I can't do that. I have to define any functions I want at the very top of my file, but that too could get me into a bit of trouble eventually because if I constantly have to define a function above where I want to use it, you're kind of writing code in reverse, you're constantly writing functions up here, up here, up here, as opposed to writing your code logically, top to bottom. So let me fix this in a more standard way, which is to do this. Generally speaking, you do want to put the main part of your code at the top of your file. And in fact, I'm going to go so far as to define my function, called Main. It's not a requirement, but it's in data convention, and this just connotes to the reader that this is the main part of my program. 

I'm going to get rid of my empty Hello call now and only pass in one version with Hello, name. And then down here, a couple of lines further down, I'll actually define my Hello function. Unfortunately, now that I've reordered the functions in this way, by putting the main part of my code at the top and Hello at the bottom so that my logic kind of flows top to bottom, if I go ahead and run Python of Hello.py, Enter. Nothing whatsoever happens. If I do it again, nothing whatsoever happens. Well, why in the world is this? Well, just because I've defined a function called Main and I've defined a function called Hello, doesn't mean that I've actually called-- that is used-- either of them. 

Yes, I'm using Hello inside of Main, but no one is telling Python to actually use or call Main. So in order to tidy this up, the last thing I need to do in this file, it seems, is actually call my main function. And, in fact, by calling my main function in this way, it gets me out of trouble because now I'm defining Main first but I'm not calling Hello yet. I'm defining Hello next, but I'm not calling Hello next. I only at the very end of this file call Main which has the effect of running this code up here, which has the effect of running this code down here, and it allows me therefore to organize my file and order my functions in any way I want, including Main at the very top, and solving ultimately that problem of Python not knowing what's going on. 

Now it's important to note that I defined my function Hello as taking an argument To and then I passed into that function the value of the variable that I wanted to say Hello to, that is the variable called Name. Because suppose I had done something a little bit differently. Suppose that I hadn't defined Hello is taking an argument, so I just remove mention of To and its default value "world." And I go back up to my main function and I just call Hello itself without passing in any arguments. And now let me go ahead and make my one more change, one more mistake technically, let me go ahead and just try to naively print out the value of Name in the Hello function. So now to be clear, in my main function on line 2, I'm defining my variable called Name and assigning it the return value of the input function from the user. I'm then just calling Hello. 

In my Hello function, which now no longer takes any arguments, I am calling print, passing in Hello comma, and then immediately passing in Name, the variable into which I got the user's input. But the catch is that name exists now only in Main. And so watch what happens when I try to run this version of the program with Python Hello.py. I hit Enter. I'm prompted for my name, D-A-V-I-D, Enter. And, argh! A name error. Name "Name" is not defined. 

So it turns out that this is actually an issue of what's called scope. Scope refers to a variable only existing in the context in which you defined it. So insofar as I define this variable, Name in my main function, I can only use that variable in my name function. I can't use it as I've tried to here in my Hello function. It doesn't exist in that so-called scope. And so this is why now, if I rewind and undo all of those changes, you'll see that I'm deliberately passing Main from my main function into my Hello function. And now in the Hello function, it technically has a different name. It's called To in that context, but that's fine. It's completely up to each individual function to name its own variables or name its own arguments, but this is a way now that I'm handing to the Hello function the value of that variable so it can be printed by Hello as well. 

And there's one final flourish we can add here. Now that we've implemented Hello, you'll notice that Hello only has a so-called side effect. It only prints out something to the screen. Well, what if I also want my function to not have a side effect, per se, but actually hand me back a value? Recall that the input function returns a value, the string that the user typed in. Recall that the INT function returns a value. The float function returns a value that was passed into it. Well you can use one final keyword here, literally Return to return a value explicitly yourself. In fact, let me go back to VS Code here, and I think we'll return our attention to Calculator.py and see if we can't implement one other version of Calculator.py that actually has our own function that even returns a value. 

So I'm going to go ahead and open up calculator.py and I think this time I'm going to throw everything away as before, and I'm just going to start practicing what we're preaching here. Define a function called Main which is now going to be the main part of my function. Let's go ahead and now declare a variable called x, and assign it to the converted version of the user's input after asking them, what's x? So again, a line of code quite like we've done before. And suppose now that what I want to do is square this value. I want to take the number that the user has typed in and raise it to the power of 2. So 2 squared would be 4. 3 squared would be 9. 4 squared would be 16, and so forth. 

Well how do I go about implementing a function literally called Square which actually doesn't come with Python built-in? Well, let me assume for the moment that it does exist, and let me say something like this-- let me go ahead and say that printing, how about x squared is comma square of x. So what have I done? I've defined a function called Main and I've implemented two lines. The first of these lines prompts the user for a value x and converts it to an INT and stores it in a variable called x. On line 3, I then say x squared is and then I pass a second argument to the print function, whatever the return value is of a square function. But squared doesn't exist and I'll show you this here, if I now call Main at the bottom and I run Python of Calculator.py, I'll see that x is 2 and then I see a whole bunch of errors, a name error, name Square is not defined. 

So this isn't a typo here, it's just the function doesn't exist. But I think I can make it exist here. Let me go ahead and define another function called Square. This one's going to take in a number and I'm going to call it generically n, as many a programmer would, just to represent any old number. And then what do I want to do in order to square n? Well a number squared is really just itself times itself, so I'm going to do this-- n times n. But it's not enough just to do the math yourself, n times n. You're going to have to return the actual value n times n and that's our new keyword here. When I now do this, watch what happens. Python of Calculator.py, Enter. X say shall be 2, x squared is 4. Let me go ahead now and say x is now 3. X squared is now 9. 

So I've implemented my very own function that returns the square of a value and because I'm using the return keyword, that ensures that I can pass the return value of this, just like the return value of input or INT or float, to another function, like print instead. And here too there's going to be so many ways to solve this same problem. I can actually raise n to the power of 2. We've not seen this syntax before, but if you use two asterisks like this, two stars, that raises the thing on the left to the power on the right. Or it turns out there is in Python a function called POW for raising something to the power that takes two arguments, the first of which is the number, the second of which is the exponent. So there too, there's just so many ways to actually solve that same problem as well. 

So ultimately, what have we done here? We first introduced functions-- these actions or verbs, many of which come built into Python that you can just use in your own code. We then introduced variables via which you could store those return values and then maybe do something more with it. At the end of the day too. You now have the ability to create, to invent your own functions to solve simple problems like Hello, or in the weeks to come-- much more sophisticated, more challenging, more fun problems as well. 



# lecture1-Conditionals

[MUSIC PLAYING] DAVID MALAN: This is CS50's Introduction to Programming with Python. My name is David Malan, and this week we focus on conditionals. Conditionals, or conditional statements, in Python and in other languages, are this ability to ask questions and answer those questions, in order to decide do you want to execute this line of code? Or this line of code? Or this other line of code instead? They allow you to take the proverbial forks in the road, within your own code, logically. 

So how might we go about making some of these decisions? Well, it turns out that Python comes with a lot of built-in syntax. For instance, here are just some of the symbols you can use in Python to ask questions. Admittedly, mathematical questions, but we'll start there, if only to keep the examples simple early on. This first symbol, as you might know from math, represents greater than. The second symbol might not look too familiar, because we usually write it all as one thing on a piece of paper. But on a keyboard, if you want to say greater than or equal to, you'd use this symbol instead. 

This, of course, means less than. This means less than or equal to. And this one's a bit of a curiosity. We've seen, in our look at functions and variables, how we were able to assign values to variables using a single equal sign. But that equal sign didn't represent equality. It represented assignment, from right to left. That's great, because it solved that problem. But it left us in a bit of a bind, because how do we now compare two things, left and right? 

Well, in Python, and in many languages, you actually use two equal sides. So two equal signs represents equality, comparing the thing on the left and the right. One equal sign, as always, represents assignment, copying the thing from the right to the left. Lastly, this last symbol represents not equal to. So the exclamation point, or bang, followed by an equal sign, means not equal to some value next to it. 

Well, to ask the questions using these symbols, or any others, we're going to need another keyword in Python. And that keyword, quite simply, as in English, is if. You can ask questions in Python code along the lines of, if the answer to this question is true, then go ahead and execute this code for me. So let's go ahead and write some of these examples here. I'm going to go over to VS Code. 

And let's go ahead and create a program first, called compare.py, the goal of which is simply to write code that compares values and makes decisions based on those values. Let's go ahead and type code of compare.py, in order to create a brand new file called compare, in which we'll start to express some of this logic. Well, what do we want to compare? Suppose we want to compare, for the sake of discussion, just a couple of integers. But we'd like those integers to come from the user, so that we can make decisions based on numbers we don't know the values of in advance. 

Well, let's go ahead and do this. As we've done in the past, let's declare it a variable, like x. Let's assign it equal to the return value of the int function, and pass to the int function the return value of the input function, asking the user a question like, what's x, question mark, as we've done in the past. Let's do this one more time with y, asking the user for the value of y. And, again, converting that, ultimately, to an int, as well. 

So with this amount of the story, we have two variables, x and y, each of which has values. And ideally, we should be able to now compare these values. So suppose I want to make a decision based on the values of these variables. I'm going to use the keyword if. And I'm going to use some of those mathematical symbols to actually ask the question itself. So how about this, if x is less than y, then let's go ahead and just print as much out. Quote, unquote x is less than y. 

So this isn't a very interesting program yet. I'm literally just stating the obvious, based on the math. But it's allowing me to now introduce some new syntax. And exactly what is the syntax? Well, it's this-- not just the keyword if, which I've added here at the start of line four, but then I asked my question here, x less than y. x is one variable on the left, y is one variable on the right. And, of course, the less than sign is expressing the mathematical question I have. What I've highlighted here is technically called a Boolean expression. 

A Boolean expression, named after a mathematician named Bool, is simply a question that has a yes or no answer, or technically, a true or false answer. And that's nice because if there's only two possible answers, it's very easy for me, and in turn the computer, to make a decision-- do this, or don't do this thing. Now notice, if you come from other languages, you might notice that I have not typed any parentheses. They are not, in fact, necessary, at least in this case, in Python, but I have typed a colon at the end of the line. 

And even more importantly, at the next line I have begun my line with some indentation, hitting the space bar four times, or just hitting Tab once, which will automatically be converted to the same. That indentation is what tells Python that line five should only be executed if the answer to line four's question is, in fact, true. So if x is less than y, that phrase will be printed thereafter. Well, let's add a few more lines of code. How about another question? 

If x is greater than y, then let's go ahead and print that. x is greater than y. And let's do one final question, if x equals y, then-- wait a minute. What have I done wrong here? A good eye here. I don't want to assign y to x. If x equals equals y is how I express equality, let's go ahead and print out x is equal to y. 

So I now have three conditions, if you will, one question asking x less than y, one asking x greater than y, one asking x equals equals y. Let's run the code. Well, down here in my terminal window I'm going to run Python of compare.py and hit Enter. What's x? Let's go with one. What's y? Let's go with two. This should, of course, execute that first line of code and tell me, indeed, that x is less than y. Exactly as I would expect there. 

Well, what just happened, though, in code? Well, let's take a look, perhaps, at this same code visually, particularly if you're a more visual learner, this, I dare say, is what just happened. So what we're looking at here is a flow chart. It's a diagram of this program's logic. And more technically, it shows the program's control flow. That is, the ability of you, in code, to control the flow of a program, generally from top to bottom. In fact, let me go ahead and zoom in on the top of this flow chart. 

And you'll see an oval at the very top that says, quite literally, start. That is, irrespective of what shape or layout the diagram is, where your own thinking and logic should start when trying to wrap your mind around this program. Notice that there's an arrow from start to this diamond shape. And inside of that diamond is a question, a Boolean expression, x less than y. And this shape just means, based on the answer to that question, go left or go right. Specifically, go left if the answer is true, or go right if the answer is false. 

Well, the inputs I typed were one and two, respectively, for x and y. So, of course, one is less than two. So that's why my program printed out, quote unquote, x is less than y. But recall the code. The code then proceeded to ask two more questions. Is x greater than y? Is x equal equal to y? Well, the flow chart depicts those questions, too. 

Notice that no matter whether the question had an answer of true or false, the arrows both converge back down to this second diamond shape here. And that second diamond shape asks the second question, x greater than y. That, too, has a true or false answer. So we go one way or the other. But if x is one and y is two, then no, the answer is false. One is not greater than y. So logically, in the flow chart, you follow the false arrow this time. And notice, along that false arrow you don't print anything this time. 

That's why we only saw one printout on the screen. Now, there was still a third question. And this flow chart captures that, as well. The third diamond asks x equals equals y. Now that, too, has a false answer in this case, because one, of course, does not equal equal y. And so we again follow the third false branch here. And that leads us, of course, to stop. And stop just indicates that's it for the program. So I think that's correct. And that particular flow chart does happen to represent the actual code that I wrote. 

So it's correct. It does what it's supposed to do. It answered the question correctly by printing on the screen x less than y. But what is, perhaps, poorly designed about it? Let's make this first distinction. It's not enough, necessarily, for the code that you write to be correct and do what you intend. Longer term, especially as our programs get longer and more sophisticated, more complicated, we're going to want them to be well-designed, too. Thoughts on in what way this program is arguably not well designed, even though it's correct? 

Let's see here. Khalid, if I'm saying that right, your thoughts? 

KHALID: Too many ifs, I think, is getting repetitive. We can make our code more concise, maybe. 

DAVID MALAN: Yeah, it seems a little repetitive. I'm asking if this, if this, if this. And yet, logically, I should know the answer to some of those later questions once I figure one out. And, in short, if you look at this diagram here, notice that no matter whether I go left or I go right, I'm always asking three questions. No matter what, all of those arrows lead to the first, the second, and the third diamond. So I'm asking three questions, no matter whether any of those answers are true or false. Well how might I go about improving this? 

Well, let me propose that we introduce another keyword to our Python vocabulary, namely elif. And this, too, is kind of a succinct one. It's a conjunction of else if, in English, which allows us to ask a question that takes into account whether or not a previous question had a true or false answer. Well, what do I mean by that? Well, let me go back to my code here. And let me propose that we now improve upon this, here, by asking ourselves, ultimately, how can we ask fewer questions? 

And let me go ahead here and propose that instead of asking if, if, if, let's make these conditions potentially mutually exclusive. That is to say, don't keep answering questions once we get back a true answer. So I'm going to change my code up here as follows. Instead of asking if, if, if, I'm going to say, if x less than y, elif x greater than y, elif x equals equals y. 

So I'm going to implicitly, just like an English, take into account that I'm only going to keep asking myself these questions if I haven't yet gotten a true response. Think about the logic here, the English. If x is less than y, on line four, print out x is less than y. Well, if that's the case, you're done, logically. Because if the English is saying if x less than y, else if x greater than y, those are going to be mutually exclusive if the answer to the first question is true. 

You don't have to keep asking questions to which you already logically know the answer. So let me go ahead now and run this program. And I think the behavior is going to be the same. Python of compare.py, what's x? Let's do one. What's y? Let's do two. x is less than y. Now, honestly, I didn't really notice a difference when I ran the program. And honestly, my Mac, my PC, my phone nowadays, are so darn fast that these kinds of improvements aren't going to necessarily feel any faster until we're writing bigger, faster programs. 

But it's laying the foundation for writing better code longer term. Now what is the improvement I've just made? Well, if previously my diagram looked like this, which was problematic insofar as I was asking three questions no matter what, even if I already figured out what I want to print on the screen. This new version of the program that says if, elif, elif, might look a little something like this instead. Now it got a little wider. That's just because we drew the arrows to be a bit wider here. But let's focus on just how many questions are getting asked. 

Let me zoom in at the top, as before. And let me propose that we note that the start oval is at the very top, and it's asking us to ask one question first. x less than y, is one less than two? But notice here, let me zoom out, if one is, indeed, less than two, we follow this longer arrow down, marked true. We print out quote, unquote x is less than y. But then we immediately follow this next arrow down to the icon that says stop. 

So that's what's implied by doing if, elif, elif. If we get back a true answer right away to that first if, we're going to print out x is less than y and then stop. We're logically at the end of the program. So this picture is just representing, graphically, what the code is actually doing. But suppose I typed in something else. Suppose that my code actually ran, and I typed in two for x and one for y. That is to say, the answer to the first question is now false. 

But the answer to the second question is now true. Because, of course, two is greater than one. Well, let's go back to the diagram. Same as before, we start at the very top where it says start. The very first question up here, now, x less than y, is an answer of false, because no, two is not less than one. So we follow this arrow to the next question, this diamond. Is x greater than y? Well, yes, two is greater than one. 

So now we follow this left arrow, which is true. We print out quote, unquote x is greater than y, and then stop. So what's the improvement? Well, in the first case, we got lucky and we only had to ask one question and boom, we're done. This time, we had to ask two questions, but then boom, we're done. Only if x happens to equal y do we actually find ourselves, logically, getting all the way down to this final elif in my code. 

And pictorially, only if x is equal to y do we find ourselves going all the way down to the third diamond, the third question, asking is it equal to y or not? Now, hopefully, the answer at that point is not false. We've included a false arrow just so that the program itself is well-defined. But, logically, we shouldn't actually be getting there anyway, because it's got to be less than, or greater than, or equal to in this case. 

Well, let me pause here to see if there's any questions, now, either on the code version thereof here, or on this diagramming of that very same logic. Questions here, on this control flow? 

SPEAKER 1: Aren't we supposed to put an else at the end? 

DAVID MALAN: A good question. And yes-- so that's going to be my third and final approach. And if you don't mind, let's pivot there right away. Identifying a third keyword, that indeed exists in Python, that allows us to be even better at expressing this logic to design this program even better. And that's going to solve a particular problem. So if I take us back to our code here, notice that what I've highlighted earlier, elif x equals equals y. 

It's not wrong to ask that question. In fact, if you're trying to be especially thorough, it makes perfect sense to check if x is less than y, greater than y, or equal to y. But why don't I need to ask this third and final question? 

SPEAKER 2: We don't need to ask if x is equal to y any more because, logically, if the two conditionals evaluate to false, there is only one conditional that will evaluate to true. And that is x is equal to y. 

DAVID MALAN: Exactly. If we're all pretty comfortable with math, and comparisons here, of course x is either going to be less than y, greater than y, or equal to y. But once you rule out the first two scenarios, logically, it's got to be the case that x must equal y. If it wasn't the case, then it's less than or greater than. So Hope proposed that we use this other keyword, else. And how do we use this? Well, exactly as we might in English. Let me go back to my code here. And instead of bothering to ask the third and final question, let's not ask a question at all. 

Let's just have this catch-all. so to speak, a final line of code that says, else just assume that x is equal to y. Therefore, printing it as well. So what's the upside of that? My code is still going to work exactly the same. And again, my computer is so darn fast, I don't even notice that it's working even faster than it was before. But we would notice these kinds of things if we were doing a lot more work, a lot bigger programs here. But let me run Python of compare.py. 

Let's do, for instance, one and two. Still works for that. Let's do two and one. Still works for that. Let's do one and one. And it, indeed, now works for that. But in these cases now, let's consider the path we just went down. Previously, our diagram, when we had if, elif, elif in place, looked a little something like this. And notice, they began, we might have asked one question, or two, or worst case, three whole questions. 

But we can do better than that, using else, as Hope proposed, we can whittle this diagram, now, down to this. And even though it looks like the diagram's getting bigger, notice that it's having fewer building blocks inside of it. There's fewer arrows and there's fewer nodes in this picture. Let's start at the top now. Start leads us to the first question, still. x less than y? If the answer is true, great. We can say as much, x is less than y, and we can stop. If it's not true, if it's false, we can ask the next question. 

x is greater than y, true or false? If it is, great. We can print x is greater than y, and stop. Else, if it's not the case that x is greater than y, the answer is false. We can just immediately, logically, say x is equal to y. We don't have to add the third question at all. We can just immediately conclude there. So what's the implication here? You can see, with these pictures, a relative decrease in the complexity of a program. The first one was very long and stringy, with lots and lots of questions, unnecessarily, ultimately. 

The next one got a little shorter. And this one's even shorter still. And again, the fewer lines of code you have, the less likely you are, arguably, to make any mistakes. The easier it is for other people to read. And so, generally, this readability, this simplification, is, indeed, a good thing. 

Well, let's go ahead and add another piece of capability to Python, and that's this one here. Just like in English, where you can ask this question or this other question, you can say the same thing in Python using literally this word or. So let me go back to my Python code here. And let's propose how we might ask a couple of questions at once this time, perhaps this time considering how we might ask not whether or not it's greater than or equal to, and caring about the precise answer. 

Let's take a coarser approach here. And let's just try to determine is x equal to y or not? Well, let me go ahead and delete some of this code and change the question we're asking. Let me do this-- well, if I care about whether it's equal or not, let's check the possible scenarios. If x is less than y or x is greater than y, let's go ahead and print out x is not equal to y. 

Now why is that, no pun intended? If x is less than y, well, it's obviously not equal. If x is greater than y, it's obviously not equal. So we can conclude x is not equal to y. So if we, instead, want to make sure that it is equal to, we can just use Hope's else, using print quote, unquote x is equal to y. And again, why is this? 

Well, if x is less than y, or x is greater than y, they're obviously not equal. Otherwise, logically, they must be equal, in fact. So let's run this. Let's go ahead and run Python of compare.py. What's x? One. What's y? Two. OK, x is not equal to y. Let's do it again, put two for x, one for y. x is not equal to y. And one third time, how about x is one and y is one. x is now equal to y. 

Now if we want to compare that visually, too, let me propose that the picture looks a little something like this. And again, this is the exact same thing logically, but it's a pictorial representation thereof. What's the first question? Well, if x is less than y, well, then we follow the true arrow. And we say quote, unquote x is not equal to y. And then we stop. But what if x is not less than y? What if it's greater than y? What if it's two and one, respectively? 

Then the answer to x less than y, first question, is false. So we go here. We ask the second question, because of the or, and that asks is x greater than y? If so, notice this, we can kind of reuse some of the same parts of this picture, and just say x is not equal to y. We don't need to add arrows and ad boxes unnecessarily. We can reuse lines of code, parts of the picture, just as we have lines of code. And then we stop. 

Lastly, we have the following. If we know that x is not less than y, we know that x is not greater than y, it must be the case that x equals y. We don't need to ask a third question, another diamond. We can just immediately print as much, and then say stop, as well. 

Well, what could I do here? I bet I could improve this code slightly. And if we really want to be nitpicky, I would argue that this is now really just a minor refinement, but it's a good habit to get into thinking about. Could my code be better? Could my code be simpler? Could I improve this code further? It's subtle, but could I improve the design? Could I ask fewer questions? Could I tighten it up, so to speak? What do folks think? 

SPEAKER 3: You can ask is x is just equal to y. Then if you print x is equal to y, else x is not equal to y. 

DAVID MALAN: Perfect. Recall one of the other symbols we saw on the available list earlier. We can check not just less than, or greater than, or equal to. We can literally ask the question is it not equal to? Why are we wasting time asking if it's less than or if it's greater than? Well, if all you care about is is it not equal, I think we can do exactly that. Let's just ask the one simple question we do care about. And so let me go back up here. And let me just say not both of these questions, let's get rid of the or. 

Let's just say if x is not equal to y, then go ahead and print x is not equal to y. And that, too, I think is going to work exactly the same. But the picture now looks a little bit different. Notice that this was our flow chart earlier, that represented that same logic. And there's a bit of complexity. You've got to go left, you've got to go right, based on the answer to these couple of questions. If we now take into account what this version of the program looks like, it's even simpler, perhaps the simplest one we've seen yet. 

When we start off the program, we ask just one, and only one, question, is x not equal to y? And if so, true, we go ahead and print out x not equal to y. If the answer is false, then, of course, it must be equal to y, so we say that instead. And if we really want, we could invert this. If I go back here to my code, and if, for whatever reason, you just prefer to think in terms of equal or not equal, as opposed to not equal or equal, it's really up to you. 

We could change this to be equals equals. But I'm going to have to change my print statements to be in the opposite order. So let me go ahead, now, and reverse these two here, and move the second one first and the first one second. So now, when I execute this code, I'm asking still just one question. So it's still just as good, just as succinct. But now the diagram, instead of looking like this, is going to change the not equal to equal equal. And we just need to make sure that we print out the right thing, accordingly. 

And again, here too, just as the code is getting a little more compact, a little more compact, with fewer and fewer characters, so are these diagrams, these flow charts capturing the relative simplification of each of those programs, too. Let me go ahead and pause here to see if there's any questions, now, on any of these versions of code. 

SPEAKER 4: Yeah, I have a couple of questions. What if indentation is not used? 

DAVID MALAN: If indentation is not used, your program will not work. So Python is a little different from a lot of languages in that it enforces the indentation requirement. Some of you who have been programming for years might not necessarily be in the best habit of indenting your code properly. And one of the features, arguably, of Python is that it makes you indent your code, or it will not just work. And I think, did you have one other question? 

SPEAKER 4: Yeah, is the colon necessary? 

DAVID MALAN: Is the colon necessary? Yes, the colon, too, is necessary. So with Python, what you see is what you get here. And, indeed, it needs to be indented and the colon is necessary. Python does not use, in the same way by convention as C, and C++, and Java, curly braces to connote blocks. Instead, it relies, indeed, on this indentation. 

Well, let me propose that we introduce one other keyword here in Python, to see exactly how we might combine additional thoughts. And that's going to be literally the word and, a conjunction of one, or two, or more questions that we might want to ask at once. And let me propose, here, that we explore this kind of logic by way of another program altogether, in VS Code, whereby I'll go ahead now and create a new program, say, called grade.py. 

Let's consider exactly what grade a student should get, based on their score on an exam, or a test, or a quiz, or some other assignment like that. I'm going to go ahead and run code of grade.py, to give myself a new file. And I'm going to go ahead and start by just getting the user's score, again, on some assignment, or test, or the like. And I'm going to store it in a variable called score, equal the return value of the int function, which is going to convert whatever the user's input is when prompted for this score. 

So again, the user should just oblige by giving me a number like zero, or one, or two, or hopefully much higher than that, like 97, 98, 99, 100, assuming the test or assessment is out of 100 percentage points. Now, how could I go about assigning a grade to the student's score? Well in the US, it's very commonly the case that if you get between a 90 and 100, that's an A. 

And if it's between an 80 and a 89, it's a B. If it's 70 and 79, it's a C, and so forth, all the way down to F, which should be E, but we'll see that there's a bit of a jump. So how might I express this? Well, I can use conditionals. And I can ask a few questions and then print out the student's grade accordingly. 

So let me express it like this, if the student's score is greater than or equal to 90, and the student's score is less than or equal to 100, so it's in that range, let's go ahead and print out that their grade shall be an A. Because they're in the 90s, above grades range. elif the score is greater than or equal to 80, and the score is less than or equal to, say, 89, but here I have some options. Logically, I can actually express myself in any number of ways. 

And maybe just to be a little cleaner, I'm going to say a score is less than 90. So I'm using less than instead of less than or equal to. So I'm making sure that their boundaries between these grades are correct. Then, I'm going to go ahead and give the student a B if it's in the 80s. elif score is greater than or equal to 70, and the score is less than 80, I'm going to go ahead and give them a C. 

elif the score is greater than or equal to 60, and the score is less than 70, I'm going to go ahead and give him a D. And here's where it's a little anomalous, at least in some schools here, else I'm going to go ahead and give them an F. So we're skipping E altogether, and we're going to give an F, instead, for the grade. So that's the catch-all. And I think, logically, I've gotten this correct, at least based on where I went to school growing up, such that it's going to give an A, or a B, or a C, or a D, else it's going to assume that you got an F. 

Well, let's try just a few of these here. Let's run Python of grade.py. My score is, let's start strong, 100. I got an A. Didn't do as well the next time, maybe it's a 95-- still an A. Starting to slip further, so I got an 89 the next time. That's now, say, a B. And let's say I really had a bad week, and it's now a 71. That's now a C. Or I didn't even submit it at all, that's an F, altogether. So it seems to work. 

That's not really an exhaustive test, but at least based on some sampling there, my code seems to work as I expect. But let's see if we can't tighten this up. It's not wrong. It's correct. And, indeed, according to my own specifications, I dare say this code is correct. But can we tighten it up? Can we reduce the probability of bugs, now or down the line? Can we increase the readability of it? And can we increase the efficiency of it? Can we get the computer to have to answer fewer questions and still get the same result? 

Well, let's see what we might do. Let me just switch things up, if only to demonstrate that we can use these symbols in different ways. I could say, as I've done, if score is greater than or equal to 90. But I can actually do this, I can flip it around. Instead of saying greater than or equal to, let's say 90 is less than or equal to score. And here, let's say if 80 is less than or equal to score. And here, 70 is less than or equal to score. 

And then, lastly, 60 is less than or equal to score. So it's the same thing, logically. I'm just switching things around, just like you could do on paper pencil if you really wanted. But now notice this trick. And this is not possible, for those of you who have programmed in C, or C++, or Java, or other languages. Notice what I can do here is actually combine these ranges. Notice that I'm asking two questions, two Boolean expressions. Is 90 less than or equal to score, and is score less than or equal to 100? 

Well, Python allows you to nest these things like this, and chain them together. And just like you would on paper pencil in the real world, you can encode in Python, do this, which is just a little cleaner. It's tightening up the code a little bit. It's fewer keystrokes. It's faster to type. It's easier to read, moving forward. So that's arguably better, as well. So that's one improvement. It's largely aesthetic, in this case. It's still asking the same number of questions, but it's doing it a little more succinctly still. 

Well, what more could I do here next? Well, you know what? Each time I'm deciding these grades, I don't think I have to ask two questions. I don't have to ask, is it greater than 90 and less than 100? Is it greater than 80 and less than 90? If I rethink my logic, I can maybe do this better still. Let me propose that we simplify this further, and just do this. If we know that input, for the moment, is going to be within 0 and 100, we can make some assumptions. 

We could say something like, if the score is greater than or equal to 90, well, the student gets an A. elif the score is greater than or equal to 80, the student gets a B. elif score is greater than or equal to 70, they get a C. elif the score is greater than or equal to 60, they get a D, else they get an F. So what have I done here? 

Well, instead of asking two questions every time, checking the lower bounds and the upper bound of that range, I'm being a little more clever here by asking if the score is greater than 90, well, they've obviously gotten an A or better. If your score is greater than 80, well, you either deserve an A if it's really strong, or a B if it's just above 80. But because of the elif logic, we've already checked is the student's score greater than 90? And if it's not, then we're asking the question, well, is it greater than 80? 

So you implicitly know it's somewhere in the 80 to 89 range, else you know it's in the 70 to 79 range, else it's in the next range down. So it's a minor optimization that allows us to ask fewer questions. But again, it's making the code, arguably, a little more readable, certainly more succinct, an then, hopefully, more maintainable longer term. Any questions, then, on these types of changes, and this type of logic with our code? 

SPEAKER 4: What if we don't use elif at all? What if we write the code in if? 

DAVID MALAN: Yeah, so that's a good question, because it's actually going to have an unintended effect here. Let me get rid of the F temporarily, and just focus on A through D. If we revert to where we began today's story, with conditionals, saying if, if, if, if, now our cleverness here of using broader strokes and not using an upper and lower bound ranges is going to come back to be a downside. Let me go ahead and run Python of grade.py. 

And suppose my score is 95. I am so darn excited. I want my A, but nope. I just got an A, a B, a C, and a D. So logically, that's broken things. Because if you don't make these conditions mutually exclusive, every one of those questions is going to get asked, and therefore answered. And even if your grade is above a 90, it's also, logically, above an 80, above a 70, above a 60, and if I'd kept it in there, I would have failed, as well, with an F. 

Really good question. Other questions here, on this form of logic? 

SPEAKER 5: Would there be any better way to clean up even just this simple statement, like we had before, the previous one that you had with the elif? 

DAVID MALAN: I like your enthusiasm for simplifying things further. I'm going to go out on a limb here and say this is about as good as it gets, at least using only conditional statements. I can, if my mind wanders, think of a slightly more clever way to do this, maybe with something called a loop, or another programming construct. We don't have that yet in our vocabulary. But yes, there's absolutely other ways to do it. But I think not yet if we want to restrict ourselves to just words like if, and or, and else, and elif, and and, and the like. 

Well, let me propose that we pivot now to use another approach here that uses one other symbol that, up until now, we've not really had occasion to use. Let me propose that we implement a program that we'll call parity. In mathematics, parity can refer to whether a number is even or odd. And that's kind of an interesting question. And it turns out it can be useful in other applications, too, to just ask the question is a given number even or odd, maybe that the user typed in? 

And let me go ahead and write a new program called parity.py, via code parity.py in my terminal. And let me propose that we use this as an opportunity to introduce the last of those arithmetic symbols, at least most of which we're familiar with, addition, subtraction, multiplication, division. But there's been on this list before, this last one here, a percent sign. And it doesn't mean percentage in this case, when used as an operator in programming in Python. 

Rather, it represents the so-called modulo operator, for modular arithmetic. Or, at least in our case, we're going to use it to calculate the remainder when dividing one number by another. Well, what do I mean by that? Well, if you take a number like one divided by three, three does not go into one cleanly. So you have a remainder of one. Two divided by three has a remainder of two. Three divided by three has a remainder of zero, because it divides cleanly. 

Four divided by three has a remainder of one, because you can divide it in once, but then that leaves one, so it has a remainder of one. And then lastly, something like five divided by three has a remainder, of course, of two. So that's all we mean by remainder, how much is left over after dividing one number by another. Well, if I go back now to my code, and I consider how I might implement the question is this number even or odd? Let's consider how we might implement that, since it's perhaps not necessarily obvious how we can use this additional building block. 

But it turns out it's going to be very useful longer term. Well, let's first just get a number from the user in a variable called x. And I'm going to set that equal to the conversion to int of whatever the user inputs, after asking them what's x, question mark. And we've done that before, many times. How do I now determine if x is even or odd? Well, it turns out, if I have access to a programmatic operator that tells me the remainder, I think I can do this. 

In fact, let me just ask the group. And this is just from grade school math, perhaps, what does it mean for a number to be even, ? To be clear, a number like 0, 2, 4, 6, 8, 10, 12, 14, 16, those are all even numbers. But what does that really mean? Elena, if I'm saying that right? 

ELENA: Even numbers that can divide it exactly by two. For example, 2, 4, 6, 8, and 10, and-- 

DAVID MALAN: Perfect. And we could go on all day long, literally, since there's an infinite number of those even numbers. But it's nice that you formulated it in terms of a question that we can ask very clearly. Is this number cleanly divided by two? That is, can we divide it by two with no remainder, a remainder of zero? Well, that's perfect, because if we have this operator, this percent sign, that allows us to answer just that, what is the remainder, we can presumably check is the remainder zero, or is it one? Do we have nothing left over, or do we have one left over? 

Well, let's ask that. If x divided by two has a remainder of zero, as Elena proposes, let's go ahead and print out something like quote, unquote even. And just say as much to the user. else, I think we can assume that if a number's not even, it's going to be odd, if it's, indeed, an integer. So I'm going to go ahead and print out quote, unquote odd instead. And let's go ahead and now run Python of parity.py in my prompt. What's x? Let's start with two. Two is, in fact, even. 

Let's start with four. Four is, in fact, even. Let's get interesting with three. Three is now odd. And I think we could do that all day long and hopefully get back, indeed, exactly that answer. But what more could we do here? How could we improve upon this? Well, recall that we have the ability to invent our own functions. And let me just propose, for the sake of discussion, that we're going to eventually find that it's useful to be able to determine if a number is even or odd. 

And so we'd like to have that functionality built-in. And I don't think Python has a function for telling me just that. But I can invent it using code like just this. So let me go into my earlier version here. And let me propose that we do this. Let me go ahead and write a main function. I'm going to get back into that habit of defining a main function to represent the main part of my program. And I'm going to do what I did before. I'm going to get an integer from the user's input, asking them what's x, question mark. 

And then I'm going to ask this question. For the moment, I'm going to naively assume that the function already exists, but that's a useful problem-solving technique. Even if I have no idea yet where I'm going with this, how I'm going to invent a function that determines if a number is even, I'm just going to assume that there's a function called "is even," and I'm going to call it, blindly, like this. If is even, passing in x, then go ahead and print quote, unquote even. 

So if this magical function called "is even" returns true, as its return value I am going to print out that it's even. Else, otherwise, I'm going to assume that it's, of course, odd. Now the one problem with this program, even if I call main over here, is that is even does not exist. And this program would break if I ran it right now. But that's OK. I have the ability, recall, to invent my own function. So let me define, with def, a function called "is even." 

I want this function to take an argument. And I'm going to call it n, just a number, generically. I could call it x. But again, I don't want to confuse myself as to which x is which. So I'm going to give it a different name, and that's fine. I'm just going to call it, more generically, n for number. And then I'm going to do this. I'm going to say if N % two equals equals zero, just like before, then, and here's the magic, you, the programmer, can actually return what are called Boolean values. 

We've seen in Python that Python has stirs or strings, ints or integers, floats or floating point values, all of which are different types of data in Python. Python also has a fourth data type called bool for a Boolean value. And even though this is just adding to our list, the nice thing about bools is that they can only be true or false. An int can be any number of an infinite possible values. A bool can only be true or false. 

And it must be capital T and capital F if you're writing itself. So if I go back now to my code, and I consider exactly what I want to return here. Well, if n % two equals equals zero, that is, if n divided by two has a remainder of zero, well, I think it's even, to, Elena, your definition. So let's return true, capital T. else, if it doesn't have a remainder of zero, I'm pretty sure, mathematically, it's got to have a remainder of one. 

But it doesn't matter. I know it's not even, so I'm going to return false. And we return false, instead capital F. And now that we've defined both main and is even, and I'm calling main at the bottom, I think I've got this right. Python of parity.py, Enter. What's x? Let's try something simple, like two. And it's even. Let's do it again. What's x? How about four? Even. Once more, what's x? How about three? And it's odd. 

Now, what have I done here? I've just made the point that if I want to create my own function called "is even," that answers this question for me, that I can now use, in this program, and heck, maybe future programs that I write, I now have a function that no one gave me, I gave myself, that I can use and reuse. And I can even, perhaps, share it with others. I'm using that function now on line three, just to make a decision. I'm using a conditional up there. 

And my Boolean expression, something that's true or false, is going to be not something explicit, like x less than y, or y greater than x, or the like. It's going to be a function call. I'm using a function as my Boolean expression. But that's OK because I know, because I wrote it, that that function "is even" returns true or it returns false. And that's all I need in a conditional to make a decision to print even or print odd. 

So let me pause here to see if there's any questions now on how I've implemented "is even," using this bool. 

SPEAKER 6: Hello, hi David. First of all, thank you for this wonderful class the day before yesterday and today, sir. I have just one query, based on the background of Java. There, when we used to pass the argument, we can also pass the address of the variables. So is there any sort of this concept in Python? 

DAVID MALAN: Short answer, no. Those who are unfamiliar with Java or other languages, or C, or C++, there's generally ways to pass values in different mechanisms that allow you, or disallow you, to change them. In Python, no. Everything we're going to see is actually, in fact, an object. But more on that down the line. How about time for one more question here on these bools and these "is evens." 

SPEAKER 7: So I actually had a question about defining a function, if that's OK. 

DAVID MALAN: Sure. 

SPEAKER 7: So if you define one, within your code, like you made it up, are you allowed to use the dot operator like we did name dot strip, and use it like that? 

DAVID MALAN: Good question. If you've created your own function, can you use other functions, like dot strip, or dot title, or dot capitalize, that we've seen in the past? You can use those on strings. Those functions come with strings. You can't necessarily use them on your own functions, unless your function returns a string, for the examples you gave. I'm returning a bool. Bools have no notion of white space to the left or the right. You can't call strip, you can't call capitalize. 

But if you were writing a different function that returns a string, absolutely. You could use those functions, as well. Well, let me turn our attention, if I may, back to this example here, and consider, as we now frequently do, can we improve on the design of this code? Can I make this particular program better? And I can. There's a couple of ways here. And I'll show you something that's now generally known as something Pythonic. There's actually this term of art, in the Python world, where something is Pythonic if it's just the way you do things in Python. 

Which is to say, we've seen already there's so many different ways to solve certain problems. And in the Python community of programmers, there tend to be some ways that are smiled upon more than others. And they tend to relate to features that maybe only Python has, but not other languages. And here's some syntax that you might not have seen in languages like Java, or C, or C++ if you've programmed before. And if you've never programmed before, this too is going to be new. 

Instead of asking a question like this, if else using four lines, in Python, you can actually collapse this into just one more elegant line, if you will. Instead of asking if n divided by two has a remainder of zero, return true, else return false. Let me delete all of that and just say this, return true if n divided by two has a remainder of zero, else return false. 

Now those of you who do have prior programming experience might actually think this is kind of cool. You can condense, from four lines into one line, that very same thought. And one of the reasons why Python is popular is that it does tend to read rather like English. It's not quite as user-friendly as most English, or most human languages. But notice, now, the line does rather say what you mean. Return true if n divided by two has a remainder of zero, else false. 

That's pretty darn close to something you might say, logically, in English, be it about even and odd or really anything else. So that program is going to work exactly the same. Python of parity.py, let me type in two. It's still even. Let me type in three. It's still odd. But I can refine this even further. And again, consistent with this idea of not just writing correct code, but writing better and better code, but still keeping it readable, I can do one even better than this. 

Notice this value here is my Boolean expression. And it is going to evaluate to true or false. Is n divided by two having a remainder of zero or not? That is, by definition, a Boolean expression. It has a yes/no answer, a true/false answer. Well, if your Boolean expression itself has a true or false answer, why are you asking a question in the first place? Why ask if? Why say else? 

Just return the value of your own Boolean expression. And perhaps the tightest version, the most succinct, and still readable, version of this code would be to delete this whole line, Pythonic though it is, and just return n modulo two equals equals zero. If it helps, let me add parentheses temporarily, because what's going to happen in parentheses will happen first. 

n divided by two either does or does not have a remainder of zero. If it does, the answer is true. If it doesn't, the answer is false. So just return the question, if you will. You don't need to wrap it, explicitly, with an if and an else. And in fact, because of order of operations, you don't even need the parentheses. So now this is perhaps the most elegant way to implement this same idea. Now, which is better? This is pretty darn good. 

And it's hard to take fault with this because it's so very succinct. But it's perfectly OK, and just as correct, to have an if and then an else. Even though it might be four total lines, if that helps you think about your code more clearly, and it helps other people reason about it, as well. So it turns out there's another syntax that you can use to implement the same idea of a conditional, whereby you do something optionally, based on the answer to some Boolean expression. 

And the keyword that you can now use, in recent versions of Python, is called this-- match. Match is a mechanism that, if you've programmed before, is similar in spirit to something called switch in other languages. For instance, let me go ahead here and close out parity.py And let me go ahead and create a new file called house.py. And in house.py, I think what we're going to do is try to implement a program that prompts the user for their name, and then just outputs what house they're known to be in in the world of Harry Potter. 

So for instance, let me go ahead and do this. Let me give myself a variable called name, set it equal to the return value of the input function. And I'll say something like, what's your name, question mark. And then after that, I'm just going to use a traditional if, elif, else construct to decide what house this person is in. 

So let me say if name equals equals, say Harry, as in Harry Potter, well, let's go ahead and print out Harry's house, which is Gryffindor in the world of Harry Potter. elif the name is, instead, Hermione, then go ahead and print out also quote, unquote Gryffindor, as she's in the same house, too. elif name equals equals Ron, let's go ahead and similarly print out Gryffindor quote, unquote. 

And let's make this a little more interesting now. elif name equals quote, unquote how about Draco? Draco Malfoy, in the books-- let's go ahead and print out quote, unquote Slytherin. And just in case someone else's name gets inputted, for now, let's just suppose that we don't recognize them, and say, by default, else print out quote, unquote who, question mark, just to convey that we don't actually have a hard-coded response to that particular name. 

Let me go ahead, now, and run this as Python of house.py, Enter. And I'll go ahead and type in something like Harry. And voila, we see that Harry is, indeed, in Gryffindor. Let's run it one more time, Python of house.py. Let's type in Draco this time. Slytherin. And now, let's type in an unrecognized name. Let's go ahead and rerun Python of house.py. And let's go ahead and type in Padma, Enter. And who? Because we haven't actually hard-coded with an elif condition in this case, what house Padma is meant to be in. 

Well, it turns out there's other ways to implement this. Indeed, there's some redundancy here, in that we're checking if Harry, or Hermione, or Ron are all in Gryffindor. I feel like we can at least tighten this code up a little bit, using techniques we've seen already. So let me go ahead and do this. Let me go up here and instead do something like this. Let's get rid of these two blocks of elifs, leaving just Harry's for a moment. 

And let's use that "or" keyword again, and say or name equals equals quote, unquote Hermione, or name equals quote, unquote Ron, thereby consolidating all three cases, if you will, into just one if statement. Then we still have a separate elif for Draco because he's not, in fact, in Gryffindor. And then the final else to catch anyone else. Let me go ahead now and run this version of the program, Python of house.py. I'll type in Hermione this time. She, too, is still in Gryffindor. 

Let me try it with Ron. And that, too, still seems to be correct. Well, it turns out there's another approach altogether that can perhaps make your code a little less verbose. You could imagine how complicated this code might get if we had not just Harry, and Hermione, and Ron, but a whole bunch of other names as well, for Gryffindor, for Slytherin, and for all of the other Hogwarts houses. So you could imagine that code just getting pretty unwieldy pretty fast. Well, it turns out another technique you can use is, indeed, this keyword called match, which is very similar in spirit, but the syntax is different. 

And it allows you to express the same ideas a little more compactly. So let me go back to house.py. And let me propose that I get rid of my current if, elif, else approach, and instead do this. Literally use the keyword match, and type the name of the variable, or value, that we want to match on. And then I'm going to go ahead and include a colon. And then underneath that, I'm going to include, literally, a keyword called case. And the first case I want to consider is going to be Harry. 

And I'm going to put Harry in quotes, because it's a string or a stir. And I'm going to have another colon at the end of this line. And indented under that one, I'm going to go ahead and, for now, print out Gryffindor, which, of course, is Harry's house. Otherwise, I'm going to have another case for quote, unquote Hermione. And similarly, I'm going to have under that indented, print quote, unquote Gryffindor, close quote. Now I'm going to have another case for Ron, also in quotes, with a colon. Now print quote, unquote Gryffindor. 

And now I'm going to have a other case for, let's say, Draco. This one gets a little more interesting because Draco, of course, now is in Slytherin. And then I'm going to go ahead and leave it as that for now. So let me go ahead and save this file, and go back down to my terminal window, running Python of house.py, Enter. And let's go ahead and try Harry. And he seems still to be in Gryffindor. Let's run it again for Hermione, Enter. Gryffindor. Let's skip ahead to Draco, and type in Draco's name. He is, indeed, in Slytherin. 

Now let's try another name that we haven't handled a case for, like Padma again, Enter. And we're just ignored. There's no output whatsoever because there wasn't a case for Padma. Now we could, of course, go back in and explicitly add one for Padma. But what if we, similarly to the else construct, just want a catchall that handles anyone whose name is not explicitly specified? Well, turns out the syntax for that, using this new match statement, is to still have another case, but then to use this single underscore character, which is used in other contexts in Python. 

But for here, it's meant to say whatever case has not yet been handled, go ahead and print out, as we did before, for instance, quote, unquote who, with a question mark at the end. Now let's go ahead and rerun this Python of house.py. I'll type Padma's name again. And this time, I think we're at least going to get an explicit response indicating who, whereas previously we did not have the equivalent of that. Now, I think we've regressed a little bit. We went from tightening things up by putting Harry, and Hermione, and Ron all on the same line in the same if statement. 

But here, we have now three case statements, again, for all three of those. Well, we can tighten this code up, as well. But the syntax is going to be a little bit different. I'm going to go ahead and delete these two middle cases for Hermione and Ron. And then up here, next to Harry's name, before the colon, I'm going to go ahead and use a single vertical bar, and then a quote, unquote Hermione. Then another single bar and do quote, unquote Ron. 

And this is how, using this relatively new match statement, you can say the equivalent of Harry, or Hermione, or Ron, but more concisely than you could using an if statement alone, as we implemented it previously. So now, one final run of the program with Python of house.py. Let's make sure that Harry is still in Gryffindor. Let's make sure that Hermione is still in Gryffindor. Let's make sure that Ron is still in Gryffindor. And indeed, all three of them are. 

Now, as always with Python and programming more generally, there's going to be different ways you can solve these problems. This is just another tool in your toolkit. Arguably, it has tightened things up. Arguably, it's perhaps a little more readable because there's a little less syntax going on, a little less duplication of equal signs and elif, and elif, and elif all over the place. But ultimately, this would be an equally correct approach to that same problem. But it turns out with a match statement you can do even more powerful forms of matching, as well. 

Here, we've used it simply to implement the same idea as that if, elif, else construct. And it's worth noting, if you've programmed in some other language, the syntax here is, indeed, correct. You do not need, for instance, a break statement, as has been peppered throughout. And you don't need something like default, or something explicit. You, indeed, just use this underscore as your catchall at the end of the match. So just by adding in some of these new keywords here, like if, and elif, and else, we have now the ability to ask questions about values. 

We have the ability to analyze input from users, and ultimately make decisions about it. And these, then, where our conditionals. Lying ahead is going to be the ability for us to not only use functions, and variables, and also these conditionals, but also, next, loops-- the ability to do something, now, again and again. 

# lecture2-Loops

[MUSIC PLAYING] DAVID MALAN: All right. This is CS50's Introduction to Programming with Python. My name is David Malan, and this week we focus on loops, this ability in Python and a lot of other programming languages to do something again and again, a cycle of sorts. And let's see if we can't begin by motivating exactly why we have this ability to do things cyclically using these loops. 

I'm going to go ahead here and open up VS Code. And in my terminal window, let's go ahead and create via code cat.py, a Python program that meows like a cat. And I'm going to go ahead here in this Code tab, and very simply, perhaps, I'm going to start by implementing this cat just by using print. We're going to have this cat not make audible sounds, but just print meow, meow, meow on the screen three times. 

Well, I think the simplest way I can do this is just to print meow once, and to print meow again, and to print meow one last time on the screen. And now let me go down to my terminal window, let me run Python of cat.py, Enter, and meow, meow, meow. All right, so this program works. This program indeed works if my goal is to get the cat to meow three times. And let me propose, just to help us wrap our minds around what's going on inside of the computer, let me propose that we consider this flowchart. 

So as before, we have this flowchart that starts with this oval, which just means start reading here. And then notice, it goes via arrows to a meow, meow, meow, and then it stops. It's perfectly correct, and honestly, it's wonderfully simple, but I daresay we can find fault with my code nonetheless. 

Why is my code arguably poorly designed? Now the answer is going to be loops in some way, but let's see if we can identify in what way the code is actually poorly designed in some sense. Let's see. Any thoughts. Alex? 

AUDIENCE: OK. So, I mean, repeating the same action like three times or even more is not a good habit. 

DAVID MALAN: Yeah, I'm just repeating myself. And honestly, it's not that big a deal. If we go back to my code here, am I really doing such a bad thing by just printing meow, meow, meow three times? Not really, but let's consider the logical extension of this. Suppose I wanted to meow four times or five times or 50 times or 500 times. 

Do you really think, even if you've never programmed before, is the solution to this problem really going to be to hit copy-paste 50 times? Like probably not. We can probably do better than that. And beyond it just being ugly at that point, having so many lines of identical code, just imagine if you wanted to change the code. 

Maybe I change my mind and I don't want to make a cat, I want to make a dog. So now it has to say woof, woof, woof multiple times. Now I have to change that in 50 different places. And yeah, sure, I could do find and replace, but come on, like we're programmers now, there's got to be a better way than just repeating ourselves. 

So I bet we can do better than that if we think about a little harder how we go about structuring this program. And we can do that if we augment our vocabulary just a little bit. It turns out in Python, and in other languages, too, there's a keyword called while. And while is one way that we can express what's called a loop, a block of code that's going to do something again and again and again-- 0 times, 1 time, 2 times, 50 times, as many times as we want. 

But while rather leaves to us the particulars of how we express ourselves to do something again and again. So let me go back over to VS Code here and let me propose that I do this. While is a construct that allows me to ask a question again and again. And any time we've seen a question, it's been in the form of a Boolean expression, a question to which the answer is true or false. 

Well, how could I do this? How could I print out meow three times and ask three times a question to which the answer is true or false? Well, what if I did some counting? Like literally on my fingers. And if I'm trying to count maybe down from three, I want to meow three times, I can put three fingers up and I can meow. And then I can put like one of the fingers down and then meow. And I can put one of the fingers down and I can meow. Put one of the fingers down. 

And maybe the question I can ask every time I meow is, do I have any fingers up still? Do I have any fingers up still? Do I have any fingers up still? And if the answer is true, keep going. If the answer is false, stop. So how can I translate that to code? Well, once we've added this while keyword-- I think we have all the building blocks already, let me propose that I do this. 

Let me propose that I give myself a variable. And I'll call it i for integer, but I could call it anything I want, and I'm going to initialize it to 3. Then I'm going to use this new feature of Python, while, and I'm going to ask a question, the answer to which must be true or false. And I'm going to say, while i does not equal 0. So I'm going to ask the question, while i does not equal 0, do the following. 

Notice the colon at the end of the line. Notice my indentation. And just like with functions, just like with conditionals, you indent the lines that you only want to execute as part of this other thing. What do I want to do while i does not equal 0? Well, I think I just want to meow. 

But it's not enough just to write this code. If I were to very dangerously run Python of cat.py and hit Enter right now, what might happen on the screen? Whether you've programmed before or not. Why is this a very bad thing potentially? It's not going to break things, but it might lose control of my computer somehow. Any thoughts? Yeah, Timo? 

AUDIENCE: Hi. I think it's going to continue to print out meow since i is always equal to 3 and the while is always true. 

DAVID MALAN: Yeah, exactly. If I'm initializing i to 3-- that is, setting it equal to 3 on line 1, then I'm asking the question, while i does not equal 0, and that's going to be true, it does not equal 0, it obviously equals 3, print meow. And the way a while loop works is that the Python interpreter just keeps going back and forth. It goes from line 1 to line 2, then to line 3, and then it goes back to line 2 to ask the question again. If the answer is still true, it goes to line 3. It then goes back to line 2. If the answer is still true, it goes back to line 3. 

And to Timo's point, if you're never actually changing the value of i, it's always 3, you're just going to be looping literally forever, and this is an accidental infinite loop. So we've got to be smarter than that. And I'm not going to hit Enter because I don't want to lose control over my computer here such that it's printing out meow forever. 

Fortunately, if you ever do do that and you find yourself in an accidental infinite loop, Control-C for cancel or interrupt is going to be your friend. If you ever seem to lose control, you don't need to reboot or turn off the computer. You can just hit Control-C in your terminal window and that will likely fix it. 

All right, well what do I want to do, then, after meowing each time? I think what I'd like to do here is maybe something like this. Let me update i to equal whatever the current value is minus 1 here-- whoops, sorry. Minus 1. So if i on each iteration-- I'm updating i to be one less, one less, one less, it should eventually hit 0, at which point the answer to 9.2's question will now be false. 

So let's see if this works. I'm going to go down to my terminal window and run Python of cat.py, and I indeed get three meows. Why? Because I've wired this up like a machine in software, if you will. I've set i equal to 3, then I keep asking this question. But I keep turning the gears, I keep changing the value of the variable to make sure that ultimately it is actually being decremented-- that is, decreased by 1 until we eventually hit 0. 

Now for those of you who think I'm a little more graphically, let me pull up one of our usual flow charts. This is just a representation graphically of the exact same thing. Notice what's happening. I first start the program, and then I initialize i to 3, and then I ask the first of my questions. Again, the diamonds always represent questions. And the answer is going to be true or false. Does i not equal 0? 

Well, it doesn't, it equals 3. So if I follow the true line, I meow. And then I follow this arrow, and I update i to equal i minus 1. At this point in the story, i presumably equals 2 mathematically. I follow the arrow. And there's the loop. This is why it's nice to see this graphically, perhaps because you can literally see the loop back and forth. 

Now I ask the question again. Does 2 not equal 0? Well, it does not equal 0, it's 2, so we meow again. We change i from 2 to 1. Well, does 1 not equal 0? Well obviously 1 is not 0, so we meow again. We decrement i again. i is now 0. Does 0 not equal 0? No, it equals 0, so the answer is false and we stop. 

So there, perhaps more so than any of our flowcharts before, do you really see the structure of what's happening inside of the program? And you don't have to get into the habit of making these charts or creating these charts, but just as a first pass at what's going on inside of the computer, that's indeed one way to visualize it instead. 

Well let me propose that, like always, there's many different ways to solve this problem. And suppose you just like to think a little differently. Maybe you don't like starting at 3 and then counting down to 0. Why? Maybe you're just brain doesn't work that way and you prefer to count up instead of down. Totally fine. 

Let me go ahead and change my code here to set i equal to 1 instead of 3. And here, let me just change my logic. Rather than checking for not equal to 0, like maybe you don't like thinking in terms of not because it's a little confusing, and it might be, let's just check that i is less than or equal to 3. 

So we'll be a little more explicit. We'll count from 1 up through 3, each time printing meow, but I'm going to need to change this line here. Let me see if we can't call on someone to change line for me. How do I want to change line 4 to be consistent with counting from 1 up to and through 3? 

AUDIENCE: I would be plus 1 every time you meow. 

DAVID MALAN: Yeah, exactly. In this case, we want to add one not subtract 1. And in fact, if you think about this, this 2 could end very poorly. If you start counting at 1 and you keep subtracting 1, subtracting 1, subtracting 1, I think we're going to find ourselves with the same problem, which is that we're never going to stop because we're going to keep getting more and more negative as opposed to ever getting up to the number 3. So I think you're right, I need to change this to be i equals i plus 1. 

And now notice just for clarity, too, the equal sign is, again, our assignment operator from right to left. Logically, this might otherwise strike you as strange. Like how can i equal itself plus 1? Well, it doesn't until you execute this code from right to left. You add 1 to i or you subtract 1 from i, and then you update the value of i on the left. The assignment copies the value from the right to the left. 

Well, how else might I do this? Well, I will say that most programmers, computer scientists more generally, tend to start counting from 0. It's a convention and it actually has upsides even in Python and other languages where generally speaking, it's a good thing to start counting from 0 instead of counting like we might in the real world from 1. Let's go ahead and adopt that convention now. Let me set i equal to 0, and I need to make a change now. 

Notice, if I don't change my logic, this program just became buggy. The cat has a bug. It's now meowing four times if I run it as is. But the easiest fix here would be to change my inequality to be this, less than instead of less than or equal to. Now I'm starting at 0, but I'm going up to but not through 3. 

And even though this might, of all the things we've seen thus far, seem maybe the least familiar, most of us might start at 1, 2, then 3, it's a good habit to get into now, start at 0, and go up to but not through the value that you care about ultimately, 3 in this case here. 

Well, let me tighten things up a bit here. Not only will this now fix my counting problem, it now meows 3 times as expected, there's a more succinct way to express i equals i plus 1, and this, is because it's such a popular thing to do in code. You can instead just say i plus equals 1, and that's it. You don't need to put everything on the right-hand side. This is a special syntax that says the exact same thing, increment i, but it does it with a few fewer keystrokes. It's just a little more pleasant to type, it's a little faster to read, it's just a convention. 

Those of you who have programmed in C, C++, Python-- no, not Python. C, C++, Java, JavaScript might have seen plus-plus before or minus-minus. Sorry, Python doesn't have it, so you cannot use that. This is as succinct as your line of code might get. All right. Let me pause here to see, then, if there's any questions about these implementations of while loops. 

AUDIENCE: Can we use stuff like for loops which have a certain i-value initialized to it at the start and it runs from the particular condition you put into the thing and increment it as you go along? 

DAVID MALAN: Short answer, no, you cannot do what you're describing, but there is another type of for loop that we will soon see. But let's come to that in just a moment. Other questions on loops using while here? 

AUDIENCE: So I had a question about that flowchart. 

DAVID MALAN: OK. 

AUDIENCE: There were-- yeah. There were certain symbols for the certain kind of the statements were-- are they certainly used for that kind of statement that they-- 

DAVID MALAN: They are. So I deliberate-- I deliberately use certain types of symbols, certain shapes here whereby an oval is conventional for start and stop. I used rectangles for any statement of code, like an assignment or a printing and so forth. And I used diamonds to represent questions that you might ask, conditions as we've seen. 

If you're doing this for yourself, if you're just trying to make sense of your code and writing it down, you certainly don't need to use these formal symbols, but I tried to be consistent with some best practices. And in fact, let me come back to the same picture, because this was the first version of our picture, but we've since modified our code a couple of times. 

This, recall, was the version where the question we were asking was i not equal to 0, let me go ahead and just change this code now to represent the next version we did, which, recall, changed our logic to start counting from 1, it changed our question to check as i less than or equal to 3, but then everything else was the same except for the counting, which is now plus instead of minus. 

And then we refined it a little bit further by counting now from 0 up to but not through 3. And we tightened up this code here by just incrementing 1 by using the slightly more succinct syntax. 

So at this point, these flowcharts might become less and less useful for us, because once you've wrapped your mind around the concept and hopefully the picture helps bring that concept to life, it certainly fine to focus entirely on the code and only think about or even draw something like this if you need to wrap your mind around something more complicated than you're used to. 

Well, let me go ahead, if I may, and propose that we transition to another approach of types of loops using another keyword here, namely a for loop. And this is a word that does exist in other languages, but doesn't necessarily have as many features as other languages might use it for. But there is a different type of loop-- not a while loop, but a for loop. 

And a for loop is going to allow us to express ourselves a little differently, but to do so, I propose that the easiest way is if we introduce one other idea in Python, which is that of a list. And here, too, no pun intended, we're adding to the list of data types that Python supports. 

We've seen strs or strings. Ints or integers. Floats or floating point values. Bools or Boolean expressions. Python also has lists, which is another type of data, but wonderfully, this one is probably pretty familiar. A list of things in the real world is a list of things in Python. It's a way of containing multiple values all in the same place, all in the same variable. 

So what do I mean by this? Well let me propose that we go back to our VS Code here, and let me start fresh with my code here and not use a while loop at all, but let me use this new keyword for. The way for loop works is that it allows you to iterate over a list of items. 

So what does this look like? It might look like this-- for i and the following list of items, 0, 1, 2. This is my starting point, and on each iteration of this loop-- that is, on each execution of this loop again and again, I want to print out meow. Now I'll admit, I kind of like the look of this code already even though there's some new syntax here, because it's just shorter than the while loop. 

The while loop had multiple lines a moment ago and it was entirely up to me to decide what i is. I have to check a condition, I have to increment or decrement i. Like I was doing a lot of work, relatively speaking, to make that thing turn, to make that loop going to go. It was very mechanical in a sense. You can in your mind's eye maybe see the gears turning as all of these variables are changing and these questions are being asked. 

A for loop simplifies all of that, and it just says, if you want a variable like i, a number, and you know in advance how many times want this loop to execute-- three times, we'll just kind of specify what it is you want i to take on as values explicitly. 

In this loop, i will be automatically initialized by Python to be 0, then meow will be printed. Then Python would automatically update i to equal 1, then meow will be printed. Then Python will automatically update i to be 2 and meow will be printed. And because that's it for the values in that list, Python will stop and it will only meow a total of three times. 

What is the list? The list in this program is exactly that, 0, comma, 1, comma, 2, and notice the square brackets. Those aren't parentheses, those are square brackets that represent a list. That's how visually as the programmer-- that's how Python knows as the language that you intend for that to be a list. 

So let me go ahead and run this Python of cat.py, and it works just the same. But it's only two lines. It's pretty readable once you have familiarity with that construct, but to my constant point about correctness not necessarily being the same as design, in what sense is this program perhaps poorly designed? 

It seems to work. It meows three times, but why might this not be the best way to solve this problem? Even if you've never programmed before, again, think about corner cases, things that may or may not happen. Think about extreme cases that really test the quality of this code. 

AUDIENCE: OK. I think that because we are saying 0, 1, 2 3 times. And then if you want to take a million, you say 1, 2, 3. 

DAVID MALAN: Yeah, exactly. And that's what I mean about thinking about the extreme cases. If you're trying to decide for yourself if your own code is good or someone else's code is good, it might look so at first glance, but think about the extreme. Well, what if it's not three things, it's a million things? I mean, are you really going to write out 0 through a million or 0 through 9-- 999,999? 

Like no, you're not going to write that many numbers on the screen there's got to be a better way. So let's do the better way from the get-go rather than set the stage for doing something poorly. And the one way we can solve this problem to improve the design is don't just manually specify the list of values, use a function, someone else's function that comes with Python that gives you the list you want. 

And the easiest way to do that in Python is to use a function called range that returns to a range of values. It expects as input at least one argument, and that number is going to be the number of values you want back. Those values are going to start at 0 and go to 1, to 2, and so forth, but they will go up two but not through the number you specify. 

So by specifying range 3, you're essentially being handed back 1, 2, 3 values. And by default, those values are 0, 1, and 2, and that's it. But what's brilliant about this is that now, to Hope's point, if I do want to meow a million times-- I mean, that is an angry cat, I can now do a million by just typing a million. I don't have to literally type 0, comma, 1, comma, 2, comma, 3, comma, 4, all the way up to 999,999, I just do this. So that's got to be a better way long-term. 

So that's indeed one improvement we can indeed make here still using a for loop, but now using this range function. And just to show you something else that's Pythonic-- this is not strictly necessary, but it's commonly done, there's a minor improvement we can make here, even if we're just meowing three times. And notice that even though I'm defining a variable i, I'm not ever using it. 

And it's kind of necessary logically, because Python, presumably, has to use something for counting. It has to know what it's iterating over. But there's this convention in Python where if you need a variable, just because the programming feature requires it to do some kind of counting or automatic updating, but you, the human, don't care about its value, a Pythonic improvement here would be to name that variable a single underscore. 

Just because it's not required, it doesn't change the correctness of the program, but it signals to yourself later, it signals to colleagues or teachers that are looking at your code, too, that yes, it's a variable, but you don't care about its name because you're not using it later, it's just necessary in order to use this feature, this loop in this case here. So just a minor improvement or change there. 

But to really gets you intrigued by what's possible in Python, let's take this one step further. So if we really want to be Pythonic, this one, if you've programmed before, is kind of going to blow your mind, so to speak, whereby if I want the cat to meow three times, what if I actually do this? print, open parenthesis, quote-unquote, meow times 3. You have to be kind of a geek to think this is cool, but this is kind of cool. 

So you can literally just print what you want, multiply it by the number of times that you want it, and you will get back exactly that result. Now I've kind of made a mistake here. So let's see what this does. It's not quite as beautiful as this code might look to you-- to some of you, to me. Let me run Python of cat.py, Enter. OK, it's a really like hungry cat or something. It's meowing really fast. 

But I can fix this, I bet. Let's think about now some of the basic building blocks we've discussed. The problem is clearly that literally meow, meow, meow is being repeated three times, but it's not as pretty as I want it. I want it to be meow, meow, meow on separate lines. What might be a possible solution here while still using this multiplication operator? 

And think back. We've used plus to concatenate strings. You can apparently use multiplication to concatenate strings, but more than once again and again and again. How could I clean this up without reverting to my for loop or my while loop and still use multiplication in this way? 

AUDIENCE: We can use the escape sequence which would be backslash n. 

DAVID MALAN: Amazing. Yes. Think back to backslash n, which is the way you as the programmer can express a new line in code. And I think, if I take your advice, I put a backslash in there inside of my quotes, so that at the end of every M-E-O-W, there's a new line, let's see how this looks. Let me clear my screen and run Python of cat.py. OK, so close. I like this. 

Let me call on someone else. The only thing I don't like-- and I know I'm being really nitpicky now-- is that it's meow, meow, meow on separate lines, but there's this extra blank line, which I'm just not loving aesthetically. 

AUDIENCE: I think we can make n equal to column-- column, not-- like a slash n. 

DAVID MALAN: Yeah. So here, too, like all of these things we've seen in past weeks are kind of coming together. Recall that the print function lets you control what the line ending is. By default, it's backslash n itself. Which is why at the very end of this print, the cursor is being moved again to the next line. Well, we need to just override that. 

So let me go into my code here and let me change this to comma n equals quote-unquote so that it's no longer the default backslash n, it's instead now going to be nothing whatsoever. That should eliminate, then, hopefully that additional blank line. So let me run this one last time here, Python of cat.py, Enter, and there we have it. 

So now, at least as programming goes, it's kind of cool that I can distill this into a short line and express myself all at once. Now to be fair, it's a little less readable. Like now I've got backslash n, I've got times 3, I've got n equals quote-unquote. So you don't have to do things this way. My previous approach with a for loop, totally fine. My previous approach with a while loop, totally fine, and in some sense, perfectly well-designed. But this is just yet another way to do it, but it's not a good thing if you or your teacher, your colleague, your friend are going to struggle to read your own code. But this is a feature of Python that some languages do not, in fact, have. 

All right, well let me propose that things get more interesting still if we're not just meowing three times only, but we're meowing some variable number of times. Let's ask the user how many times this cat should meow. So let me clear the screen here, and let me figure out, well, how do I get a number from the user? 

The catch here is that if I want the user to give me a number, I'm not doing math, per se, I'm meowing, and therefore, the user has to give me a positive value. The user has to give me a positive value. So how can I insist on this? Well, if I just do this, n equals int of input, what's n, question mark? Well, I want to check like-- I could say if n is less than 0-- like if it's negative, well I could do this. Well, then ask again. Int, input, what's n, question mark? 

OK, well what if the user still doesn't give me a positive number? What if being really difficult they're not paying attention and they typed in two negative numbers? Well, if n is less than 0, well, let's do it again. n equals-- this does not end well. You can't infinitely many times keep checking, is it negative, is it negative, or is it negative? The program would never be done written. 

So we can do this I think better maybe with a loop. So let me propose this. A very common paradigm in Python, when you want to get user input that matches a certain expectation you have, that it's all positive, that it's all negative, or just something like that, you just immediately say while true. You deliberately, and a little dangerously but a very conventionally, induce an infinite loop. 

Now what is an infinite loop? It's just one that goes forever. And we've seen how that can happen accidentally mathematically. It's absolutely going to happen when you say while true. Why? Well, the answer to the true question is always true. So this is a way of deliberately inducing a loop that by default is going to go forever. 

So we're going to need a way of breaking out of this loop when we have the number we want. The convention, though inside of this otherwise an infinite loop is to ask the question you care about, like give me an int by prompting the user for input. Like what's n, question mark? And then just ask your question. So if n is less than 0, then I think we want Python to just continue to prompt the user again. That is, we want the code to stay in the loop, recall the input function, and hope that the user gives us a better answer. If this time around it's less than 0, so let's just literally use Python's keyword continue, which says just that-- continue to stay within this loop. 

Else, if it's not less than 0, let's go ahead and just break out of the loop altogether using another keyword in Python, break. Break will break you out of the most recently begun loop in this case if it's not the case that n is less than 0. So this will work, and it will allow us to get a value that 0 or greater from the user, but I think we can tighten it up further so as to not bother having an if, and, and else. 

Why don't we instead just say, if n is greater than 0, go ahead and break? In fact, it's not that interesting a program if we even allow the user to type in 0. So let's wait until they give us an integer that is greater than 0 and then break out of this loop. And what can I now do down here? For i in range of whatever that value n is, print meow. And honestly, I don't need i here, so let me come back to that principle before. And let me just change it to an underscore just to be Pythonic, if you will. 

So what's going on? Lines 1 through 4 deliberately implement an infinite loop that otherwise by default is going to go forever. But I'm asking a question, inside of that loop, after getting an int from the user on line 2, I'm then checking, is it greater than 0? Or is it 0? Is it negative? None of which makes sense for meowing cat. Like I want the cat to meow at least one time. 

So if it is greater than 0, break. And this break statement, even though it's indented, indented twice, has the effect of breaking out of the most recently begun while loop. So once the user gives you a positive value, then we get to line 6, at which point we meow that many times because of line 6 and 7. 

So if I run this now Python of cat.py, Enter, well, what's n? Let's start with 3 where we began, meow, meow, meow. Well this time, let me go ahead and increase the size of my terminal window just temporarily. Let me run Python of cat.py, let me do it 10 times, meow 10 times now appears on the screen. 

And the takeaways here are not just that we can meow 10 times or do something again and again, but this is a very common paradigm in Python when you want to do something again and again and again, but only until the user actually gives you a value that you care about here. And let me propose actually now that we practice a little more what we've been preaching, especially when it comes to, say-- especially when it comes to say writing your own functions. 

Now that I'm doing all this meowing, it might be nice to actually have a meow function that the inventors of Python didn't envision, so let me do this. Let me actually get rid of all this code and let me go ahead and do this. Let me go ahead and say define a main function, as I've done before, and let me just blindly call meow 3. Meow doesn't exist yet, but when it does, that'll be great. 

So let me go ahead now and define meow. So am I meow function should take as input a parameter called n or anything I want, and this part's pretty easy now. How do you meow n times? Well, for underscore n, the range of n, go ahead and just print meow. So same code as before, nothing new here, I'm just putting that logic inside of a meow function that's going to have this side effect of printing meow. 

And now, as before, let me go down here and let me make sure I call main. And if I now run this code, Python of cat.py, meow, meow, meow. It's always going to do three because I've hardcoded to 3. Well, let's make one improvement here. Let me go ahead now and maybe do this. Let me ask the user for a number. So let's say something like this, number equals get number. 

All right. Unfortunately, there is no function in Python called get number that gets a positive number from the user, but I can invent that. So define get number, open paren, close paren. And then inside of this function, let me do this. While true, go ahead and get a number from the user, converting it to an int asking them, what's n, question mark? And then if n is what I want, it's a greater than 0 value, a positive number, I don't want to break this time necessarily, although I could. I instead want to return the value so I can actually do this instead. 

And this, too, is a feature of Python. This ability not to just break out of a block of code, but also to return a value in code. To actually return a value gives you the ability, ultimately, to return explicitly a value so that your function has not just a side effect, necessarily, but it actually hands back, just like input does, just like int does, just like float does, an actual value to the user. 

Now to be clear, I don't have to return n here. I can still break out of the loop as I've done in the past with code like this, but then after the loop, I still have to return. And so what's happening here is that if you use break to get out of the loop, but you need to hand back a value from a function, you still have to use the return keyword now explicitly either in the loop as I did or now outside of the loop but still inside of the function. 

The last thing I'm going to do here now is change that 3, which we hardcoded earlier, to actually be the value of the variable we've gotten from the user so that now down here, if I run Python of cat.py, Enter, what's n? I can type in 3, I get my three meows, or if I only want one, I now get one meow instead. 

All right. So if we now have this ability to do things again and again in these loops, let's see if we can't solve some other problems via which to express ourselves cyclically, but get back some interesting answers as well. And let me propose, for instance, that we look a little more closely at these lists. 

It turns out that in Python, and really, in programs in general, it's useful to have a list of values, because we're going to be able to work with more and more data, larger and larger data sets. So let me propose that we come back to VS Code here and let's do something that's perhaps a little familiar to some folks, the world of Hogwarts. 

And let me go ahead and code up a file called Hogwarts, and let's see if we can't have a list of students at Hogwarts here. So I have a new tab called hogwarts.py. and let me go ahead and propose that I just define in this program a list of students whose names I know in advance. So I'm not going to get user input for now. I'm just going to know from the get-go that the three students I want to consider are these. 

Our variable is going to be called students. It's going to equal, as I've done in the past, a square bracket, which means, hey, here comes a list. And those values are going to be Hermione in quotes, because it's a string; Harry in quotes, because it's a string; and then Ron in quotes, because it's a string as well. 

So this is a list of length 3. It's similar in spirit to my list of length 3 earlier, but that had 3 ints, 0, 1, 2. Now I have a list of three strings instead. And this isn't very useful at the moment, but let me just do something as a check for myself. Let me print out each of these students. Well wait a minute, how do I print the contents of a list? 

Well, in the past, when we've printed a variable, we've just printed out the name of the variable. But I don't want to print out all of Hermione and Harry and Ron all at once. Maybe I want to print out Hermione first, then Harry, then Ron. So I need a way to express more precisely which value do I want from this list? 

And the way you do this in Python is you use square brackets in another way. If you have a variable-- in this case, called students, and you want to go inside of that variable and get a specific value-- that is to say, you want to index into the list, you use square brackets this way using numbers inside of the square brackets. 

And here's where we see that it is useful to think and count in terms of 0 on up instead of 1 on up. These lists in Python are, shall we say, zero-indexed. The first item in a list is at location 0, the second item in a Python list is that location 1, and the third is that location 2. So you're always kind of off by one mentally, but you get used to it, if you've never programmed before, over time. 

So let me print out all three students. So let me print out students bracket 0, then students bracket 1. Then lastly, let me print students bracket 2, and this is my third and final line. And of course, if I run this code, it probably does what you would guess. If I run Python of hogwarts.py, there's Hermione, Harry, and Ron each on their own lines there. 

But there's got to be a better way, especially if I don't know in advance who's going to be in this list, if next year there's some new students at Hogwarts, we can use a loop to do something automatically without having to manually type out 0 and then 1 and 2. Well, here's another feature of Python. You can use a for loop not just to count from 0 to 1 to 2, you can use Python to just iterate over anything. Not just numbers, but strings. 

So I could actually do this. For student in students, colon, and then indented underneath that, I can say print student. Now it doesn't matter if I have 3 students or 4 or 400, these two lines of code, this loop will print all of those students for me one at a time. So if I now run Python of hogwarts.py, there's the same list, but I don't need to know in advance how long that actual list is. 

Now notice, I made a conscious decision here. I didn't call this variable underscore, because this time I'm using the variable. And while I could do this, now, no, no, no, no, your code is getting way too cryptic. If you're naming the variable underscore and you're using the variable underscore, now you're helping no one. Now you're confusing the reader, yourself down the line, you should call your variables what they are. 

So a very appropriate name, though I'm sure you could come up with others, would be student, and here, you could say you would stay student as well. If you'd prefer to be more succinct, it's not unreasonable to do something succinct in a loop like this. For s in students, using maybe the same letter that the list itself begins with, but again, why bother? Python is meant to be more readable. If you have a list of students, iterate over them one student at a time. 

Let me pause here to see if there's now questions about lists as I've now defined them, a list of strings in this case, or using a for loop now to iterate over and print each of those names. 

AUDIENCE: Yeah. So is it not necessary to initiate student in this case? Or we can just declare a variable in the loop? 

DAVID MALAN: Good question. You do not need to manually initialize it. Python takes care of initializing the student variable to Hermione first, then Harry second, then Ron third. Unlike other languages, you don't need to initialize it to something yourself, it just exists and it will work. Other questions on loops and lists in this way? 

AUDIENCE: Since you describe break, so is there any concept of continuing so that we can skip a particular case in loops? 

DAVID MALAN: Yes. You can continue using another syntax as well. We haven't shown that. For now we focused only on break. 

AUDIENCE: OK. So can this for loop work with either hash tables or different kind of tables or arrays? 

DAVID MALAN: Indeed. So we're getting ahead of ourselves there, but there are yet other types of data in Python, and indeed, you can use a for loop to iterate over those as well. Anything that is iterable, so to speak, is a piece of data that can be used with a loop like this. But more on those-- more on those soon. 

In fact, let me transition here to show just another way of solving this same problem, because up until now when we've used loops, we really have relied on numbers, and that's fine if you prefer to stay in that space. Suppose I did want to iterate using numbers like i and 0, 1, 2, and so forth. Let me propose that we could change this code as follows. 

If you would prefer to think about, or if the program you're trying to implement requires that you use numbers like this, you might do this. For i in-- well, I don't want to just say students, because then i is not going to be a number. i is going to be literally Hermione, then Harry, then Ron. I need to iterate from 0 to 1 to 2. If I a list with three elements has these locations, 0, 1, 2, I need to create a loop somehow that starts at 0 and ends at 2. 

Previously when I wanted to do that, I needed range, but this 2 is not going to work. I can't just say in the range of students, because students is not a number, it's not an integer, so you can't pass it to range. Range expects an integer. But there is a solution here. It turns out that there is a function in Python called length or len, L-E-N, that will tell you the length of a list and other things down the line, too. And now I think I can assemble these building blocks and a way that can allow me to use numbers in this way. 

So range doesn't take a list of strings, it takes a number, and ideally, that number is going to be 3, so I get a range of values, 0, 1, and 2. So I think I can nest my functions like this. If I first get the length of the students list, that's going to be 3, then I pass that return value as the argument to range, that's going to give me back a range of values, 0, then 1, then 2. 

And what that's going to allow me to do then in code if I want is not just this. I could do print now students bracket i, and this is now where the syntax we're seeing is getting very expressive-- new and perhaps unfamiliar. But if I can do open bracket, 0, close bracket, or open bracket, 1, close bracket, or open bracket, 2, close bracket, turns out, I can actually put a variable in there and I can express any number inside of those brackets so as to print these all out dynamically in a loop. 

Let me do this, Python of hogwarts.py, Enter, there's Hermione, Harry, and Ron. And now if I'm just curious, I just want to poke around or maybe I want to do a ranking, like who are the top three students in the school or in Gryffindor? Well, I can print multiple things at a time, we've seen. Let me print out not just the students at location i, but rather, let's print i first and then the student at location i. 

So two things to print, and we know that print can take two arguments, we've seen that before, they'll be separated by a space. Let me go ahead and rerun this. Now I see that, OK, Hermione is the top student, but she's in zeroth place. That's a little weird. Like we don't need to show the human using my program that we started counting at 0. I can clean this up. I can just add 1 to the i up here, and now we see a top three list of students. Hermione is number 1, Harry's number 2, and of course, Ron is number 3. So we can get access to all of those same values as well. 

Are there any questions now on these lists? Any questions now on these lists? This length, these ranges, or otherwise? 

AUDIENCE: My question is, for i in range, can you explain this once more? 

DAVID MALAN: Sure. So let me rewind in time. We started off doing this. For i in 0, 1, 2, and then we print it out meow three times in that way. The way that for loop works is that it creates for you a variable that I've called i, but I could call it anything I want. It then assigns i initially to the first thing in the list. It then automatically assigns i to the next thing in the list. And then it assigns i to the third thing in the list. And each time it does all of the indented code underneath. 

We realize, though, that this is not going to scale well if I want to do something like a million times. So we introduced range instead. That has the effect of doing the same thing. It returns to me a range of values-- a list of three things, really, so the behavior is exactly the same. If we now fast forward to this Hogwarts example now, though, what I'm doing is just combining these smaller ideas. 

I'm still creating a for loop. I'm still creating a variable called i. I want to do it over a range of values, but how many values? Well, if I use the length function and pass to the length function the list of values, length's purpose in life is to tell me how long is this list, and it's 3. So that's almost as though before, I had just done something like this, but I don't want to hardcode 3, I want to dynamically figure out how many students are at Hogwarts. So I'm just composing, composing, composing, or nesting all of these various ideas. 

All right, if I may, let me transition now to-- in Hogwarts still to introduce one final type of data before we combine everything with a few final programs. It turns out in Python, there's not just strings, not just ints, not just floating point values, not just bools, not just lists there are also what are called dictionaries or dics, are a data structure that allows you to associate one value with another. 

Literally a dictionary like in the human world. If you were to open a dictionary, be it in English or any other human language, what's inside of a dictionary? Well, it's a bunch of words and definitions. A computer scientist, though, and a programmer would describe those more generically as keys and values, something associated with something else. That's all a dictionary is. It allows you to associate something with something else. 

And notice, this is already more powerful, more interesting than a list. A list is just a set of multiple values. But a dictionary is two-dimensional, if you will. Just like a human dictionary, a book, it associates something with something else like words with their definitions. Now what does this actually mean in practice? 

Well suppose that we wanted to keep track of who is in what house at Hogwarts. Well, I could do it using lists alone. Let me go back to VS Code here and let me just temporarily-- but in a way that I'm not going to like ultimately-- let me create another variable called houses, set it equal to Gryffindor, corresponding to Hermione's house, Gryffindor, corresponding to Harry's house, and Gryffindor, corresponding to Ron's house. And let's add Draco in there. So we now have four instead of three students just so we have a little variety, and he was in Slytherin. 

So now we have two lists. And we could just agree amongst ourselves that whoever is first in the students variable lives in the first value in houses. Whoever is second in students lives in the second house. Who's ever third in students lives in the third house. We could do that. But honestly, that is going to break down quickly when we have a lot of students, when we have a lot of houses, and what if we want to keep track of more things than that? What if we want to keep track of every student's house and the patronus, this image that they conjure up magically? 

Well, then we need a third list like-- this is just going to get messy quickly if we're just on the honor system using multiple lists where everything lines up logically. It doesn't end up well when your code gets more complicated. But I do want to implement this idea. I want to associate something with something. A student with a house, a student with a house, a student with a house and so forth, so how can I go about doing this? 

Well, let me go back to my code here and let me propose that we do this using a Python dictionary. And this is the last of the new syntax, really, that we'll see . Here's the new syntax. Instead of using square brackets, we're going to use curly braces for dictionaries as well. We've seen curly braces in the context of f strings completely unrelated. Sometimes you run out of keys on the keyboard and the authors of a language need to start reusing symbols in different ways, that's what's about to happen. We're using curly braces in a different way. 

Now so let me create a variable called students. And let me go ahead and set it equal to open curly brace and closed curly brace. This is an empty dictionary at the moment. And here's how a dictionary works. It allows you to associate something with something else, and you do that like this. Hermione, quote-unquote, colon, and then the value thereof. 

What do you want to associate with Hermione? Well, Gryffindor. What do I want to associate Harry with? Well, I want to associate him with Gryffindor. What do I want to associate Ron with? Well, I want to associate him with Gryffindor. Well, this is actually not going to-- this is going to get very ugly quickly. Once we add in Draco and Slytherin, my code is going to get too long, it's going to start wrapping. 

So this is purely aesthetic. It is perfectly acceptable in Python and other languages to format your code a little more readily and just add new lines if it makes it more readable. And one way of doing this might be as follows. I still have my curly brace up here, I still have my curly brace down here, but notice, it's a little more readable now in that I have my keys on the left, my somethings, and my values on the right, my other somethings. It's just a little easier to skim top to bottom. You could format it differently as well. 

But I'm going to go ahead and add in now Draco who lives, of course, in Slytherin. So now I have each of these keys on the left and values on the right, which is really, again, just a code implementation of this idea, a little chart that you might write up with paper pencil when associating something with something else. 

So how do I now use this code in an interesting way? The syntax is almost the same. If I want to print out the very first student, Hermione's house, I could do this. Print out the name of the variable, but I need to go inside of the variable. I need to index into it. And what's neat about dictionaries is that whereas lists have locations that are numeric-- 0, 1, 2; Hermione, Harry, Ron respectively, dictionaries allow you to use actual words as your indices, so to speak, your indexes to get inside of them. 

So if you want to print out Hermione's house, the key you care about is, quote-unquote, Hermione, and what this syntax here will do-- notice, it's not a number 0 or 1 or 2. It's literally Hermione's name. This is like going to the chart earlier and saying, all right, give me Hermione is my key, Gryffindor is the value. 

That's what we're doing here syntactically. We're looking up Hermione and getting the value thereof. So if I go back to my code, that should print out Gryffindor. And if I do this a few times, students, bracket, quote-unquote, Harry should give me Harry's house. Print students, open bracket, Ron, that should give me Ron's house. And then lastly, if I do this with students, bracket, Draco, that should give me Draco's house. 

Now it's a little manual still, and I bet we can improve this, but let me run Python on hogwarts.py and we should see Gryffindor, Gryffindor, Gryffindor, Slytherin, which is exactly what we'd expect. Now all we've done, again, is we've just now moved from having just a simple list of names to, again, two dimensions, associating like we would on paper-pencil something with something else, keys with values respectively. 

Allow me, if you will, even though I realize this is getting a little fancy, allow me to escalate things slightly here and transition from looking at just, for instance, that pattern there, just a hard coding those values there to actually printing these out more dynamically. Let me go ahead and use our loop, and this question came up earlier as well, let me go ahead and say for each student in students, go ahead and print out, for instance, the students variable at-- well, let's just say student first. Let's keep it simple. 

So this is not going to be that interesting yet, but when I run Python of hogwarts.py and hit Enter, notice, what should I see? Let me take a question here to see what am I going to see when I hit Enter now when I'm doing for student in students? 

AUDIENCE: Yeah, I think we will only see keys. 

DAVID MALAN: Perfect. So good intuition. It could have gone both ways. Could have been values, the houses. But when you use a for loop in Python to iterate over a dictionary, by design, it iterates over all of the keys. So we should see, I think, Hermione, Harry, Ron, and Draco. Let me hit Enter now, Enter, and indeed, you're exactly right, we see just the keys. 

But that's not really that useful if what I really care about is who lives where, can I print out both? Well, I think I can. Let me go ahead and do this. Let me print out not just the student's name, the key, but let me use the key, their name, to index into the dictionary. If I know the word in the dictionary, let me look up its definition. If I know the student's name, let me look up their house, and the syntax for this, just like a list, is students, bracket. And just like in the past we used i when i was a number, we can also with a dictionary use a string. 

So if the student's name is the key, then this syntax, students, open bracket, student, close bracket will go to Hermione's location and get back her house. Will go to Harry's location and get back his house and so forth. So if I do Python of hogwarts.py, Enter, now I see Hermione, Gryffindor; Harry, Gryffindor; Ron, Gryffindor; and Draco Slytherin. 

Now it looks like I've given them all new last names, but I can clean that up. This is just a print thing. Let's go ahead and change our separator from the default space to maybe a space, comma. And just using print features now, let me run the same program again, Enter, now I've just got some nice pretty commas in there to make clear that Hermione's last name is not, in fact, Gryffindor, but that's just a print detail. Any questions, then, on these dictionaries and what I've just done? Questions on these dictionaries and this looping over then here? 

AUDIENCE: I just can't get my head around the for student in students. If I'm-- just correct me if I'm right. Does that mean it imports the list of students and uses the indexes-- or in other words, Hermione, Harry, and Ron as the indexes in the actual-- the list of students? 

DAVID MALAN: Correct. So this is just a feature of Python. When you use a for loop with a dictionary, what happens is this. If this is the dictionary here with the keys on top and the values on bottom, you get to choose what the variable is called. I called my variable student just because it makes sense, because I want one student at a time. 

And what for loop does, just like it did with numbers before, the 0, the 1, and the 2, it allows me to, for instance, set student equal initially to Hermelin's name. And then the next iteration of the loop, the next cycle, sets student equal to Harry's name, then Ron, then Draco. It just happens automatically. Like that is what the Python interpreter does for you when it sees a for loop like that. 

So it's very similar in spirit to iterating with a for loop over a list, but rather than iterate over the numeric location, 0, 1, 2, it iterates over the bold-faced keys in this representation here graphically. And allow me to give us one other example on Hogwarts before we look at one other familiar domain. At the risk of things escalating a little bit, let me propose that we continue the story with one final Hogwarts example like this. 

What if we have more information about each of our students? And this is inevitable. If you're implementing a program that's a database with people or customers, or employees or anything else, you can imagine having a lot of data about anything you're representing in your program here. For the sake of discussion, suppose that every student at Hogwarts, of course, has a name, they have already a house, but they also have a patronus. 

For those unfamiliar, this is the animal or entity that comes out of the end of their wand when they make a certain magical spell. The point here being is that we want to associate not just one thing with the student, but multiple things as well-- their name, their house, and their patronus in this case. 

Well, what might code like this look like? Well, let me go back to hogwarts.py and let me start fresh for just a moment. And let me propose that I enhance this with a bit more data. And this data is going to look as follows. My students variable now, I'm going to propose we think of it as a list. What if we have a list of dictionaries as follows? Indeed I want to literally implement this picture here. 

So notice that my previous picture just represented a single dictionary. But suppose I wanted to compose a list of dictionaries. That is, for students-- so a list of four students. And suppose that each of those students is itself a dictionary, a collection of key value pairs, keys and values, something and something else. 

Well, here's one other way we can do this in code. Let me go back to VS Code here and let me define a variable called students that is equal to a list. And I'm going to preemptively move my cursor onto separate lines, because I know this is going to be long, and I want to fit all of the elements of this list inside of it. 

I'm now going to create a dictionary, one dictionary per student. And how do I create a dictionary? I just use those curly braces. But it's up to me to define what those keys are. And let me propose that one key this time won't be the student's name explicitly, it will literally be the word name, and there, going to have the name Hermione. 

The same student is going to have another key called house and the value is going to be Gryffindor. And the same student is going to have a third key called patronus, and the value of that is going to be-- I had to look it up-- an otter, according to the book. Now I'm going to create a second dictionary inside of this list. And again, a dictionary is like literally like the human dictionary of words. It's a book that contains keys and values, words and definitions. What are the three words I'm storing in each of my dictionaries? Name, house, and patronus. What are the definitions of those words for Hermione? Hermione, Gryffindor, and otter respectively. 

For Harry, the definitions are going to be different in this new dictionary. Let me give myself another pair of curly braces and say this, name, quote-unquote, colon, Harry. House here is, again, going to be Gryffindor. And this one I knew, his patronus, is going to be, in this case, a stag. 

Next, a third dictionary. The name here will be Ron. And I'm going to go ahead and do that just like this. Next, I have the house, and he, too, was Gryffindor. Lastly, had to look this one up, Ron's patronus was a Jack Russell terrier. Lastly is Draco. In a fourth dictionary now-- so another pair of curly braces, the name of the student is, of course, Draco. The house of this student is Slytherin. 

And Draco, interestingly enough, at least according to the internet, has no patronus. Was never revealed in the books or the movies. So it turns out, this is actually a wonderful teachable moment. There is a special key word in Python that is literally None, and N-O-N-E, with the first letter capitalized. This represents officially the absence of a value. 

So I could a little sloppily do something like quote-unquote, but does that mean I didn't get around to typing it or not? It's a little clear semantically to say literally None, a special keyword in Python to make clear that I know Draco has no patronus, it's not just an oversight on my part. 

Now that I have this, what do I have in the computer's memory? I have a list. How do I know it's a list? Because I see a square bracket at the beginning and another square bracket at the end. That's just my visual clue, OK, I don't know necessarily what else is going on here, but there's a list of something. 

What is in that list? Well, here, too, the syntax is our clue. Because this line 2 starts with a curly brace and ends with a curly brace, I just know, that is a dictionary, a collection of key value pairs. Now this all fit on my screen perfectly, so I didn't bother moving all of the key value pairs onto new lines, it would have made it really tall, so I kept it all together here this time. But how many keys does this first dictionary have? 

Put another way, in Hermione's physical dictionary, how many words are in that dictionary? Three. The words are name, house, and patronus. What are the three definitions or values of those words in Hermione's dictionary? Hermione, Gryffindor, and otter respectively. And the same story goes for Harry, then for Ron, then for Draco, I have, by design, chosen to give them dictionaries that have all the same keys, all the same names, but they all have unique values. And that's my design, that's my prerogative as a programmer. 

So why is this useful at the end of the day now? I have access to a whole collection of interesting data about all of these students, and I can still do a loop. I can say for students in students, that's going to allow me to iterate over this list of students. And let me go ahead and print out just one thing at a time. Let me print out the current student's name. 

So as complicated as the dictionary is, this should be pretty comfortable. For student in students is just going to iterate over every student in the list. 1, 2, 3, 4 total. The next line is just going to print out the value of the name key. It's like opening a physical dictionary, looking up the word name, and giving us Hermione, Harry, Ron, and Draco respectively from each dictionary. 

So if I run this version of Hogwarts and hit Enter, there, I get all three of their names. But what if I want more information than that? I want both their names and their houses. Well, just add to print's arguments student, open bracket, house, close bracket. All right, let's go ahead and run this. Python of hogwarts.py and hit Enter. So I now see Hermione, Gryffindor; Harry, Gryffindor; and so forth. 

Well, we can aesthetically clean this up a little bit by adding a separator with print, like a comma and a space, just so that when I run this again, I now see some comma separating these values. But recall that students have not just a name, not just a house, but also that patronus. So if we want to print out that, too, we now have the syntax via which to go into that same dictionary for each student and output their patronus as well as their house in their name. 

So if I run this program one final time, now I see all of the data in this here dictionary. So this is a lot to absorb all at once, I'm sure. It's the last of our new data types. On top of lists, we have these dictionaries, but again, a dictionary, at the end of the day, is just a collection of values similar to these values here that allow you to associate keys with values. 

And the first version of this program associated literally the student's names with their houses, but then I realized in my next version, wait a minute, what if every student has not just a name in a house, but a patronus? Let's actually standardize the names of our keys to be name, house, and patronus, and then the values of those keys can actually be the data, like Hermione, Gryffindor, otter, and so forth. Questions now on these dictionaries and iteration thereof? 

AUDIENCE: I just was wondering, suppose the dictionary is very huge, and if I want to look up for a specific student, so how do I know where to look that student from? Like can we sort it out in alphabetical order or numeric order or anything like that? 

DAVID MALAN: In short answer, yes. One of the features of Python is that it makes these dictionaries very highly performant for you. That is, even if they're very large, as they will be in future weeks when we manipulate more data, Python will find the data you care about quickly for you. And in fact, that is a feature of the language, that is a feature of a dictionary to get you the data quickly. And there are functions that you can use. You can sort the data, you can sift through it, you can do very performant operations as we eventually will. 

Allow me, then, to propose, as we wrap up these loops, that we solve just a few final problems that will perhaps evoke fond memories of yesteryear, at least for me, wherein one of my favorite games growing up was this one here on the original Nintendo. And this is a two-dimensional world where the characters move up, down, and right, not so much to the left, in jumping over pyramids and obstructions like these. 

And allow me to propose that we use this just for inspiration, not to do something that's quite as colorful or graphical as this, but just to focus on, for instance, this barrier in the middle of the world here that Mario or Luigi had to jump over. And so this here seems to be like three bricks stepped on top of one another. And we won't do things quite graphically, but let's just implement a very simple Python-based version of this textually using maybe just hashes for bricks. 

Because there's a pattern here, one on top of the other, and I bet we can solve this in any number of ways. Well, let me switch back over to VS Code here and let me propose that we create a program called mario.py using code in the terminal window. And then up here, let me start by implementing that same picture as simply as I can, printing out just literally the hash, and then the hash, and then a third final hash. 

This is going to be a very textual approximation of it, but I think if I run Python mario.py, I've got a very simple version of that same column of bricks, so to speak. But you can imagine that certainly in a game where maybe these columns get higher or lower, it would be nice to write code that's actually a little more dynamic than that and doesn't just use print, print, print, which is literally copy and paste, it would seem. 

So let me at least adopt some of today's lessons learned and instead do something like this. For underscore in range of 3, let's now print out just one of these at a time. But the fact that I've now used a 3 to range means if I want to change it to something bigger or smaller, I change it in one place not in three or more places. And this code, too, of course, if I got it right, is just going to print out the exact same thing. So we're iterating here. 

But let's see if we can't now integrate our discussion of writing functions of our own to begin writing something a little more dynamic and solving more complicated problems ultimately. One of the nice things about functions is that they allow us to not just write code that we can use and reuse, they allow us to create abstractions, if you will. An abstraction is a simplification of a potentially more complicated idea. 

And we've seen this a few times over the course of the weeks. For instance, we had a function called hello, which, granted, didn't do all that much, it just printed hello. But it allowed me to think about the function as exactly what it does, not generically printing something, but literally saying hello. I've been able to get a number using something similar by defining my own function like get number. 

Well let me go ahead and, for instance, assume for the moment that I've had the forethought to, in my function main, use a function called print column. That seems as good a name as any to use a function that prints a column of bricks. 

Well, how can I go about now implementing this abstraction, this simple idea of print column with actual code? Well, we've seen before with def, we can do just that. Let me define a function called print column. Let me accept as its input, generically speaking, a parameter called height. I could call it n or h, but it would be a little more explicit now with height just so I remind myself what it's doing. 

And now I think I can just borrow some of that same code from before. For underscore n range of height, go ahead and print out a single hash. And then at the end of this whole program, let's just call main. 

So I've kind of complicated the code. It doesn't do anything more just yet, but it's setting me up for solving what I think are going to be more sophisticated problems. If I run Python of mario.py, we're back where we began. But I now have a function, an abstraction, print column, that's going to allow me to think about printing some chunk of the world of Mario at a time. 

And I can do this in different ways, too. Notice that if I really want, I could do something like this. I could implement now print column in different ways, especially if I am using print column all over my code, or maybe still, a colleague of mine, a friend, someone else on the internet is using my print column function. 

What's also nice about functions you've written is you can change the underlying implementation details of them, but so long as you don't change the name of the function or its parameters or what it returns, if anything no one else knows the difference. You can change the internal implementation as much as you want if you want to improve it or make fixes over time. 

So for instance, another way we could implement print column, recall, would be something like this. A bit clever with one hash and then a new line, and then maybe we could do multiplication of strings, and then end this line with quote-unquote. Again, it's OK if you're not comfortable with this syntax. This was a more clever approach we saw in the past. But if I run Python of mario.py here, I'll still see a column of three. But what's important here is that main does not need to know that the underlying implementation of print column has changed. 

Well, let's transition to a different dimension, if you will, and rather than print out just these vertical bricks, let's fast forward in the game to this part of the world here. At some part, Mario encounters these bricks in the sky, that if he jumps up underneath, they become coins. And so he gains to his score. 

But let's go ahead and focus only on those coins, and let me propose that we print out, oh, just these four question marks here. And let me go back to VS Code here. And let me propose that within VS Code here, just like before, we try to abstract this away. So let me go ahead and get rid of this version, because we're now going horizontal instead of vertical with our output. And let me just say, well, print row four times. Let me just abstract away the problem at hand. I don't know yet how I'm going to print those four question marks, but let's call it print row 4, and I'll assume I'll now solve this problem. 

Let's now go down that rabbit hole of solving the problem. Define a function called print row. It's going to take a width instead of a height, because it's horizontal instead of vertical. And how can I do this? Well now, we have an opportunity to do string multiplication even more elegantly. I can say quote-unquote, question mark, times width. 

And this is a very pretty Pythonic way of printing what could otherwise be a loop, and that's fine, but this is going to go ahead and print those question marks for me. Let's do Python of mario.py, Enter, and now I've got four question marks. It's not nearly as pretty as the more graphical version, but it is at least a building block toward having now a reusable function like print row. 

And why am I doing all this? Like why are we over engineering the solution to these problems by having print column and print row? Well, it's a useful problem-solving technique. As soon as your world does not look one-dimensional like this or with the column version, but what about this? Later in Super Mario Brothers does Mario have to jump down into this world where there's a lot of these underworld barriers. 

And this one here, for instance, looks like a square. It's two-dimensional there's a height and a width to it. And that is to say there's a bunch of different ways we could implement this thing if, maybe for discussion, it's like a 3-by-3 grid, a 3-by-3 square of sorts. 

Well, how can we go about solving this here problem? Well, let me propose we come back to VS Code and let me propose that we think about this in a couple of different ways. I could do this like this. If I know where I'm going, maybe I'm a seasoned programmer, let me go ahead and do this. Let me print out a square, the width, and the height of which is 3. That's an abstraction. I'm just taking for granted for a moment that there is already a function called print square that's going to be with 3 and height 3 as well. 

But someone's got to implement this, and at the moment, there's only me at the keyboard, so let's go ahead and implement that square. Let me go ahead and define a function called print square that takes in a specific size, both for height and for width. And here's where we have an opportunity to use some of those loops. And we can use those loops in a way we haven't yet. 

If I want to print out all of these rows, but also, all of these columns, I now have to think not just cyclically like a loop allows, but I need to think two-dimensionally. And if you're familiar with like an old school typewriter or even a printer nowadays, it generally prints from top to bottom. So even if you have multiple columns, you print out one line at a time, and while you're on that line, the printer or the typewriter prints from left to right. 

And that's the mental model to have with your black and white terminal window. All of the output for every example thus far starts at the top and goes down to the bottom. From top to bottom, left to right. So we have to generate our output, our square in that same way. So let me propose that we do this. Let me propose that we know we need to iterate this many times, 3 or more generally size. 

So let me do this. For i in the range of size, what do I need to do three times? Well, I want to print out what? 1, 2, 3 rows of bricks. But within each row of bricks, what do I want to print? 1, 2, 3 bricks specifically. So if we go back to our diagram here and I stipulate that it's indeed meant to be a 3-by-3 square, 3 wide and 3 tall, what did I want to do to print the first row? I want to print brick brick, brick. What do I want to print on the second row? brick, brick, brick. And the third row, brick, brick, brick. 

So I'm doing three things three times. There's a lot of printing that must happen. So let me go back to my code here and let me propose now that we think of this outer loop that I've just started as representing each of our rows. For i in range of size is going to ensure, no matter what I do next, that I can print out 1, 2, 3 rows, or more generally, size, where size could be 3, but it could be smaller or larger. 

What do I want to do on each of the rows? Well, just like an old school typewriter or printer, on each row, I want to print out brick, brick, brick; brick, brick, brick; brick, brick, brick. Well, that sounds like a cycle, some kind of loop. So maybe I can have inside of one loop another loop. I don't want to use i again because I don't want to use the same variable and mess up my counting. So I'm going to by convention use j. Very common to use i and then j-- maybe k, but after that, you shouldn't keep nesting inside of each other. 

Let me go ahead and say for j in range of size 2, because it's a square, and then each of these rows, let me print out a single hash, but no new line, but after each row, let me print only a new line. So there's a lot going on here, especially if you've never touched Python, let alone loops, but notice what I've done here, too, and I'll add some comments for clarity. For each row in square, for each brick in row, print brick. 

And here is where comments, and more generally, pseudocode can really help explain to yourself and to others what your lines of code are doing. On line 8, I'm iterating from i equals 0 on up to size. So 0, 1, 2. On line 11, I'm doing the exact same thing, but using j from 0, 1, 2. But that's good, because i represents how each of my rows. And while I'm on each of those rows, inside of this outer loop, I'm going to do brick, brick, brick; 1, 2, 3; 1, 2, 3; 1, 2, 3. But I don't want my cursor to keep moving to the next line while I'm on a row, so I'm just overriding that line ending. 

But let me ask you a question of the group now, why on line 16 do I have a print here all by itself? Why do I have a print all by itself? Notice that it's below the inner loop, but inside of the outer loop, so to speak. What is that loop on line 16 doing ultimately? 

AUDIENCE: Every time you finish a line, you have to add a new line at the end of it. So print, it prints a new line. 

DAVID MALAN: Perfect. I don't want a new line after every brick. I only want to do that at the end of the row, and that's why my comments now are perhaps enlightening. Notice that this loop here is just iterating for each brick in the row. Once I'm done with that inner loop, so to speak, once I'm done with these highlighted lines here, to Evelyn's point, I need to print out one blank new line. 

And we've not done this before, but when you call print with no arguments, all you get is that automatic line ending, the backslash n where the cursor moves to the next line. So if I now go back to my terminal window and run mario.py, I think I should get a 3-by-3 square. And it doesn't quite look like a square on my screen because these hashes are a little taller than they are wide, but it is, in fact, 3-by-3. 

But let me propose, as we've always done here, how we might tighten up this code further. Just for clarity's sake, let me get rid of my comments for a moment just so we can see how many lines of code we have total. And let me propose that we maybe do this. Let me propose that, you know what, this inner loop, especially if you're having trouble wrapping your mind around one loop inside of another loop, you don't strictly need it. What if we do this trick again? 

What if we print out inside of the outer and only loop each of those hashes times the number of times we want them? We draw inspiration from an earlier approach and we run Python now of mario.py, same result, but now, print square is really nice and compact. It has one explicit loop, and it's still printing out using string multiplication all of the hashes at once on that row. 

If you like abstraction and you'd like to wrap your mind more around what the code is doing, well, let's do this. If you're not quite clear on what's going on, let's propose that you implement a function called print row, passing in size. And let me propose that this print row function, it simply take in that width and print out the individual hash times that many times. 

In other words, here's an opportunity for abstraction, whereby, well, what does it mean to print a row? Well, when you're implementing print square, I don't really care what it means to print a row, I just need to know that someone's taking care of printing the row. You can pass the buck to another function altogether. 

And how does print row work? Well, it could use a for loop, it could use this string multiplication trick. This is a way to take a larger program-- and this is probably the most complicated one we've looked at thus far-- and to decompose it into these smaller components, that once assembled, achieve your final idea. 

Seeing no questions, that's the end of our look at loops in Python, this ability to do things cyclically again and again, and when we combine those with conditionals, this ability to ask and answer questions and combine them with our functions and variables, we really now have most of the building blocks we need to solve much larger, much more interesting, much more personal questions. 

So in the weeks to come, we'll start to see exactly what could go wrong, though, when we do so, but we'll introduce you to all the more tools via which you can troubleshoot those same problems. 

# lecture3-Excerptions

[MUSIC PLAYING] DAVID MALAN: All right, this is CS50's introduction to programming with Python. My name is David Malan. And this is our week on exceptions. Exceptions in Python as well as in other programming languages refer to problems in your code. Indeed, when something is exceptional in your program, it actually doesn't mean it's a good thing. It means something has gone wrong that, ideally, you will somehow solve. 

So what are some of the things that can go wrong? So I'm going to go ahead and open up VS Code on my computer here. And in the terminal window, I'm going to go ahead and run code of hello.py. That's going to, of course, open up a brand new tab for me, hello.py, in which I can write my code. 

And let me go ahead and write some very simple code just to say hello to the world. Let's go ahead and say print "hello, world. And then let me go ahead and-- I'm forgetting to close that quote. So a mistake that you yourself might have already made or might surely in the future make-- and it's a little subtle because you might not necessarily notice that you've just missed that one character. 

Well, let me go ahead and somewhat optimistically go down to my terminal window now and run Python of hello.py and hit Enter. And that's the first of my errors. My gosh, I've only written one line of code. And I seem to have more lines of errors on the screen. 

But the salient point is this bottom-most thing here. Notice where it says syntax error. A syntax error is a problem with the code that you have typed, your syntax. Just like English and other human languages have syntax associated with them, so does my code. And it's not quite correct. 

Something is awry. I didn't follow the instructions properly. And it does elaborate for me, unterminated string literal. Now, that's a bit arcane. That is a bit of a confusing error message. 

But unterminated would generally mean that I started something but didn't stop it. I didn't terminate it. String, of course, is a sequence of text, like we've discussed before-- or stir in Python. And literal generally refers to something that you literally typed. 

It's not a variable. It's something like quote unquote-- or just "hello world. So the fix here, of course, is going to be to go ahead and terminate that string and actually close the quote. And if I now go back down into my terminal window and rerun Python of hello.py, now I'm saying hello to the world. 

So the catch with syntax errors here is that syntax errors are entirely on you to solve. A syntax error is a problem that you've got to go back into your code and fix from the get-go. You can't just kind of hope that it's going to resolve itself or expect that other parts of your code will catch it for you. Syntax errors just must be fixed. 

But there's a lot of other types of errors in Python that might be described as runtime errors, that happen while your code is running. And it's really up to you to write some additional code defensively to detect when those errors happen because you don't necessarily know, for instance, what input humans are going to type into your program. And so you better be ready, defensively, to accommodate things that they type or even misstype. 

So, for instance, let's go back over here to VS Code. And let me propose that we take a look at a new file all together. I'm going to close hello.py. And I'm going to write code of say number.py. So let's play around with some numbers in Python. 

And the first thing I'm going to go ahead here and do with number.py, after opening this new tab, is I think I'm going to go ahead and print-- type up a relatively simple program that maybe prompts the user for an integer, like x, and then just prints out what x is. So we're going to start simple, but, again, in starting simple, we'll be able to really see where I've done something wrong. 

Well, here we go. I'm going to go ahead and say a variable called x is going to get assigned the value of the return value of input, quote unquote, "what's x?" And I'm going to include a space to move the cursor over a little bit. And then, ultimately, I'm going to go ahead and-- oh, wait a minute. If I'm wanting to get an int from the user, recall that I need to do something proactively. 

I need to actually convert that input to an integer using the int function in Python. So now I'm passing the return value of input as the argument to int. And that will store in x, ultimately, an integer, not a string that looks like an integer. All right, let me go ahead now and just quite simply print out what this is. 

I'm going to go ahead and print out, quote unquote, "x is x." But I don't want to literally say x is x. I want to plug in the value of x. So maybe the easiest way to do that is to surround it with curly braces. 

And then if I'm using these curly braces and I want Python to interpolate the value of that variable, that is substitute what x actually is in between those curly braces, recall that I need to use a format string or an F-string by fixing this whole thing with an F. Now that I've done that, let's go ahead and see what happens. I'm going to go ahead in my terminal window and run Python of number.py. 

I hit Enter. And so far, so good. All is well and being prompted for x. Let me go ahead and type in a number like 50. All right, that seems to work. Program seems to be correct. 

Or is it? What could go wrong in this program, even though nothing did just go wrong? But if I run it and run it and run it again, during the running of my program, what could still go wrong, especially if I'm not the human interacting with it but some other human instead? Any volunteers here for this one? 

What could go wrong? And in what way is this program not really correct, even though at first glance it seems so. 

AUDIENCE: [INAUDIBLE] 

DAVID MALAN: So I'm not calling an integer. I'm still having trouble hearing you. But what I think I heard is that if what the user types in is not, in fact, an integer, I can't just blindly convert it to an int. If I'm not putting too many words into your mouth, I think what I should perhaps do here is be a little defensive. And let me see if I can't simulate exactly the problem that could go wrong here. 

Let me go ahead and run, again, Python of number.py. Let me try another number. In fact, when testing your code, generally it's a good idea to test corner cases, maybe numbers that aren't quite as plain as or 49 or 51. Let's choose some numbers that might be a little more interesting, if only mathematically, like zero. 

All right, zero seems to work. My code still prints out that x is zero. What might be another corner case to consider? Well, let me go ahead and try a negative number. That, too, is pretty different in spirit from negative. 

Negative 1? OK, that works too. Well, let me try it one more time. I've tried positive numbers, negative numbers, 0. Let me try something like a cat. So literally, C-A-T-- typing in a string that doesn't even look like a number. 

And yet, let's see now what happens when I hit Enter. All right, we'll see now we've got another kind of error. It's not a syntax error, because I didn't make a typographical mistake. I didn't forget some piece of syntax. I actually now have an error with one of my values. 

And it's an a value I didn't even anticipate. The human, me, in this case typed it in long after I wrote the code. So what does this refer to? A value error. Well, let's see what the explanation is. 

Invalid literal for int with base 10, quote unquote, "cat." Now, this, too, is a bit of a mouthful. And, unfortunately, in Python and a lot of programming languages, the error messages are written for pretty comfortable programmers. And, of course, when you're learning programming for the first time, you might not be so comfortable with the programming language let alone the error messages. 

But let's see if we can't glean some insight. So invalid literal. Well, again, a literal is just something that's been typed in, it would seem, for int. What is int exactly? 

Well, int is the function I'm using to convert the user's input to a corresponding integer. Base 10, that refers to the decimal system, which is this the default that Python is using. And it looks like at the end of the day, what Python really doesn't like is that I passed cat, quote unquote, "to the int function." 

So how do I go about actually fixing this problem? Well, I could just add instructions in my program. Maybe I could add a line of print telling the user more explicitly, be sure to type an integer, or, please don't type cat. Please don't type strings. 

Of course, the user might still not oblige. They might not be reading the instruction. So that too is probably not an effective strategy. What we really want to do is write our code with error handling in mind. 

We want to write lines of code that not only accomplish the problems we care about but that also handle errors that might unexpectedly happen. And, in general, when programming, programming defensively. Assume that the users aren't going to be paying attention or, worse, they're malicious. They're trying to crash your program. So we want to handle as many errors as we can. 

Now, how do we go about doing that in Python? Well, it turns out whether you want to catch a value error or other types of errors as well-- though not syntax error-- Python actually has this keyword called try. And it's sort of aptly named. 

If you want to try to do something in Python, you can literally use this keyword. And you can check whether or not something exceptional, something erroneous, has happened. So using both try and this other keyword, except, can I go and try to do something except if something goes wrong? I can do something else instead. 

So let's consider, how can I go about trying to convert the user's input to an int except if something goes wrong? Well, let me go back to my code here. And let me propose that I now modify this example as follows. 

Let me go ahead and, above my first line of code, I literally write, try and a colon, telling Python, try to do the following. I'm going to go ahead and indent my existing lines of codes here by the same number of spaces, four in this case. And then I'm going to add one more new line down here that literally says, except Value Error. And notice it's important that I've capitalized the V and I've capitalized the E. These symbols are case sensitive. 

And this is now an opportunity, after this colon, to tell Python what I want to do in exceptional cases, when the number or the input from the user is not, in fact, a number. And I'm going to say something plain like print, quote unquote, "x is not an integer." I'm at least going to tell the user roughly what the problem actually is. 

So notice another detail. The indentation is important. Because I have try on line one and I've indented lines two and three, those are the two lines of code that I'm trying, except if I see a value error, line five, because it's indented is what is going to get executed in cases of those errors. 

Let me go ahead now back to my terminal window and run Python of number.py, Enter. And let's go ahead and type in again. Still seems to work. And, of course, I'm trying and succeeding. Let me go ahead and try once more, this time, though, with the word cat or, really, anything that's not a decimal number. 

And now you'll see much more cleanly x is not an integer. I'm not seeing some scary error message that I, the user, am going to have no idea how to handle. Now you, the programmer, have anticipated that something exceptional can happen. And you've gone about actually handling the error for the user, giving them an appropriate error message instead. Let me pause here and see, are there any questions now on what we've just done by introducing try and accept to handle this value error? 

AUDIENCE: Is value ever the only type of error you can get? Or are there other types? 

DAVID MALAN: Is value error the only thing you can catch? There are other errors as well. And we'll see a few of them today. And there's many, many more, honestly, that if you continue programming and programming in Python, you're going to see a lot of them over the weeks the months the years to come. But the technique for handling them is going to be largely the same other questions on try, accept, or these exceptions more generally? 

AUDIENCE: Yes, sir. Actually, to use the except block, you need to know the type of error, right? [INAUDIBLE] what if you can't anticipate this particular type of error? 

DAVID MALAN: A really good question. So I'm being very good about catching, so to speak, the very error that I might happen. I don't know when it might happen because it's going to depend on the user. But I know what kind of error will happen from the int function. There is a way in Python where you can say, except if anything goes wrong. And you can literally omit value error and just catch everything. 

The problem with that is that it sometimes hides other bugs in your code because you don't necessarily know what's going wrong. And if you don't necessarily know what's going wrong, how can you possibly handle it correctly? So bad practice. And it put another way, it's lazy to do that, to just say, catch everything and I'll deal with it here. 

So a much better practice would be to figure out what kind of errors could happen and include mention of them explicitly, as I have done. Now, with that said, if you read Python's official documentation, as you'll eventually invariably do, it is not great about telling you proactively what kinds of errors can be raised in this way. So it's a bit of contradictory advice. 

You should do it this way. But it's not always obvious what you should be checking for. But you get better at it with practice. And some of the times, the documentation does spell out what could go wrong. 

Let me turn our attention now back to this and point out that even though this is better code, it is more correct in the sense that I'm not just leaving it to the user to see some really ugly default Python error message that most people are going to have no idea what to do with, I'm at least handling it more elegantly. And I'm printing out x is not an integer. So it's at least more instructive. 

But this isn't necessarily the best way to implement this code. Why? Well, here, too, I'm actually still being a little lazy. So notice that I'm trying to do not one line of code but two lines of code. And this isn't a huge deal because we're only talking about two lines of code. 

But in the interest of preaching best practices, you should really only be trying to do the one or very few lines of code that can actually raise an exception that can actually fail in some way. I am pretty sure that calling print here is not going to raise a value error. Whether x is an int or a string or a float or anything else, the format string feature of Python is going to handle printing it just fine. 

So, really, what I'm going to do is this. I'm going to move this line three down to the bottom of my code. I no longer need to indent it. I'm just going to execute it at the bottom of my file here. 

Unfortunately, by doing this-- I've done a good thing by now only trying to do the minimal amount of work necessary that might raise the exception of value error. But I fear I've introduced a new mistake. Well, let's see. What is now incorrect? 

Let me go ahead and again run Python of number.py, Enter. Let me go ahead and do it correctly with 50. And all seems to be well. But, again, let's try those corner cases-- the zeros, the negative numbers, or, in this case, the cat. 

Let me go ahead and type in C-A-T again. Enter. Now I have a name error. So now it's yet another type of error in my code that I've introduced here. 

And what does this name error mean? Well, just as a value error refers to that-- the value of some variable, the value that someone has typed in is incorrect-- name error tends to refer to your code, like you're doing something with the name of a variable that you shouldn't. And why might that be? 

Well, let me turn our attention back to the code here and consider, what is it complaining about? Well, the name errors what I see down here. And it's telling me, name, quote unquote, "x is not defined." And notice if I look further here, it is mentioning line six. So I know the problem is with my code on line six. 

And that worked a moment ago. And I'm defining x on line two. But let me ask the group here, why does x, in fact, exist online six? Why is it not defined, even though I'm pretty sure I was intending to define it on line two? 

AUDIENCE: Maybe the scope of the variable is between the [INAUDIBLE]. 

DAVID MALAN: So, good terminology. Scope refers to the portion of code in which a variable exists. That, too, though isn't quite right in Python. That would be true in C, C++, and Java, where indentation or curly braces tend to define the scope of a variable. But, again, here in general-- and this worked a moment ago. X exists once it's defined on line two because, remember, I printed out x is 50 a little bit ago. 

Let's try one more hypothesis here. One more hand? Why is x somehow still not defined? 

AUDIENCE: Yeah, so is it because it's local variable, meaning that it doesn't define outside of the scope because what people have mentioned. It prompts the input in try, right? The outside of it is undefined. 

DAVID MALAN: So still good instincts. And good terminology, too. There's this notion of local variables, which tend to exist inside of functions, for instance, global variables, which tend to exist in entire files. In this case, too, though, that's not quite the case. What's happening here boils down to order of operations. Let me come back to the code here and recall that any time we've discussed the assignment operator, the single equal sign, that copies a value from the right to the left. But consider for a moment at what point something is going wrong. 

Well, the input function is probably working just fine because we've used that a lot now to get users' input. It always returns a string or a stir in Python. But what could be going wrong? Well, if I'm passing that string to the int function as its argument, it's probably the int's function that's erroring. 

And, indeed, if you think back earlier when we had the value error, it was, in fact, the int function that did not like, quote unquote, "cat" as input. So this is all to say that this portion of my code highlighted now to the right of the equal sign, that's the code that's creating a problem. That's the code that was creating a value error. 

And in this case, we're catching the value error. But because the value error is happening on the right of the equal sign, there's no value being copied to the left. The error is interrupting that whole process. So even though we see x equals dot dot dot on line two, the portion of that line to the left of the equal sign isn't getting evaluated, ultimately, because the value error is happening too soon. 

And so when we finally get down to line six, even though it looked like I was defining on line two-- and I would have defined x on line two if all had gone well-- we didn't get to the part where the value is copied from right to left because the value error happened first. So this code is just incorrect now. So how do I go about solving something like this? 

Well, it turns out that there's another feature of the try and accept syntax that Python supports, which is that it also supports the keyword else. Now, we've seen else before. If you think back to our discussion of conditionals, we saw if. We saw elif. We saw else, which was kind of this catchall, what you should do in the event that nothing else is relevant. 

That's kind of the same intuition here for the try-except feature of Python. What you can do is this. You can try to do the following, as I've done, except if this goes wrong. But if nothing goes wrong, else go ahead and do this. 

So this is one way I can solve this same problem now. No matter what now, Python is going to try to execute line two. If something goes wrong, it's going to execute lines three and four to handle that value error. 

However, if you try and this code succeeds, then there is no exception to handle. So you're then going to execute this line here. So it's a little confusing, perhaps, in that we're now using else both for conditionals-- if, elif, elif, elif, else. 

And we're also using else with these try-except blocks. But that's OK. That's part of the language. That's one of the features. 

So now if I rerun this code in my terminal window, Python of number.py-- let's do something correct, like 50-- I see that x is 50. So line one is executed. We're trying to do the following. 

Line two is executed because the conversion happened successfully and the number 50 gets copied from right to left. The exception does not happen. So we ignore lines three and four. We jump immediately to line five and six, which prints out the result. 

By contrast, though-- let's do this one last time. Python of number.py-- let's type in cat or, again, any other word and hit Enter now. We don't see what x is. Rather, we see, quote unquote, "x is not an integer," which is what's being handled in my except clause. 

All right, let me pause here because that's a lot of new syntax, and see here if there's any questions on try, on except, on else, name error, or value error. 

AUDIENCE: Can you please repeat the try function? 

DAVID MALAN: Repeat the name error? What's the problem with the name error? 

AUDIENCE: Yes. Yes. 

DAVID MALAN: Yes. So let's just rewind a couple of lines here before I fix this problem by now getting rid of the else. A moment ago, we had code that looked like this, whereby I was getting a name error, Python of number.py, Enter, typing in cat, that looked like this, where name x is not defined. And the problem was on line six, according to this output in Python. 

Well, let's think about this now deductively. Let's try a different approach. On line six, I'm seeing an error that name x is not defined. OK, Python's already telling me x does not exist at that point. So how could that possibly be? 

Well, where should x be defined? Well, presumably, x is defined on line two, up here. So what could go wrong? Well, if the user has inputted something that doesn't look like a number, like the word cat, passing cat, the return value of input, as the argument to int to convert the word to an int makes no sense. 

You can't convert a cat, C-A-T, to an integer at all. So the int function is raising a value error at that point. And the error is being handled with this code here. 

But notice this line six is not indented. It's left aligned with the rest of my code, which means no matter what, line six is going to execute. It's going to execute whether I typed in 50 or I typed in cat. 

But if I typed in cat, again, x never gets a value. So it's not defined here on line six. So when I introduced, finally, the else statement, that makes sure that these things are mutually exclusive. I only execute the else if I tried and succeeded up above. 

Well, let me propose that we refine this just a little bit further as well and consider how we might improve this example a little bit more. It's a little unfriendly of me to be rejecting the user's input after they fail to provide an integer and just quitting the program, really, right? It'd be more user friendly if I just prompt or reprompt the user again and again. 

And in the chat, if you could, what's the feature of Python that you can use if you want to do something again and again and again until such time as the user cooperates and gives you what you're looking for, like a number? So yeah, loop, loop, loop. So a loop is something that happens again and again and again. 

And maybe we can use that same mechanism, a loop, in order to prompt the user for x. And if they don't give us a number, prompt them again. And if they don't, prompt them again and again and again. We don't need to just quit out of the program. 

So, quickly-- so let me propose this. Let me propose here that I improve this code by deliberately doing this. Let me induce a infinite loop at the very top of my code with while true. Recall that the wild keyword induces a loop, a cycle that behaves like this. And it asks a question, a Boolean expression that needs to evaluate either to true or false. 

Well, if I want this thing to loop forever, at least initially, we'll just say while true because true is true. So this has the effect of doing something no matter what forever unless we break out of it early. Now I'm going to go ahead and do this. 

I'm going to go ahead and move my try except code indented underneath this loop so that I'm trying to get an x. If I have a value error instead, I print out x is not an integer. But this time, what do I want to do if the user does try and succeed in giving me a number? 

Well, I can do this. I can just break out of my code here. And down here now, I can use that same line of code from before, an F-string that says x is, and then in curly braces, x again. So what's going on here? I think this code now, because I've added the loop, is going to have the effect of trying at least once, maybe a second time, maybe a third time maybe 500 times until the user finally gives me what I want, which is an integer. 

And once they do, once there's no value error happening, then I break out of the loop. And line nine executes as I would hope. So let me go ahead and try executing this version-- Python of number.py, Enter. What's x? Let me go ahead and type in the easy thing first-- 50. X is 50. 

What just happened in terms of the control flow of this program, the flow of my logic? Well, I first found myself on line one inside of a loop. Hopefully, I'll get out of this loop. What did I then do? On lines two and three, I tried to get input from the user and convert it to an int. 

Well, I was a nice guy this time. And I typed in 50, which looks like and is a number. So the int function converted it just fine and stored it from right to left in x. Except value error? There is no value error because if I typed in a number, there's nothing exceptional happening. 

This is a boring, good execution of my program. So what happens? I break out of the loop. So, again, the else clause is associated with the try not with the except. 

And once I'm out of the loop, of course, I'm just printing out what x is. Well, let's try the other scenario that might happen. Python of number.py, Enter. What's x? Let's try cat or any other word. Enter. 

Ah, this is now a new feature. I'm being informed what I did wrong. X is not an integer. So I'm getting some useful user feedback. But notice, again, I'm prompted, what's x? 

Well, let me try typing in dog. X is not an integer. What's x? Let me try bird. Enter. 

X is not an integer. What's x? And suffice it to say, this will happen now forever if I'm in an infinite loop until I try and succeed, at which point I break out. So let's try again. 

50, Enter. Now I'm out of the loop. And I'm printing out what x actually is. All right, let me pause here and see if there are any questions. The logic is almost the same. But what is different now is I'm in a loop. And I'm using the keyword break in Python to deliberately break out of the loop when I'm ready to, once the user has cooperated. 

AUDIENCE: Do we really need to break? Can't we just print? Or what keeps us from just printing? 

DAVID MALAN: Good question. So let me try that. Couldn't I just print? Well, let's see what happens if I do that. 

Let me move this print line at the end into my loop here, thereby shortening the program. And, in general, that's been a good thing. Python of number.py, Enter. Let me go ahead and type in 50. 

OK, x is 50. What's x? OK, maybe it's 49. X is 49. OK, maybe 48. 

Unfortunately, I think-- you're laughing. You see it. I never break out of the loop, which maybe that's a feature. Maybe you want this to be your program. But I didn't. 

I'd eventually like this game to stop. So I need to break out in that way. But I can do it a little differently. And let me propose that we modify this a little bit. 

But, first, any other questions on this syntax here? Let me rewind to the prior version. 

AUDIENCE: Hi, can I use a break [INAUDIBLE] except and else? For example, in another print, may you use printing the else, you can use prints together with break or something like this? 

DAVID MALAN: So you can use break inside of loops to break out of loops. And you can use it inside of a conditional, like an if, an elif, or an else. You can do it inside of a try, except, else statement to. Any time you're in a loop that you want to break out of, you can use this keyword, break. 

I'm using it in the context of exceptions. But it's not restricted to that. And let me show you, too. It doesn't even have to be in the else. If I wanted to, I could actually do this. 

I could get rid of my else. And I could go back to line three, add another line that's indented, line four, and break out here. Now, why is this logically OK? Well, consider what I'm now trying to do. 

I'm trying to execute line three and converting the user's input to an int. And I'm trying to store the result from right to left in x. If something goes wrong, the code we've already seen is immediately going to jump to line five and then six to handle the exception. 

But if nothing goes wrong, my code presumably should just keep on executing line by line. So I could technically logically put the break here. And watch what happens when I run this version. Python of number.py, 50, Enter, it worked. I broke out of the loop. 

Now, which way is better? Honestly, I think it could go either way at this point. This program is so relatively short that even though I'm trying to do two things now, one of which, the break, is not going to fail. You either break or you don't. 

There's no piece of data from the user that's going to influence that. We don't strictly need to have those two lines of code there. But it's only two lines. So I think it's OK. 

And if you recall our discussion in the past, not just of correctness-- does the code work as it should?-- but design, I think you could argue it either way. If you prefer the readability of this and the fact that you don't have an else, that's fine. If, though, you prefer to minimize just how many lines of code you're trying to execute in case something goes wrong, the else is a reasonable approach too. 

Well, allow me to propose, too, now that we refine this further. I think we're at the point where it's pretty darn correct. But suppose now that I find myself today and tomorrow trying to get numbers from the user quite a bit. 

It would be nice, as we've seen, to maybe just invent my own function, get int to get an integer from the user both today and tomorrow and beyond. And, heck, maybe I can even share that function with other people. If they want to write programs, they get integers from users. 

So how might I go about doing this? Well, let me go ahead and propose that we do this. Let me get rid of the print line but keep most of my loop here. Let me define a function called get int that takes no arguments for now. And I'm going to go ahead and indent all of the code I already wrote underneath get int. 

So now I have a function called get int that tries to do the following. Try to get in it from the user. If something goes wrong and there's a value error, yell at them with x is not an integer. Else, break. But it's not just breaking that I want to do here. 

Now that I'm in a function, recall our discussion of return values. If you're inventing your own function whose purpose in life isn't just a print something on the screen like a side effect but is to hand back a value, to hand you back a value, like on that same post-it note from our discussion of functions, well, you need to return x explicitly. How do I now use this function? 

Well, as soon as we start making our own functions, it tends to be convenient to define our own main function as well. That's the main part of our program. And I'm going to keep this simple. 

I'm now going to say, x equals get int. And then on the next line, I'm going to do that print from before, quote unquote, "x is"-- in curly braces-- "x." And at the very bottom of my program recall, I'm going to call main, so that no matter what, I'm invoking my main function after everything's been defined. 

Well, let's see how this works. Let me go ahead and run Python of number.py. Enter. Let's type in 50. And it seems to work as before. 

Let's go ahead and run it again, typing in cat, C-A-T, this time. X is not an integer. And I'm being prompted. 

Dog, and I'm being prompted. Bird, and I'm being prompted. Fine, fine, fine. 50. That's an int. And so it is printed. 

So what's worth noting here-- well, I'm manifesting a couple of good properties here. One, I've kind of abstracted away this notion of getting an integer. And even though I just artificially hit Enter a whole bunch of times just to hide that function for now-- it needs to be there, but we don't need to see it at this point-- notice that now this entire program really boils down to just these three lines of code now. Why? Because I've abstracted away that whole process of getting an int from the user into this new function of my own called get int. 

But can I improve upon this? Well, let me go and undo all of those blank lines and pull this up just so we can see more on the screen at once. Can I tighten up my implementation of get int? It is correct. 

I claim this is correct. It's handling errors. And it's returning x. But I don't, strictly speaking, need to write the code as long. What else could I do? 

Well, let me propose that if all you're doing on this line 13 is breaking and then immediately after that, per the indentation, you're executing return x on line 14, why are you wasting everyone's time? Once you know you're ready to return the value, you could just return x. 

And so in my else, I could break out and return a value. So here, too, return is used to return values from functions. Break is used to break out of loops. But it turns out that return is sort of stronger than break. 

It will not only break you out of a loop. It will also return a value for you. So it's doing two things for once, if you will. 

But can I make this even more compact? If my goal is to just tighten the code up, even though it's already correct, can anyone think of a further refinement, whether you've programmed in Python before or not? Can I shorten this implementation further just a little bit, if only to decrease the probability that I've made a mistake by having fewer lines and just make it a little easier to read because it's shorter? Any suggestions for tightening up my implementation of get int? 

AUDIENCE: You can just return the value on the try function, when you're trying. You take the input x and then return x. 

DAVID MALAN: Good. We can just return x a little higher up. And let me correct folks as we go. It's not a try function. It would be a try statement, technically. 

A function typically has a parentheses and another one. In this case, it's just a statement. But we can do exactly that. I don't technically need the else. 

If I really want, I could do this. Right after line nine, I could return x here. Or recall our discussion of defining variables unnecessarily sometimes. Why define a variable here if you're immediately going to use it here and then never again? So we could avoid a new line here. And I could avoid even defining x explicitly. 

I could just say something like this. I could return int, input, quote unquote, "what's x?" I can do it all at once. Now, which is better? I don't know. 

I mean, again, this is where reasonable people might disagree. I'd argue that, on the one hand, we're tightening up the code. We're using fewer lines. It's easier to read, lower probability that I've made a mistake. 

On the other hand, it's a little more complicated to understand, perhaps. It's a little less obvious where I'm returning from. So I think arguments can be made either way. 

At the end of the day, what's important is that you've done this consciously. You've made a decision to do it this way or this way. And you can justify it in your mind-- not that your answer is, eh, it worked, so I left it alone. 

Have a good reason. Come up with a good reason. And that will come with experience and practice. 

Well, let me propose to you that we make one other refinement here. Suppose that you're finding your programs to be a little noisy. And it's a little obnoxious that you keep telling the user, x is not an integer. X is not an integer. X is not an integer. 

What if you want to make things a little gentler and just prompt the user again with the same words, what's x? What is x? What's x? Again and again. Well, you can do that as well. 

And it turns out that if you want to handle an exception in Python but you want to pass on doing anything with it-- so you want to catch it, but you essentially want to ignore it. You don't want to print anything. You don't want to quit the program. You just want to silently ignore it, like if you're talking in a room full of people and it's your turn to talk and you're just like, pass. 

They're still calling on you. But you're not doing or saying anything more. Well, we can add this keyword to our code here. Let me go back to my program here. And instead of printing out again and again, x is not an integer, I could just do this. 

I could pass on handling the error further. I'm still catching it. So the user is not going to see a scary message even mentioning value error. My code is catching it. 

But I'm passing on saying anything about it. I'm going to stay in the loop. I'm going to stay in the loop and keep prompting and reprompting the user so now the effect looks a little something like this. Python of number.py. Let's type in cat. What's x again? 

Let's type in dog. What's x again? Type in bird. So it's just a little, maybe, more user friendly and that you're just reminding the user what you want. 

Maybe it's worse. Maybe it would be helpful to tell the user why you're prompting them again and again. It's not obvious. So it could go both ways. 

But, again, it's just another mechanism, now, for handling these errors. We use the except keyword to catch a specific error. But we don't have to handle it more than that. We can just pass on doing something further. 

Let me pause here and see if there's any questions now on try, accept, else, or pass? 

AUDIENCE: OK, yeah. No. I was just kind of curious, I guess, about the idea of when you were inventing with the get int function, for example. Because I'm noticing, obviously, going through it with the whole logic and breakdown of the entire function, while true, do this. But I'm just kind of curious in elaborating with the indentations for the code more. 

DAVID MALAN: Yeah. So the invitation is deliberate logically. Some languages don't require as rigorous indentation. You can use curly braces or other symbology to make clear what is associated with what. In general, any time you indent something in Python on this line-- rather, anytime you write a code a line of code in Python that's here and the lines below it are somehow indented, that means that those lines are somehow associated with that first line. And, presumably, those indented lines should only be executed if the first line told the computer to do so. 

So, concretely, what does this mean? On line six here, we're defining a function called get in that takes no arguments, colon. Everything that's indented by at least four spaces hereafter is part of that function. Why? That's just the design of the Python language. 

Frankly, I think the designers got tired of seeing really ugly code in languages like C and C++ and Java that don't necessarily enforce indentation to this extent. So now it's baked into the language. And my chronology might be a little off there. But there's been many languages that are looser than Python when it comes to indentation. 

The indentation is meaningful on line seven too. Notice that because the while true is indented by four spaces. That just means it's part of the get int function. But notice below the while true statement, there is eight, there's 12, there's eight, there's 12 spaces here. And I'm just quickly counting the dots. 

That means that all of the lines I've just highlighted are inside of that while loop. While true means to execute lines eight through 11, potentially, again and again and again. And now, lastly, on line eight, because we have try and indented below it is line nine, that just means that what you should try is what's on line nine. 

And similarly, on line 10, below it, we have indented line 11. You should only pass when there is an exception of a value error. So the indentation just means what is associated with what. And once you get comfortable with that, you'll see that the indentation alone helps explain the logic of your program. 

And it has a wonderful side effect that for yourself the next morning, for your colleagues, your family, your friends, your teachers, your code is much more readable as a result. It's not one big mess of a blob of text. Other questions now on try, except, else, or pass? 

AUDIENCE: Yeah, thanks. Two question. Question one-- once you say pass, can the caller still learn anything about this era through a system variable or whatever? And question two-- problem set zero referenced some string methods, including is numeric-- is it any different to [INAUDIBLE]? 

DAVID MALAN: Good question. So on the first question, if I'm handling the error in this way, the caller is not going to know anything about it. That's the point of my handling it, so that main or other callers don't know that anything technically went wrong. 

On the second question, is numeric is another function that you can call that can look at a string and determine is this, in fact, a number. I could use a mechanism like that. I could use a conditional. 

If this looks like a number, then pass it to the int function. And go ahead and convert it to an integer. That's totally fine. I would generally say that the Pythonic way of doing things is often, for better or for worse, to try things, hope they work. But if they don't, handle the exception. 

So other languages are more in favor of checking if, if, if, if, elif, else, and all of these conditionals. Python tends to be a little more of the mindset, eh, try it. But just make sure you're handling the error. So this would be the Pythonic way of doing it. Your way, though-- checking with the conditional, is it a number first?-- is totally reasonable too, if you want to go that way. 

Well, let me propose some final refinements to this program that really just kind of tighten things up, one additional step to improve the implementation of this get int function. Let me propose that we not hard code, so to speak-- that is type manually x all over the place. Let's make this function, get int, a little more reusable. 

Right now, notice that I'm just kind of using the honor system that, well, main is defining a variable called x. And get int is asking for a variable called x. But it would be nice if the caller, main, doesn't have to know what the call-ee is naming its variables and vise versa. So caller-- to call a function means to use it. The caller is the function that's using it. 

The call-ee is just the function being called. It would be nice if I'm not just hoping that x is the same in both places. So let me propose this. Let me propose that we actually add a parameter to get int, like this. What's x? 

That is to say, if main wants to use the get int function, well, then main should probably tell the get int function what prompt to show the user. Just like the input function, recall, that comes with Python, it's up to you to pass in a prompt that the user then sees when the human is asked for input. So how do I make this work here? 

I can go down to my definition of get int. And I can say, all right, get int is going to take a parameter now, called prompt. I could call it anything I want. But prompt in English is pretty self-explanatory. 

It means the message the user will see. And now, down here, when I actually use input, I don't have to presumptuously say, what's x? Because what if the program, the caller, wants to ask for y or z or some other variable? I can just pass to input whatever prompt the caller has provided. 

So now I'm making more reusable code. It still works just the same. I haven't changed the functionality, per se. But now it's a little more dynamic because now get int doesn't have to know or care what variable's being asked for, what's being asked for. It just needs to know what prompt it should show to the user. 

So if I now run this program down here, again, prompt number.py, Enter, what's x? 50 still seems to work. Let's run it again. Let's type in cat. 

It still seems to work. And if I type in cat, dog, bird, or anything else, it will keep prompting me with that same prompt, making this code, therefore, all the more usable. Now it turns out, too, you can even raise exceptions yourself using Python's raise keyword. But more on that another time. 

So in the coming days, the coming weeks, the coming months, as you write more code in Python, you'll see that errors are inevitable. Sometimes they're syntax errors, which you've got to just fix if you even want to run your program at all. But they could be name errors-- for instance, variables that you meant to define but somehow didn't-- value errors, where maybe the user didn't cooperate and provided you with something that you weren't expecting, or a whole list of other possible errors or exceptions. But now, hopefully, you know how you can handle these errors and respond to them in any way you like. This, then, was our look at exceptions. And we'll see you next time. 

# lecture4-Libraries

[MUSIC PLAYING] DAVID MALAN: All right, this is CS50, Introduction to Programming with Python. My name is David Malan, and this is our week on library. So libraries are generally files of code that other people have written that you can use in your own programs or a library's code that you've written that you can use in your own program, but maybe not just this program, but another and another as well. 

So Python supports exactly this idea. This ability to share code with others, share code across your own projects. And it does so by way of what it calls module. A module in Python is just a library that typically has one or more functions or other features built into it. 

Generally, the purpose of a library or a module specifically is to encourage reusability of code if you find yourself using the same types of functions again and again, the same functionality. If you find yourself copying and pasting from an old project into your new project, odds are there's an opportunity there to factor out that code that you keep copying and pasting that you keep reusing and put it into a library that you can then load into your programs moving forward so as to not just copy and paste it and have all these different copies all over. 

So what are some of the modules or libraries that Python comes with? Well, Python comes with a random library literally, which is to say that when you install the Python interpreter on your Mac or PC or somewhere in the cloud, not only do you get Python, you get a whole bunch of modules as well. 

Now, these modules provide you with functions that you don't have access to just by default like you do print and input. Print and input and other such functions just work in Python. But sometimes functions are tucked away in these modules, so you have to be more deliberate about loading them into the computer's memory. 

So somewhere on the computer's hard drive, once you've installed Python, there is also, it turns out a file, probably called random.py that someone else wrote probably long ago but that you have access to. And in that random.py file, there's probably one or more functions that you yourself can use in order to do things randomly. 

That is to say how could you flip a coin in a program in Python? How could you pick a random number between 1 and 10 in Python? Well, you need a bit of randomness. And while you could figure out mathematically how to write functions like that yourself, it's a lot easier to stand on the shoulders of others who've already solved that problem for you so you can focus on the problem that you yourself want to solve. 

So for documentation on most any Python module, you go to the official Python docs. And you go to a URL like this where the documentation for that specific module lives. And within the documentation, you'll see a list of the functions or other functionality that some module provide. 

But how do you go about loading a module into your own program so that you can use the functions in that module? Well, we need a new keyword in Python and namely it's import. The import keyword in Python allows you to import the contents of the functions from some module in Python. 

Well, how might I go about using this in practice? Well, let me propose that there exists in that random module this function among others. So I have copied and pasted from the documentation this summary of a function called Choice. 

Now, the function exists in the random module, so to speak, not a random module, the random module. And so generally the documentation describes it fully like this. random.choice is how you would technically call this function, though, we'll see alternatives to that. 

In parentheses, there is a parameter called S-E-Q for sequence. And sequence generally means a list or something that is list-like if you have a list of numbers or strings or anything else. And the documentation elaborate. Well, how can I go about using this function to solve, perhaps, a familiar problem? 

Well, let me go ahead and open up VS Code here. And let me propose that we implement a program that simulates flipping a coin. A coin that in the US has heads or tails, the idea of which is to pick a decision with 50/50 probability. 50% probability of heads, 50% probability of tails. Or you can use some other mechanism like that. 

Well, let me go ahead and open a program with code called generate.py because I want to start generating a whole bunch of random information. The first of which is just going to be a coin toss. Now, how do I go about using that function? 

Well, I first have to import the random library. So literally the first or among the first lines of my file should be import random. And that just gives me access to all of the functions in that specific module. Now, suppose I want to flip a coin. Well, I can do random.choice per the documentation a moment ago. And that again takes a sequence. 

What's a sequence? It's a list or something that's list-like. And we know about lists. We've used lists to iterate over numbers. We've used lists to iterate over students at Hogwarts. Let's go ahead now and iterate over just a list of two sides of a coin, "heads," quote, unquote, or tails. 

Now, I could call these anything I want. These are my string. I just want to simulate a tossing a coin. So I'm just going to say in all lowercase, heads and tail. But notice the syntax. I have "heads" and "tails" in double quotes. That's because they're strings. I could also use single quotes so long as I'm consistent. There's a comma between them, which means the list has two elements. They're square brackets to the right and the left, which indicates that this is indeed a list. That's the syntax recall for defining a list in Python. 

And then lastly, there's something more familiar. There's the parentheses outside of those square brackets. But those are just the parentheses that belong to the Choice function and specify where its parameter gets passed in. But again, unlike past function, I have to specify what module this function is in at least for now. And so I do random.choice to call the specific function. 

All right, well, it's one thing to flip a coin picking between those with 50% probability. And that's what random.choice does. It takes in a list, and it returns to one of those values randomly with equal probability. Because I've passed in two items, I've got a 50/50 chance. If I passed in three items, it'd be a 33% chance for each of those items and so forth. Python does the math for you. 

But I want to store the value of this in a variable. So let's define a variable called coin equals whatever the return value is. So this is indeed like flipping a coin. I'm going to store in a variable called coin, whatever that value is, heads or tails. And now, just so I can see what's going on, let's go ahead and print out the value of that string coin 

All right, let me go ahead now and run this program in my terminal window. Python of generate.py, Enter. And it looks like the first coin toss was the heads. Let's go ahead and run it again. And it looks like it was heads again. Maybe you want to chime into the chat here. 

If I run it a third time, what's it going to be this time? If you want to type your thoughts in the chat, you might think there's a bug here. But this is probability in action. If I go ahead and hit Enter a third time there, it's actually now tails And again, tails and again tails and again tails and again tails and again heads. 

Now, if we did this an infinite number of times, it would indeed work out to be 50/50. If we only do it a few times, it might not work out as cleanly. But that's how probabilities indeed work. 

All right, so I've got that now working. Could I have implemented this in a different way? Well, let me show you an alternative to actually using the import keyword alone and let me introduce the keyword from in Python. So from is a keyword in Python that you can use when importing functions from a module, but it allows you to be a little more specific than import alone. 

So if I go back to my code here, it's worth noting that what technically I'm doing here by importing random is I'm technically importing everything that's in that module. So not just the function called random.choice but a few other functions as well. So instead of using this line of code at the top of my file, import random, which will technically give me access to all of the contents they're in, a downside of that is that I have to type in random.choice, random.this, random.that because all of the functions I'm calling have to be associated with the scope of that module. 

Well, suppose that I just want to call the function as its name, choice. I can do that as well. Let me replace this first line here with from random import choice. And what this does effectively is it loads the function's name choice into my current namespace into the scope of the file I'm working in. 

What that means is that I now no longer have to specify which choice function I mean. I can just say choice. And so it loads it into the local namespace that is into my local vocabulary, if you will, so I can just now say choice. This might be advantageous in what cases, do you think? 

When might you want to import the name of the function explicitly like this as opposed to just saying random.choice-- random.choice throughout your code when calling a function? Any instincts here for this alternative import using from? 

AUDIENCE: Hello, I'm Mohammed Omar from Egypt. And maybe if we have a variable that its name is basically like choice if I have a variable called the choice. So I need to differentiate which trays I choose. So I'm going to choose random data choice. 

DAVID MALAN: Yeah, really good instincts. By using the first approach by just importing random, you're making sure that all of its contents are associated with or scoped to the random module so that you can have your own choice function. You can have your own choice variable. You can use the same names as all of the functions or variables that are stored inside of that file without them colliding, so to speak. And this is a good thing. 

In older languages, it was the case that if you imported someone's library, you better hope that you're not using the same functions or variables as they are because you might in fact have some kind of conflict. Python and certain other languages allow you to scope the names of those functions and variables to the file or the module that they come from. So that's a good thing. 

But honestly, this is such a short program. Or equivalently, maybe I'm using the choice function in so many places calling random.choice, random.choice, random.choice. It's just making my code longer and longer and longer. 

Marginally so, but hey, just getting ugly and annoying, I can simply import choice and now tighten up my code a little bit. So as with so many decisions in the past, there's not necessarily one right approach or another. It depends. But I think for those very reasons, sometimes it's better to do what we did the first time, which is only import the module so as to retain the scope therein. 

Well, let me propose that we transition to another function that comes with Python's random module. And that's this here from the documentation randint. It's a bit hard to say, but it implies get back a random int. And if you read the documentation, it's a random int that's between A and B inclusive. 

So if you were to pass in 1 for A and 10 for B, you would get back a number between 1 and 10 inclusive, including the 1 and including the 10 potentially. Each with a 10% probability. So how might I go about using a program like this? Well, let me come back to my generate the py file. And why don't we go ahead and try generating a random number between 1 and 10? 

You might do this frequently in the real world. When you just want someone to pick a random number, you tell them as much in the human response. Let's get the computer to do the same here. Let me go ahead and delete my two lines of code at the bottom but keep my import random. 

And let's go ahead and define a variable this time called number, set it equal to the return value of random.randint and now passing A, a value of 1 and B, a value of 10. And now, let's go ahead and print the number. I'm going to go ahead in my terminal window and run Python of generate.py and hit Enter. 

4. A Python of generate.py and hit Enter. 8, again, 9, again, 7, again, 10, again, 2, again. And we can do this all day long. And if we add all of those up, they should end up being with 10% probability each. 

Now, how might you use this information? Well, maybe we're playing a guessing game. Or maybe we're trying to randomize the behavior of some character in the game. You can imagine using very simple building blocks like this just spicing up your program by getting it to do things a little less predictably because you're choosing these values seemingly randomly. And you're deferring to Python to actually do the generation of these numbers using its own algorithms and its own math. 

Well, what more could we do here? Let me propose that we introduce another function that comes from this random library. Yet, another that you yourself don't have to implement, shuffle. If you read the documentation for shuffle in the same random module, you'll see that it takes in a list, for instance, of values and just shuffles them up. It randomize them like a deck of cards. 

Here, you might shuffle them so as to put them into seemingly random order. Well, how do I use this based on this function's name? Well, let me propose that we go back to VS Code here. And let me go ahead and this time do the following. Because I need to shuffle something like a deck of cards, let me go ahead and not just import random. But let me give myself a variable called cards that's going to be of type list. And just so I have something to shuffle, I don't need all 52 cards in a typical deck. 

I'm just going to shuffle three cards. A Jack, a Queen, and a King. I could call those strings anything I want, but I just wanted a list of some values so as to shuffle them up. That is randomize the order therein. Well, how does this now work? If you read the documentation for random.shuffle, you'll see that it shuffles the argument in place. 

That is unlike many of the functions we have seen. It doesn't return to you a value that contains the shuffled cards in this case. It actually shuffles the list it's given itself. So what this means for my code is that I need to do something like this-- random.shuffle and pass in the variable containing those cards. 

And then on a final line here, how might I go about printing the cards? Well, I could do this, and I could say print card. But if I do that, I'm actually going to see Python syntax for lists. And it's just going to format in its own way using commas and the like. I want to print these cards out one at a time just because I think it'll look a little better so we can use some of our syntax from loops and say something like this-- for card in cards, go ahead and print out the current card. 

So what's now happening here? Line three, I'm defining a list of three cards in this order-- Jack, Queen, King. I'm then shuffling those same cards on line four. And then on line five, I'm using a for loop for each of the cards in that list printed out one at a time and because I'm using print one line at a time. 

Well, let's see the results. Down here in my terminal window, I'm going to run Python of generate.py and hit Enter. Queen, King, Jack seemingly shuffled because that's not the order I defined earlier. Let's do it again. Queen, King, Jack. Hmm, OK, that happens to be the same. But let's see. This could just be bad chance. 

There we go. Jack, Queen, King. Doesn't look like it's shuffled, but at least we're getting back different orderings now. Again, Jack, Queen, King. Hmm, not so good. Jack, Queen, King. Not so good. This is someone you probably want to play against with cards. Queen, Jack, King, there we go. 

But of course, we only have three cards here. So there's not that many permutations we might see. And if we do this over time, we will see all of them. But if we had, of course, 13 or 52 cards, we'd see a lot more permutations instead. 

So we have now these three ways to generate random information. One, a simple coin toss if you want to start some kind of athletic event. One, pick a number between 1 and 10 if you want to decide something based on that. And now, using shuffle, we can even take in a list of things and shuffle them about so that we get some kind of random behavior. Well, let me pause here and see if where there's any questions yet on random, on modules, or any of these three functions. 

AUDIENCE: Yeah, can we increase or decrease the probability of cards if we want to? For example, there are three. There is a 33% chance of probable B. So is there any chance to increase or decrease the probability? 

DAVID MALAN: Can you set these probabilities not using these same functions? Can you set the probabilities? But you can absolutely implement some of your own functions or use more sophisticated functions that do exist in this library and others to exercise more control. 

These are meant to be very user-friendly and simple functions, certainly the ones we looked at, that give you equal probability for all of those. But absolutely you could skew things, though, hopefully, if you're implementing a gambling game or the like, you're not actually making some cards more probable than others. 

Allow me to turn back now to our implementation here of this randomness and consider how we might leverage other types of functionality that aren't necessarily in this specific library here. Well, it turns out that Python also comes with a statistics library. And this contains all sorts of functions for doing things more statistical in nature, namely calculating means or medians or modes or other aspects of a data set that you might want to analyze. 

So how might we use the statistics module in Python? Well, we might first just take a look at it's documentation like any other module in Python. And we'll see within that library that there's a whole bunch of function. And one of those functions is one that's quite simple. It's average. A function that allows you to calculate the average of some numbers that you've passed in. 

Let me go ahead and in VS Code in my terminal window, open up a new file called average.py. And at the top of this file, I'm going to import a different library this time, namely the statistics module in Python. And now, I'm going to go ahead and call a function that I know comes in that module, namely mean for the average of some values. And I'm going to call statistics.mean. 

And I'm going to pass into this function mean, a list of some values. And let's suppose that I'm quickly trying to calculate what my current grade average is in school. And I did really well on my first test. And I got 100%. And on my second, I did well but not as well. And I got a 90. And ironically, I'm not very good with math. So I'd like to figure out what my average now is between those two tests. 

So let me go ahead now and in this list, type in the number 100, comma, 90, thereby passing in a list of two values, two INTs, 190. And outside of those are the parentheses because, of course, this is now the argument I'm passing to the function called mean. And this function mean is in the module called statistics. 

Well, it's not that interesting to just calculate the mean if I don't actually see what it is. So let me additionally pass the return value of that mean function to the print function as usual. Let me now in my terminal window in VS Code, type in Python of average.py and hit Enter. And voila, as you might expect, my average is 95%. 

So the difference here is that I'm just using a different module that still comes with Python. But I need to import it instead of, for instance, the random module instead. And this time, I know from the documentation that there exists a function called mean. 

Well, it turns out there's even more functionality that comes with Python and that comes with other modules in Python. And there's this feature generally known as command line arguments. This is a feature, not just of Python, but of languages more generally that allow you to provide input not when prompted inside of a program as happens whenever we call the Python function input. 

But rather, there's this feature, command line arguments of programs, that allows you to provide arguments that is input to the program of just when you're executing at the command line. So up until now, for instance, recall that we've generally run Python of something.py. For instance, Python of hello.py. And I've never once really executed any words or phrases after the name of the file, but I could. 

In fact, when you're running programs in a command-like environment like we are, you can provide any number of words or numbers or phrases after the command that you're typing. And all of those will somehow be passed in as inputs to the program itself. You don't have to prompt the user for one thing at a time by manually calling that input function. 

So what does this mean in real terms? Well, let me go ahead back into VS Code here. And let me propose that we consider how we might leverage a certain module. I'm going to go ahead and create a file called name.py. And I'd like to use a new module this time that's going to give me access to values that have been typed at the command line. 

But what's this module going to be? Well, this one's going to be called sys. And sys, short for system, contains a whole lot of functionality that's specific to the system itself and the commands that you and I are typing. The documentation for this module is at this URL here. And it lists all of the various functions and variables and the like that come with that module. But we're going to focus on something a little more specific, namely this thing here. 

It turns out in the sys module in Python, there is a variable that just magically exists for you called argv. It stands for argument vector which is a fancy way of describing the list of all of the words that the human typed in at their prompt before they hit Enter. All of those are seemingly magically provided to you via Python in a variable called sys.argv. 

This variable is a list, which means that the first element is going to be the first word that you type. The second element is going to be the second word that you typed in, so forth. And by way of this list, then, can you figure out what words did the human actually type at the prompt and maybe use that to influence the behavior of your own program? 

So what does this mean now in real terms? Well, in this new tab called name.py, let me go ahead and import sys. Within that sys module is going to give me access to sys.argv, but how might I want to use it? Well, let's do this. Instead of writing a Hello World program that all of these times has just looked for the return value of input to figure out what the user wants me to print, let's go ahead and just expect the user to tell us when they run the Python program itself, what their name is. 

And suppose this time, I'd like to generate a whole bunch of name tags, initially just one. And in the US here, it's very common to wear a sticker on your lapel that says Hello, my name is David. So I want to print out some text that resembles that. The idea being maybe I could enhance this program someday to even send that text straight to the printer and dynamically generate those name tags. 

Well, let me go ahead now and do this. Let me go ahead and print out as always, Hello. But I'll say a little something more this time to make things more interesting. Hello, my name "is," quote, unquote. And then after that, I normally have been in the habit of calling input, storing the return value in a variable, and passing in the name of that variable here. 

But I'm going to instead jump right to this-- sys.argvbracket1. And that's it. I'm going to have a program here that says Hello, my name is followed by whatever is in sys.argvbracket1. And notice, this .argv again is a list. And recall from our discussion of loops and in turn list, we use this square bracket notation to get at the various elements inside of a list. 

All right, let me go down now into my terminal window and run Python of name.py. But this time, rather than just hit Enter and wait for the program to prompt me for my name, let me proactively just tell this program what my name is at the so-called command line. 

Here we go. D-A-V-I-D separated with a space from the name of the file so that now when I execute Python, name.py David, I see on the screen, voila, Hello, my name is David. So based on this demonstration alone, I think we can infer exactly what's going on in sys.argv even though it sounds certainly at first glance, rather complicated here. 

Let's look up. At sys.argv, I'm going to bracket1 here. So clearly, sys.argvbracket1 is storing D-A-V-I-D. But it's one. In the past when we looked at loops, recall that we said that they were zero index. That is the first element is zero. The next element is one. This next element is two and so forth. 

And yet, here I am treating it as though my name is at the start of the list one. Well, let me ask this question, what is probably in sys.argv of 0? What is probably in sys.argv of 0-- the very first element actually in that list? 

AUDIENCE: Oh, yeah. I think it's like in C, the name of program. 

DAVID MALAN: Indeed, it's indeed like in C. Another language is the name of the program. Well, if we consider what it was I typed, I certainly typed Python because that's the name of my interpreter. And we don't really need to know that because we're using Python itself. 

But after that, I did type two things. I typed name.py as I've done so many times any time I want Python to the interpreter program I've written. And it turns out by convention, what Python does is it stores in sys.argv the name of the file that you're executing or interpreting followed by any number of other words that you type. 

So all this time, we could have been accessing the name of the program, which frankly, isn't all that interesting. But we can also now access words that are typed after that prompt as well. But of course, if I don't type anything in, what might happen here? This might be naive of me to assume that there's always going to be something at location1 in sys.argv. 

Let me go ahead and try this. Python, name.py. And I'm not giving you my name because at this point, I might not even know that you want my name to be typed. So let me hit Enter now. And uh, oh, we see now an error. A so-called exception in Python, this one's a new one. This one's an index error that elaborates list index out of range. 

And turns out this is actually one of the most common mistakes in programming, whether you're using a list in Python or arrays or vectors in other languages, is to try to access some element that does not exist. You try to go too far to the left. Or you try to go too far to the right in this object that is just a list of some values. 

So of course, the mistake here is that I'm assuming there's going to be something at location1 when really, it's location0. That's the only one that has a value. But fixing this is not going to amount to doing bracket0 because now if I go ahead and rerun this program with no other words after name.py, it says Hello, my name is name.py, which is fine if we're making a name tag for the program, but that's not, of course, what my goal here is instead. 

So if the fix is not just to change the one to a zero, how else might I handle this error? How else might I handle this error? This index error that happens if the user just doesn't remember to or doesn't know to type their actual name at the prompt. 

AUDIENCE: We could always put an exception into the program, say, if there's nothing at location1, we just come out and say, OK, we haven't got parameter or something. But if there is, we continue along with the program. 

DAVID MALAN: Perfect. So if I might simplify, we can try to execute this line of code, except if there's an error, we'll deal with it in some other way. Now, ideally-- and once I'm a strong enough programmer, I would have anticipated this and written the following code from the get go. But when you're learning, it's certainly reasonable to see an error. Oh, I didn't realize I should detect that and then go back and improve your code. 

But of course, if you read the documentation, you ingrain some of the lessons learned from the past. You'll get into the habit of trying and checking for some of these exceptions yourself. So let me solve this in one possible way as you've proposed here. Let's try to handle this exception as follows. 

Let me go ahead now. And instead of just blindly calling this print line, let me try to print out Hello, my name is such and such, except if there is an issue, specifically an index error, then what do I want to go ahead and do? I'm going to say something like too few arguments. 

I could be more explanatory than that. But for now, I'm just going to explain to the user that they gave me too few arguments, too few words at the prompt. So now, it's still not going to work in quite the way I want. I'm still not going to be able to generate their name tag. But at least, they're not going to see some cryptic error message and think that they themselves broke the program. 

Let me go ahead now and run Python of name.py Enter and too few arguments. OK, let me go ahead now and do Python of name.py and type in my name, David. And now we're back in business. And I see that my name is on the screen too. 

But strictly speaking, I don't have to try to do this. I could actually be a little more defensive in writing this code. And maybe I could check whether or not the user has indeed provided a name or multiple names at the prompt so as to give them more refined error messages as well. 

So how might I do this? Well, me go and undo the exception handling I've added. And why don't I instead more modestly try to do this? Let me go ahead and introduce a conditional here. If the length of sys.argv is less than 2 or equivalently equal to just one value-- but I'll just stick with less than 2 for now, then go ahead and print out two few arguments. 

So I want ultimately two arguments. I want the name of the program at location0. And I want the name of the human at location1. So that's a total of two arguments. So if I have fewer than two arguments, let's tell the user with this print line, L if the length of sys.argv is say greater than 2, like they typed in too many words at the prompt, well, let's tell them, print, quote, unquote, "too" many arguments. Else if they did get it right, and they gave me exactly two arguments. Else, let's go ahead and print what I actually care about. 

All right, let me go down to my terminal window here and run Python of name.py and voila. Uh, oh, a completely different type of error. This one a syntax error, which we've seen in the past. Now, a syntax error recall is mea culpa, like, I messed up here. And I wrote invalid syntax. 

And so no amount of conditionals or exception handling's really going to catch this one. I need to go back and just get my program to work because it's not running at all. Well, let me go up here and see. Line four is the issue. And indeed, it looks like I have an unterminated string here. I need to go ahead and now add this double quote. 

So let me go ahead now. And with that red herring gone, let me rerun Python of name.py and hit Enter. And now, we see too few arguments. OK, maybe it wants my full name. Let me go ahead now and run Python of name.py, David Malan, typing in both words after the name of the file and hit Enter. And now, of course, it's too many arguments. 

Fine. Now, I'll oblige and do Python of name.py and just David. And there we have it. My name tag printed on the screen. So strictly speaking, we don't have to handle exceptions if we can be a little smarter about it and just check for the things that we're worried about, especially if we want to give the user more refined advice. 

We don't want to just tell them no, something went wrong or we don't want to pass. We want to tell them no, that's too few or no, that's too many. We have conditionals in our vocabulary already via which we can now express that. 

Well, let me pause here and see if there's any questions now on how we handled the error before with the index error or how now we're just proactively avoiding all index errors altogether by just checking first, is it too few? Is it too many? Or is it exactly what we want? 

AUDIENCE: Hi, yeah, thank you. So I was wondering, you touched upon using your full name. Is there a way going forwards that perhaps we have people that want their full names and want just their first name that we separate that into, oh, this person has full name. This person has just the one name? 

DAVID MALAN: Absolutely, and allow me to propose we come back to that support for multiple names. But indeed, we could do that. And I should note too, though, we can support full names right now if I do this. Instead of typing in David space Malan, which is problematic because again, by definition of how are argv works, each word ends up in a specific location in the list. 

But if I add quotes, single quotes or double quotes at the command line, now, Python will view this as two total things. The name of the file and this full name. And now, when I hit Enter, I don't see the quotes. The whole thing is passed in as my full name. And if I want to adapt this further for multiple people, we'll be able to do that as well. Other questions now on this version with if, elif, else, or on except before. 

AUDIENCE: Python. I want to ask you, can we use multiple else's statement? 

DAVID MALAN: Can you use multiple else's statements? No, else is the last catchall statement that you can have. You can have multiple elif statements in the middle but not multiple elses. 

AUDIENCE: [INAUDIBLE] 

DAVID MALAN: All right. All right, well, let's turn our attention back now to this code and see if we can't refine it a bit more by adding in some additional functionality that we get with modules like the sys module. One of the things I don't love about this version of the code even though arguably it is now correct is that the essence of my program, which is just to print out the name tag, is relegated to this else clause. And that's fine. 

Logically, it's correct, but generally speaking, there is something nice about keeping all of your error handling separate from the code that you really care about having all of these ifs, elifs, perhaps at the top of your code that are checking to make sure that all of the data's as expected. 

But then it would be nice if only for design sake not to hide in this else statement the actual code that you care about. I would prefer, for instance, to do something logically like this. I could check for errors up top. And then down here, print the name tag. 

It would be nice if those are distinct blocks of code all of which are here left aligned. But there's a problem with what I've just done here. Logically, what bug did I just introduce by getting rid of the else and introducing line 10 on its own with no indentation outside of the conditional? What bug have I just introduced? What mistake to be clear? 

AUDIENCE: Name error. 

DAVID MALAN: Ironically, it's a name error but not a name error exception. It's an error with my name, but I think you're frozen for me. It's going to raise an exception because even though I'm checking the length of sys.argv up top and even though I'm checking it again for being greater than 2, not just less than 2, but greater, I'm still then blindly and incorrectly assuming it's now going to exist. 

So just to be clear, if I run Python of name.py and I don't type any argument-- I've got too few-- I think I'm going to see that I have too few, but I'm also going to see that same exception. At the very top of my terminal window's output, there's my error message, too few arguments. But again, on line 10, I blindly proceed to still index into my list at location1 which does not exist. 

So it turns out there's a better way to handle errors like this, especially if you're writing a program in Python that's just meant to run briefly and then exit anyway. But maybe we could start to exit prematurely if the program itself just can't proceed. If the user has not given us the data we want, perhaps, we should just exit the program earlier than we might otherwise. 

So let me go ahead and do this. Let me go ahead and remove my comments so as to focus only on the code here. And let me propose that instead of just printing, quote, unquote, "too" few arguments, I'm going to use one other function that comes with the sys module. I'm going to go ahead and call sys.exit. 

And as the name suggests, it's going to do exactly that. With the system's help, it's going to exit my program then and there on line four. Why is that OK? Well, if you gave me too few arguments, I have nothing more to say to you, the user. I might as well exit a bit prematurely. And I can do this as well on line six. 

Let's go ahead and not just print that, but sys.exit, quote, unquote, "too" many arguments. Print out that message and just exit right there. Now, I can trust that by the time I get to line eight, every error condition has been checked for. And so it's safe for me to assume that there is in fact an item at location1 in sys.argv. 

So let me go ahead now and run this, Python of name.py, Enter, too few arguments. But I'm back at my prompt. Nothing more has happened. Let me run it again. Python of name.py David Malan with no quotes, Enter. Too many arguments is now printed here. Finally, Python of name.py just David, Enter. Hello, my name is David. 

So we have then in sys two forms of functionality. Now, we have access to this variable, sys.argv, this argument vector, that gives me all of the words that were typed at the prompt, including the program's own file name. And it turns out if we read further in the documentation, there's an exit function that can take different types of input. But if I pass out a string like this, it will indeed print that string for me and then exit from my program then and there. 

Questions now on exiting from programs like this. To be clear, all of this time once Python gets to the bottom of your file, it's going to exit anyway. So I'm using sys.exit now just to make sure that I exit earlier than otherwise. 

AUDIENCE: My question is about the sys that arg-- argv. So is that capable of accepting or taking multiple elements at once? Let's say, for example, Python name.py, David Malan. I'm a male, 20 years old. And if let's say I only want to access your name, which is at the first index. And then your age is, say, at the sixth index. Can I say sys.argv1 and another one for six to access what I just want? Is that both for sys.argv? 

DAVID MALAN: Short answer-- yes, I think if I understand your question correctly, whereby, you're proposing to have many words at the end of the command. And you want to access those individual words. Absolutely. At some point, it gets a little fragile, I would say, if you're typing so many words at the prompt that the order really matters. 

And so it turns out there's a lot of programs. And there's functionality in Python that can allow you to provide those values, like name or age or any number of other fields in any order you want, but a pass in a bit more information textually that tells the program how you want to use it. 

So in short, what you're describing is possible. And let me do a small incarnation of it as follows. Let me propose that we go back to my code here. And let's propose that we actually now want to support multiple values at the prompt. So there's going to be no such thing as too many arguments. Suppose that I want to generate name tags not just for David, but for David, for Carter, for Rongshin, for others in the group who all want their name tags as well. 

So I'm going to go ahead and do this. I'm going to get rid of my elif condition because I don't want to limit the maximum number of words that are typed at the prompt anymore. I instead want to iterate over every name at the prompt. So I'm going to say this. For arginsys.argv, go ahead and print out this time, arg. 

So what am I doing here? Well, even though the syntax is a little different, the idea's the same as before when we've had loop. I'm using a for loop to iterate over a list. The list in question here is sys.argv. Arg is a variable that I'm creating on the fly. The for loop is going to make sure that the first time through this loop, arg is set to the first word on the command line. 

The second time through the loop, Python's going to make sure that arg is now set to the second thing on the command line and so forth. That's just how a for loop works. It updates the variable for us. I don't have to call it arg. I could call it name so long as I change it to name in both places. But arg is reasonable if I'm iterating over arguments more generally. 

If I now run this program, though, unfortunately, there's a little bit of a bug. Even if I type in David and Carter and Rongshin, I'm not going to get just three name tags. In your mind, does anyone see the bug I'm about to trip over? It's not a huge deal if I've got enough name tags to go around. But I'm going to be wasting one because this is going to print not three, but four name tags, whereby, the first contains the name of the program itself. 

Maybe not a big deal. Maybe that's the sticker we don't bother handing out, but it's wasteful. And it does look wrong. So how could we get access to not all four elements of argv but just a slice of argv? And this is actually a technical term in Python and some other languages. To take a slice of a list means to take a subset of it maybe from the beginning, maybe the middle, maybe the end. But a slice is a subset of a data structure like a list. 

Well, how do I actually do this in code? Well, in Python, it's actually very easy to take a slice of a list that is a subset thereof. You can simply do this. At the end of the list name, sys.argv in this case, you can use square brackets. And then in those square brackets, you can specify the start and the end of the list that you want to retain. 

I want to start at element1, not zero. I want to start at element1, and I want to just go to the end. So I'm actually going to omit a second number altogether. It's not necessary to have a second number. But I do need that colon because this is going to give me a slice of the list. It's going to give me a slice of the list that starts at location1, not zero. And the colon and then a blank just means it's going to give me everything else. 

So this is in equivalently going to slice off the first element of the list and give me a new list that contains just those three human names, not the name of the file itself. Let me try running this again. I'm going to run Python of name.py, David Carter Rongshin. This time hopefully, I'm going to get three and only three name tags, hitting Enter. And indeed, I've done now just this. 

So again, using some relatively simple syntax in Python, we can use square brackets not just to go to specific elements like bracket0 or bracket1. We can also get subsets of the list, slices of the list by doing bracket something colon something where each of those some things is a number, the beginning or the end, and they're optional depending on whether you want all of them or just some. Any questions now on this version, which adds the loop and these slices with that new syntax? 

AUDIENCE: Can we slice starting from the end of the argument-- argument vector? 

DAVID MALAN: You can. You can slice something from the end of the argument vector. And this might blow one's mind a little bit. Let me go ahead and do this. Let's see. Let me go ahead and do negative one at the end. Using a negative number here and running the same command, we've just uninvited Rongshin from receiving a name tag here. So if you use a negative number, it has the effect of counting in the other direction from the end of the list. A good question there. Other questions now on slices, on looping over sys.argv? 

AUDIENCE: Hi, so I remember very early on when we were talking about only having two decimal places in float value. Is that in the same vein, like, because we use the code on 0.2F? Is that the same thing then? Why would the F be included then in the 0.2F as opposed to here when you just have the numbers? 

DAVID MALAN: A really good question. And it's just the short answer's that context matters. So there's only so many keys on our keyboard. And so we sometimes use the same symbols for different things. So what you're alluding to is the format code in an F string for actually formatting a number using a colon, using a period, using a number, using the letter F and so forth. And that is very specific to the F string feature of Python. 

This case has nothing to do with any of that syntax per se. This is just using a colon in a different context to solve this problem to implement a slice. The authors of Python could have chosen another symbol. But honestly looking down at my keyboard here, we don't have that many to choose from that are easy to type. So sometimes they have different meanings. A good question as well. 

Allow me to propose now, that we take things further and move away from using only those modules, those libraries that Python comes with to talk about more generally packages that exist. One of the reasons that Python is so popular and powerful these days is that there's a lot of third-party libraries out there as well, otherwise known as packages. 

Strictly speaking, Python itself has a term of art called a package, which is a module essentially that's implemented in a folder, not just a file but a folder. But more generally, a package is a third-party library that you, that I can install on our own Mac or PC or our cloud server and gain access to even more functionality that other people have implemented for us. 

Now, one of the locations you can get all of these packages is called the PYTI website, the Python Package Index which lives at this URL here. And this is a website that is searchable via the command line, as well as via the web, that allows you to download and install all sorts of packages. Even CS50 has some of its own packages in services like these. 

Now, there's a fun one out there that's a throwback to a command that's been around for years in command line environments called cowsay. Cowsay is a package in Python that allows you to have a cow say something on your screen. If curious to read up on it, its own documentation is on pi.py.org specifically at this URL here. 

But how do you actually get the package into your system? Well, technically, you could figure out how to download the file and maybe unzip it and put it into the right location on your Mac or PC. But nowadays, a lot of languages, Python among them, has what's called its own package manager. This one here called pip which is just one. 

So pip is a program that generally comes with Python itself, nowadays, that allows you to install packages onto your own Macs or PCs or cloud environment by just running a command. And then voila, you have access to a whole new library in Python that didn't come with Python itself. But now it's available on your system for you. 

Let's go back to VS Code here. And in my terminal window, I'm going to go ahead and type pip install cowsay. Now, what's going on here? Pip is the command, the package manager. And I want to install what package? The package called cowsay. I'm going to go ahead and hit Enter here. And after a little bit of output, it has successfully installed cowsay. 

Now, what does that mean? That means I can now go about importing this into my own code. Well, let's go ahead and see what this means. So let me go ahead and create a new file with code called say.py because I want something to be said on the screen. And in my new tab here, I'm going to go ahead and import cowsay, which presumably is now installed. 

I'm now going to import sys as well because I'd like to use some command line arguments in this program just so that I can run it quickly. And without using the input function, I can get the user's name immediately from the prompt. And let me go ahead and do this. I'm going to do a bit of error checking proactively this time. And rather than use less than or greater than, I'm this time going to say if the length of sys.argv does equal 2. 

So if the human is provided just the name of the program and their own first name, we're good to go. I'm going to do the following. I'm going to call a function called COW in the package called cowsay. And I'm going to pass in a string, hello, comma. And then as in the past, I'm going to pass in just one string because according to its documentation, it's not like print. I can't pass in comma this, comma that. 

I can only pass in one string. So I'm going to concatenate it the contents of sys.argv, bracket1. So long as then I type in my name David after the name of this program, it should end up in sys.argv1 in which case, this line five of code should concatenate hello with my name with a space in between. And apparently, a cow is going to say it. 

So let's see what happens here. Let me go ahead and clear my screen and increase the size of my terminal window. Let me go ahead and run Python of say.py and type my name David and Enter. There is the program called cowsay. 

It literally has a cow say something on the screen. And this is a throwback to a program from yesteryear that tended to come with a lot of systems. This is otherwise known as ASCII art. It's a textual way using just keys on your keyboard to print pictures of sorts on the screen. 

Now, we can really go down the rabbit hole here. And there's questionable academic value of doing so. So I'll do so just once. Turns out the cowsay package comes with other functions as well. One of those functions, for instance, is T-Rex. And if I now increase the size of my terminal window, we'll perhaps see where we're going with this. 

Let me now run again, Python of say.py. This time, let me not provide my name just to see if it's broken. It's still OK because we have that if condition if the length of sys.argv equals equals 2 and only if it equals equals 2, do we do anything. That's why we're not seeing anything here. 

Let me go ahead and cooperate now, say.py space David. And it's no longer a cow. But if I zoom out on my screen, a T-Rex. Why? Just because these are the things you can do once you know how to program. You can even package them up and make them freely available to others as open source software. For us, it's demonstrative of a feature more generally here namely being able to install these third-party packages and how you might do so in Python. 

Now, I'll leave this up on the screen for a moment and see if there's any questions about cows or Tyrannosaurus rex's or packages more generally. I'm really qualified to speak to just one of those. 

AUDIENCE: Hi, I've got two questions it's a bit earlier than what's supposed to be. So the first question is the packages that you're calling to use in the program, are they the same as, let's say, something Java the same as calling a class, a Java file in order to use its functions? 

And my second question is, what's the actual purpose of using command line arguments as you used because is not really the best way to, as you say, be user friendly where as in let's say the person who's using the program doesn't know what they want-- what the program's asking them? 

DAVID MALAN: Really good question. The first question about the comparison with Java, Python packages are similar to Java packages where you have something.something.something at the top of your program that gives you access to a class or something else. Python itself supports classes. More on those down the road. And you can do very similar things in Python as you can do with Java. But the analog really is Python packages to Java packages here. 

As for command line arguments, you ask a good question. Why do we use them, especially if they are literally user friendly? They're a little less user friendly to people who aren't in this Zoom to be honest. You and I as we learn more and more about programming and more about command line arguments, I daresay we'll become more comfortable with and tend to prefer the ability to customize commands using these command line arguments. Why? Productivity. It tends to make you faster because you get into the habit of knowing exactly how you can configure your software without having to manually answer questions. 

And case in point. All of this time have we been running Python of something.py. You could imagine not doing that. You can imagine typing only Python, hitting Enter. And then you're prompted for the name of the file you want to run. So you type in something.py, and then it runs. 

Not a big deal, but I would argue that over time, you're going to get a little tired of that TDM. And you would much prefer to just automate the command again and again and again, especially with little conveniences like being able to hit up and down in your keyboard history so as to rerun those same command. Automation is big too if you emerge from a class like this and start using Python to automate processes at work or for personal projects or the like, the ability to specify all of your inputs on the one line just means you can get work done more quickly. So hands down, absolutely. 

Using command line arguments is a more arcane feature of systems that most of us are no longer as familiar with because of Windows and Mac OS and other operating systems that have buttons and GUIs and menus. But the more comfortable you get with programming, I daresay the more you will tend to prefer these capabilities because they allow you to do things more quickly. 

With that said, allow me to propose that we take a turn toward, yet, another package that's particularly popular and just as easy to install all toward an end of using APIs. Now, APIs are not something that's Python-specific. More generally, an API is an application programming interface. And it can refer to Python files and functions. But often, APIs really refer to third-party services that you and I can write code that talk to. 

Many APIs, but not all, live on the internet these days so that so long as you have a browser or so long as you have some experience with Python programming or programming in any language, you can write code that in effect pretends to be a browser, connects to that third-party API on a server, and download some data that you can then incorporate into your own program. 

Now, how do you do this? Well, Python has a very popular package that you can install via pip called requests. The requests library allows you to make web request, internet request using Python code essentially as though you were a browser yourself. You can automate, therefore, the retrieval of URLs that start with HTTP or HTTPS. 

The documentation for this library is that a URL like this, but it too can be installed at the command line. And even though it's third party, it's one of the most popular and commonly used packages out there in Python. And this too is one of the reasons again that Python is so popular. There's just so many solutions to problems that you and I have or are invariably going to have when we write projects of our own. There's just a really vibrant ecosystem, a really vibrant community of open source software that's that easy for us to install. 

Let me go back to my terminal window now and run pip install requests in order to install this package on my own system. And after some lines of output, I'll see that it's successfully installed. Now, let's go ahead and create a new file here. For instance, itunes.py. It turns out that Apple has its own API for their iTunes service. The software that provides you with the ability to download and search for music and songs and other information as well. 

And it turns out that-- let me go back over to my computer here and open up a browser like Chrome. And let me go ahead and visit this URL here, https://itunes.apple.com/ search?entity=song&limit=1&term=weezer. Search?entity=song& limit=1&term=weezer. 

Now, I constructed this URL manually by reading the documentation for Apple's API-- application programming interface for iTune. And what they told me is that if I want to search for information about songs in their database, I should specify entity equals song so that songs and not albums or artists or something like that. If I just want to get back information on one song, I'm going to provide limit equals 1. And if the band I want to search for, the artist is Weezer, I should specify term equals Weezer. 

So with this, if I go ahead and hit Enter and visit this URL, I actually end up with a text file in my Downloads folder on my Mac. If I go ahead and open that text file that my browser just downloaded, we'll see all of this text here, which at first glance might look a bit cryptic, but it actually follows a pattern. 

Notice this curly brace at the start and notice this closed curly brace at the end. Notice this open square bracket here and notice this closed square bracket here. And in between those pieces of syntax are a whole bunch of strings and values. In fact, a whole bunch of key value pairs. What we're looking at here is a standard text format known as JSON-- JavaScript Object Notation, which yes, is technically related to yet, another programming language called JavaScript. But JSON itself is typically used nowadays as a language agnostic format for exchanging data between computers. 

By language agnostic, I mean you don't have to use JavaScript. You can use Python or any other language to read JSON or write it as well. And it's a completely text-based format, which means that if I visit that URL with my browser, what gets downloaded is just a bunch of text. 

But that text is formatted in a standard way using curly braces and square bracket using quotes and some colons that ultimately contains all of the information in Apple's database on Weezer's song, at least, the first one because I limited it to one in their database. And that's an API, an application programming interface. A mechanism whereby I can access data on someone else's server and somehow integrate it into my own program. 

Now, of course, my browser, Chrome, is not something I wrote. I should actually write some Python code that perhaps pretends to be a browser to grab this same data. So let's do that. Let me go back to VS Code here. And let me write a program with code, itunes.py. And we're going to write some code via which I can then use the iTunes API and in turn, Python to get information about any band that I might want. 

I'm going to go here and import first the requests library, which I installed earlier in order to make those HTTP requests. I'm going to go ahead and import the sys library via which I'll have the ability to use command line arguments like specification of the band that I want to search for if not Weezer. And then down here, I'm going to go ahead and insert some error checking to say if the length of sys.argv does not equal to-- so if the user does not provide me with the name of the file they want to run and the name of a band, and that's it, you know what. Let's just go ahead and exit for now. 

I could provide a more explanatory message. But for now, I'm going to keep things simple and just exit the program prematurely so that I can trust hereafter that sys.argv has what I want. And now, I have the opportunity to use the requests library to write some Python code that effectively is pretending to be a web browser so as to connect to that same HTTPS URL on Apple's own server. 

So now that I've guaranteed that the user has typed in not just the name of the file, but also the name of a band at the prompt giving me a length of two for sys.argv, let's go ahead and execute request stockget, which is a function inside of the request package that will literally get some response from a server. And the URL that I want to get is the exactly the same as before. https://itunes.apple.com/ search?entity=song& limit=1& term=previouslyweezer. 

But let's make this program a little interactive and actually allow the human to specify at the command line what artists they'd like to search for. So I'm going to go ahead and close my quote early and just append using the concatenation operator as in the past, sys.argv bracket1. 

And now, it actually be nice to store the response from the server in a variable. So I'm going to go ahead and say response equals and to store all of the response that comes back from the server in a variable called response. Down here now, I'd like to just understand what the server's returning to me to make sure I know how next to proceed. 

So this isn't going to be very pretty yet. But I'm going to go and print out response.json, which ensures that the data I'm getting back is formatted on my screen as exactly that, JSON, the same text format as we saw on my screen. It's not a useful program yet. I'm really just learning along the way. But let me go ahead now and increase the size of my terminal window and run Python of itunes.py and type in the name of a band like Weezer and hit Enter. 

And what we see on the screen formatted almost the same as before is exactly that same text. But what you'll see here is that this has been standardized now as a Python dictionary. What indeed Apple's returning is technically a JSON response, JavaScript Object Notation. But Python, the request library is converting it to a Python dictionary which happens to use wonderfully coincidentally, almost the same syntax. 

It uses curly braces to represent the dictionary here and a close curly brace to represent the end of it here. For any lists therein, it uses a square bracket here and a closed square bracket down here. It uses quotes-- single quotes in this case or equivalently double quotes to represent the keys in that dictionary. And after a colon, it stores the value of that key. 

And so you'll see that indeed we have a result count key whose value is 1, but then a more interesting Result key called results whose value is this entire list of data. Now, honestly, this is such a big blob of text that it's going to take me forever to wrap my mind around what I'm seeing. So let me propose temporarily we use another library in Python that will allow me to format my data a little more cleanly. 

It turns out that Python also comes with a special library called JSON that allows you to manipulate JSON data and even just printy print it that is formatted in a way that's going to be way easier for you and I to understand. So let me go back to my code here. Let me shrink my terminal window. And let me propose that just temporarily again we do this. 

Let me import this additional library, JSON, which comes with Python. So I don't need to install it manually with pip. And let me go ahead now and not just print out response.json which was that big blob of hard-to-understand text. Let me go ahead and use one other function here called json.dumps for dump string and pass to that function that response.json return value. 

So again, I'm just introducing another function who I claim has a purpose in life of pretty printing, nicely formatting on the screen the exact same information. And I know this from the documentation having done this before. But I'd like things to be nicely indented. And according to the documentation, if I pass in a named parameter of indent equals 2, that's going to indent everything at least two spaces. I could do four or something else. But it's going to be enough to help me wrap my mind around what the data is I'm getting back. Because again, I'm just learning along with you. 

So let me increase the size of my terminal window again. Let me run Python of itunes.py. And again, let's search for Weezer and hit Enter. And now, notice it's still a little bit cryptic because there's a lot going on here. But my gosh, I can totally read this more easily now. 

Notice now that I still see the first curly brace, which means hey, this is a dictionary in Python. A collection of keys and values. The first key is called result count. It happens to be displayed in double quotes now. But that's just an issue of formatting. It could be double or single so long as we're consistent. 

The value of that key is one. Why? Well, I told the URL to only limit the responses to one Weezer song so I've gotten a result set of one. If I increase that limit, I could probably get more. Then the interesting part of this response is really the data itself. Notice in the results key here, there's a really big value. The value is a Python list as implied by this square bracket. 

What does this list contain? Well, I know from skimming it earlier that this contains one dictionary. And that's why we see another curly brace here. So again, if this gets a little more complicated, keep in mind that a dictionary is just a collection of key value pairs. And Python uses curly braces to indicate as much. 

It is perfectly reasonable for a dictionary to be inside of another dictionary if the value of some key itself is another dictionary. So this is a common paradigm. And even though it might seem a bit cryptic, it's just something that allows us to associate more keys with more value. 

Now, most of this information, I probably don't care about. For instance, according to Apple, the unique identifier for Weezer is apparently 115,234. That might be useful if I'm making my own database and I want this to be searchable. But for today's purposes, all I care about is the name of the track, otherwise called track name as key. 

And the first song and only song because we limited it to one that we got back from iTunes here is the song that you might know by Weezer called Say It Ain't So. So now, I have a bit of a clue if my goal here is to implement a program called itunes.py that doesn't just dump the response from the server, which is admittedly very cryptic-- but to print out all of the songs that iTunes has for the band called Weezer, maybe I can iterate over this somehow. 

So let me backtrack. Here's the key call track name. It is inside of a dictionary that is the value of results here. So how can I go about getting this? Well, let me go ahead and try this. Let me go ahead and shrink my terminal window back down and let me propose now for one final flourish. We don't just lazily print out the contents of that response because that's not interesting or pretty for anyone. 

Let's do this. Let me go ahead and create a new variable just for the sake of discussion called O for object. And I'm going to go ahead and call o equals response.json just to store that JSON response specifically in a variable called o, but I could name it anything I want. And now, I'm going to do this. For each result in that object's key called results, go ahead and print out that result's track name. 

And notice I have used exactly the same capitalization. Track name has a capital N. Result is all lowercase. And let me rewind before we run the actual program. In line eight, we are making an HTTP request using Python to the server just like you and I as humans type URLs into a browser and hit Enter. This is the Python equivalent thereof. 

I am then on line 10 just grabbing from that variable that contains the server's response, the JSON object that I care about. The thing between those curly braces at the very top and the bottom. But because we've poked around and because I read the documentation earlier, I know that that object has a key called results. And that results key again is a list. 

Now, at the moment, that list contains only one song, Say It Ain't So, because I limited my response to one. But even so, my loop will work. It's just going to iterate once. And each time through that loop, it's going to print the current result's track name. 

If I want to make this even more interesting, let me change this limit now from 1 to 50 so I'll at least get back 50 track names instead. Let me go ahead now and increase the size of my terminal once more and go ahead now and run Python of itunes.py searching again for a band like Weezer. And here we go. And voila, there are 50 songs that iTunes has for Weezer. 

And if we scroll back up to the top here, we'll see that the very first one there is, indeed, Say It Ain't So. But now, we got Undone-- The Sweater Song, Buddy Holly. Apparently another rendition of Say It Ain't So perhaps from another album, another Buddy Holly undone, my name is Jonas, and so forth. Questions now on this program which integrates Python with a real world third party API? 

AUDIENCE: Yeah, hi. Can we use break instead of system.exit? 

DAVID MALAN: Good question, but no. Break again is used to break out of things like loops like we saw earlier. Sys.exit is used to break out of the whole program itself. Use break for loops for now and use sys.exit to terminate the whole program. Good question. Other questions now on this program are others? 

AUDIENCE: From where we bring the name of the key results? 

DAVID MALAN: From where do we get the name of the key? 

AUDIENCE: Results itself. Yeah, and can we change the results, the name? 

DAVID MALAN: You cannot. So we could in our program. So the keys that come back in that JSON response, to be clear, come from iTunes.Apple.com. Some team of engineers decided for us what all of those keys would be called, including track name, results, result count, and everything else. 

You and I can absolutely store those same values in variables just like I'm doing here with O, just like I'm doing here with result. You can rename those keys anything you want using Python variables. But the JSON response is coming from that third party server. Other questions. 

AUDIENCE: Yes, sir. So I have a question related to cowsay package. So like, yes. So sir, what sort of ASCII graphics is it capable of putting? 

DAVID MALAN: The cowsay package. I would refer you to the URL in the slides earlier if only because it's more thorough. They have not just cows, but Tyrannosaurus rex's and several other animals as well. I should emphasize that this is not a package I suspect you will use much in the real world. It's really just meant to be representative of the types of packages you can install. But allow me to refer to the documentation for what more is there. But ASCII art is all we had before there were emojis, let alone GIFs and JPEGs and pings. But it's what's is immortalized in cowsay. 

Well, allow me to transition us back now to one final capability of Python which is that you yourselves have the ability to make your own libraries. Up until now, we've been writing all of our functions in our one file, Hello py and everything since. And now that we've introduced modules in Python, random and statistics, we can import those that come with Python. But that's other people's code as well. 

And we've now used pip, this package manager to install third-party packages as well in the system and using other people's code still. But to come full circle, what if you yourself find yourself implementing the same kinds of functions again and again, or you find yourself opening up old programs, copying and pasting code you wrote into new programs because you have the same problem yet again? 

A good practice would be to somehow bundle up that code you keep reusing and make your own Python module or package. You can keep it local on your own Mac or PC or cloud server. Or you can go through the steps of actually bundling it up, making it free and open source, and putting it on something like py, pi for others to use as well? 

OK, I'm going to go ahead and run code of sayings.py to create a brand new file called sayings.py which is going to be my own sayings module. I'm going to define a couple of simple functions in there. I'm going to define a Hello function that's going to take a name parameter as input. And that function is simply going to print out an F string that contains hello, comma, and then in curly braces, whatever that person's name actually is. 

Then I'm going to go ahead and define one other function, a goodbye function, that has def, goodbye, also takes a name as its input. And then that prints out by contrast and F string that says goodbye, comma, and then in curly braces, name. And now, just for good measure just so I can be sure that these functions are working as expected, I'm going to go ahead and define a main function in here too just for the purposes of testing. 

And I'm going to go ahead and define a main function that simply does a couple of tests. For instance, it calls Hello of, quote, unquote, "world" shall we say? And then it's going to call good bye of, quote, unquote, "world" as well. And hopefully what I'll see on the screen then is Hello world and Goodbye world when I run this program. Of course, as always, I need to explicitly tell Python to call that function. So I'm going to call main at the very bottom of this file. 

All right, let's try it out. Python of sayings.py, Enter. And indeed, I see Hello world and Goodbye world. And so I think it's reasonable for me to assume that these functions, albeit simple, are pretty correct at this point. But now, suppose that I want to use these functions as though I've indeed created my own library, my own Python module and that makes available a Hello function for me or anyone else who wants to use it or a Goodbye function as well. 

Well, let me go ahead and open up again say.py but start fresh. And rather than have the cow say anything, let me go ahead and have my own library do the talking. So I'm going to go ahead and as before, import sys so that I have access to command line arguments. And from my own module called sayings, I'm going to import Hello. 

So because I created a file called sayings.py, I can say from sayings. And it's inferred by Python that I mean sayings.py, at least in this current directory. But I specifically ain't going to import just one of the functions for now, namely Hello. 

And now, I can do something like this. If the user obliges by giving me two command line arguments, which I can check by just checking the length of sys.argv, I'm going to then go ahead and call this new Hello function passing as its input, sys.argvbracket1, which should hopefully be the person's name which I'm going to expect them to type at the prompt. 

So here we go. I'm going to go down to my terminal window, run Python of say.py and my own name because I want my own name to end up in the command line arguments and therefore, be part of the Hello so when I hit Enter in just a moment, I should hopefully see Hello, comma, David. 

So here we go, Enter. And huh, I see Hello world, Goodbye world. And then I see Hello, David. So why is this happening? Well, it turns out even though I've done everything according to our own past practice, it's not really the right way to go about calling main after all. If I'm blindly calling main here at the bottom of my file, that means whenever this file is loaded by Python, main is going to get called. 

And unfortunately, that's true even if I'm importing this file or just a function from this file as I am here in my say.py program. This is to say on line three here, when I say from sayings, import Hello, this effectively tells Python to go find that module, sayings.py, read it from top to bottom, left to right, and then import specifically the Hello function. 

Unfortunately by the time Python has read the file from top to bottom, left to right, that last line of code recall is to call main. Main gets called no matter what. So really, the right way to go about using a main function, which does solve that problem of ensuring that we can order our functions however we want, and all the functions will be defined at the time they're invoked, I shouldn't be unconditionally calling main at the bottom of this or really any of my programs. 

I should instead use this technique. I should say if__name__=="__main__", then and only then should you actually call main. Well, it turns out that this variable is a special symbol in Python, __name__. And notice that VS Code because of its font isn't quite showing those two underscores. But they're indeed there to the left and the right. 

This is a special variable whose value is automatically set by Python to be, quote, unquote, "main" when you run a file from the command line as by running Python of sayings.py. So watch what happens now with this additional conditional in sayings.py. If I run Python of sayings.py, it still works as before because name will be automatically set to __main__ when I run this file using Python of sayings.py. 

But notice this. Name is not going to be set to, quote, unquote, "main." It's going to be set to something else, technically the name of the module when I instead import the file like I do here. So this highlighted line of code even though it will cause Python to go find sayings.py, read it from top to bottom, left to right, it's going to ignore the call to main this time because it's wrapped in that conditional. 

In this case, when I'm importing a file and not running it directly at the command line, main will not get called by definition of that names value. So let me go ahead and try this. Instead of running Python of sayings.py, which is the module, which contains that conditional main, let me go ahead here, run Python of say.py, which is the program here before me that imports Hello from sayings. But because of that conditional, it's not going to say Hello to anyone else except me in this case. 

All right, we're here at the end of our week. It's only appropriate, I think, to import something other than Hello. Why don't I go ahead and import not Hello, but Goodbye from here. Let me go ahead and call Goodbye instead of Hello. And this time when I run Python of say.py, I'm not going to type my own name. Allow me if I may to type in the whole world so that our final sentiment today is Goodbye world. Indeed, that's it for this week. We will see you next time. 

# lecture5-Unit tests

DAVID MALAN: This is CS50's Introduction to Programming with Python. My name is David Malan. And this is our week on unit tests. Up until now, we've been writing a lot of code, and you might have been testing your code by running your program, and passing in some sample inputs, and running it again, and passing in some sample inputs, or you might have been waiting for us to test your code instead. 

But it's actually much better practice to get into the habit sooner rather than later of testing your own code using code of your own. In fact, whether you're writing a personal project or working in industry, it's very common nowadays to not only write code to solve the problems that you want to solve, but also to write a little extra code to test the code that you wrote. And that's what we're going to focus on today, writing our own test so as to be all the more confident, all the more certain, that the problems we have been trying to solve are, in fact, solved correctly. 

So let's rewind a few weeks now to a program we wrote a while back, namely to calculate numbers. And specifically, we left off with this calculator on trying to compute the power of a number, like x squared or where x might be two or three or some other number as well. Let me go ahead and resurrect that file by going into my terminal window here and running again code of calculator.py. 

And let me go ahead and pick up where we left off way back when by defining a main function here. And then in my main function, I did something like this. I said, x equals int of input. And I ask the user, what's x, question mark? And then I immediately went ahead and printed out something like, x squared is, and then I passed in as a second argument to print the result of calling a function called square passing in that value, x. 

Now of course, I haven't yet implemented the square function. So let's define that as well. Let me go down a couple of lines and define square. And it takes an argument recall, a parameter that at the time I called n, for number, so I'll do that again, though I could technically choose any name for this variable. And I recall, did this. I returned n times n. 

And there were multiple ways to do this. Squaring a number is multiplying it by itself. So I could also use other syntax here, but this is what we ultimately settled on, and then recall that I ultimately called main in order to kick off the process of running this program. So just as a test manually, let me go ahead and run Python of calculator.py and hit Enter. 

What's x? Let's start with 2. x squared is 4. I think that's correct. So let's run it again, just for good measure. Python of calculator.py, let's type in 3 for x this time. X squared is 9. And I think that's correct. And I might be feeling pretty good at this point, and I go off and submit my code to a course, or I post it on the internet for others to use. 

But I haven't really methodically tested this code. And it's not necessarily the case that it works entirely. In fact, I haven't really considered a number of corner cases. I went with some pretty obvious numbers like 2 and 3, but what about 0? What about negative numbers? What about any number of other infinite numbers? We're not going to test an infinite number of inputs to this, because the program would never halt, but we should test some representative inputs ultimately. 

But before we do that, let's get into the habit of making sure that main isn't always called. Let's adopt this habit, again, of doing If__name__=="__main__", only then should we execute main. And I'm doing this now proactively, because I want to make sure that when I import my square function, perhaps from another library, from another file, treating it as though it's a library, I want to make sure that main is not just automatically called itself. 

Now what do I want to do from here now that I've modified this program as follows? Let's go ahead and write a completely different program whose sole purpose in life is to now test this program. So I've got my actual calculator and calculator.py. I've readied myself to call main conditionally so that I can safely import one or more things from this file in another file. 

What should that other file be? By convention, I'm going to create a file that's called test_, and then because the thing I'm testing is this calculator itself, let's call this file test_calculator.py. That's going to give me a new tab, in which I can write a brand new program whose purpose in life is now specifically to test that program, but really that program's specific functionality. Built into that program is the square function. Let's focus on testing that function. 

So how do I access that function in this program? Recall that I can import a function from another file as though it's a library of my own, a so-called module. So I'm going to do this. From calculator, import square. I could go ahead and just import square itself. But then I would have to prefix my use of square recall by saying calculator dot everywhere, and it's just a little cleaner to just import the one function. 

And now let me go ahead and do this. Let me go ahead and define a function called test square. This too is a convention. If you want to test a function called square, your function for testing should be called test_square. Or alternatively, you could do square_test, I'll adopt this convention here. 

Now what kind of tests can we do? I don't dislike the tests I ran earlier, testing x equals 2 and x equals 3. But every time I want to test my program previously, I would have to do that manually. And that's going to get tedious. It's not going to be easy for someone else to test it. And if I'm actually working in the real world, it would be nice if I could automatically have my program tested again and again by having some automated process run my own code. So let's do that and take the human ultimately out of the equation. 

So how might I go about testing the square function that I've now imported per line one? In my test square function, why don't I do this? If the result of calling square of 2 does not equal 4, why don't we go ahead and print an error message, because I know that in the real world, 2 squared should equal 4, so if square of 2 does not equal 4, there's a bug in my program. There's a bug in my function. I've made a mistake. 

So let me go ahead and print something like that so I or someone else knows 2 squared was not 4, for instance. So I could print out anything here. What should I maybe next test? Let's do more than one test. Let's say if the square of 3 does not equal 3 squared 9, then let's go ahead and print out that 3 squared was not 9. 

So I haven't done any more testing than I did earlier. But I've baked those two tests, x equals 2 and x equals 3, into my own code here, so I can now run those tests automatically, if you will. Now, it's not enough to just define a function called test square. I actually, if I want to run this function, need to call it somehow. And our convention for doing that is the same as always. 

In this file too, let me define main. And main's sole purpose in life is going to be to test square. And now at the bottom of this file, as before, let me go ahead and adopt my convention of if__name__=="__main__", then go ahead and call main. 

So a lot of this is just boilerplate. We've seen this before, defining a main function and calling a function to kick off some process, now adding the conditional at the bottom of the file to make sure I'm only conditionally calling main, just in case I import anything from this file elsewhere. So let's see. Let's go ahead and test my code now. Let me go ahead and run test_calculator Python and hit Enter, and nothing outputs. Nothing outputs. 

But I think it's OK. I think no output is good, because look at my test square function. I'm not printing anything if all seems well. So let's demonstrate as much by going back to my calculator, and let me break it. Let me introduce a bug. Maybe I didn't even get it right the first time. Maybe my code originally looked like this. I wasn't thinking. I forgot my squares. And so I thought that the square of a number is n plus n, instead of n times n, so a reasonable mistake to make, perhaps arithmetically. 

Let me now go back to my test calculator, which I'm not going to change, but I am going to rerun it, python of test_calculator.py. I'm going to cross my fingers here, but for naught, I'm going to see immediately that 3 squared was not 9. Now what is it? Let's see, when your tests fail, how can we put our finger on what's wrong? It's a little interesting that I completely broke my square function, and yet only one of these tests is failing. 

It looks like this test, lines 9 and 10, is fine, because I'm not seeing that output. But of course these two lines, this test, is failing, because 3 squared is not 9 when I'm using plus. So just to be clear here, why is my function only partially broken, just to be clear. Why am I seeing only I error instead of two, even though the square function is now mathematically broken? 

SPEAKER 1: Because 2 plus 2 is 4. 

DAVID MALAN: Yeah, it's as simple as that. I just got lucky that 2 plus 2 is the same thing as 2 times 2. So this is one of those corner cases, and this is why it's good to be in the habit of not just testing one thing, but test several and make sure you're covering your bases, so to speak. 

So I got lucky here. And that explains why I'm seeing only I error, even though the function itself is flawed, but let me propose that there's another way we could do this, because honestly, if I extrapolate from this simple example, running not just two tests but 3, or 4, or 10, or 20 tests, you can imagine that, my God, the code is going to get so much more complicated than the function itself. 

Already, look, in calculator.py, the function in question is two lines long. And yet in test_calculator, the code in question is five lines long. I've written more code to test my code than I actually wrote original code. So the fewer lines of code we can write when testing code, I think the more likely you and I are to do it, because it's going to be literally a little less work and just fewer opportunities for mistakes. 

So what's another approach I can take here? it turns out in Python, there is another keyword that we haven't yet used, which is this here, assert. Assert is a keyword in Python and some other languages as well that allow you to do exactly that, as in English, to assert that something is true, to sort of boldly claim that something is true. And if it is, nothing's going to happen. No errors are going to appear on the screen. 

But if you assert something in Python, and it is not true, that is, the thing you're insert asserting, a Boolean expression, is false, you're actually going to see some kind of error on the screen. So let's go ahead and try this new keyword as follows. Let me go back to my code here. And just to make it a little simpler, let me propose that I use this new keyword as follows. 

Let me simply assert that the square of 2 should equal 4. So I've changed my logic. Instead of checking for not equals, I'm now asserting very loudly that it should equal 4. And then on one additional line, let me do the other test, assert that the square of 3 equals equals 9. And that's it, no indented print. I'm just going to assert more simply these two things that I want to be true. 

Let me go ahead now, with calculator.py still broken. I'm still using plus accidentally, instead of multiplication. Let me go ahead now and run Python of test calculator.py, crossing my fingers as always, but it's not going to go well this time. A whole lot of errors seem to appear on the screen. And if I scroll up here for this traceback, we'll see that the thing that failed was this line here, assert square(3) == 9. 

Now unfortunately, when you're using the assert keyword, it's not terribly user friendly. It shows you the files and the line numbers involved, but it does show you the specific line of code that failed, the assertion that failed, so to speak. It's now kind of up to you and me to infer from this, wait a minute, why is the square root 3 not equal to 9? So it's not super user friendly, but honestly, it was half as much code for me to write. It's just two lines, instead of those previous four. 

But notice this little remnant down here. This was an assertion error. And we have seen errors before. We've seen errors before when we've made other mistakes in our code. And in the past, what was our solution for catching those errors? How do we catch errors that seem to resemble this, even though we've not seen this one before? 

SPEAKER 2: Try and except. 

DAVID MALAN: Yeah, in Python, we can use the try and except keywords to try to do something, optimistically, except if something goes wrong, do something else instead. So this is a step forward, in that I can at least catch this error. But it's going to be perhaps a step backward, in that I'm going to end up writing, I'll admit in advance, a little more code instead. 

So let me go ahead and try this. Let me go back into my code here. And instead of just asserting, blindly, let me go ahead, as Tola proposed, and try to do this first assertion, except if there is an assertion error, like we saw a moment ago, then go ahead and print out something more user friendly that explains what actually failed. 2 squared was not 4. And let me go ahead similarly and try to assert that the square of 3 equals 9, except if there's an assertion error there, in which case, I'm going to print out, more user friendly, 3 squared was not 9. 

So I've taken a step forward, but also a step back, because now I have more code. But I have at least introduced assertions and exceptions in a manner consistent with how we've seen in the past. When something goes wrong, you actually see an exception raised. Let me go ahead and run this version of the program now instead. Python of test calculator.py, crossing my fingers, it's still failed, because I'm seeing output. But we're back to at least user friendly output. 

So that's at least progress in some way here. But it's, again, more code than might have been ideal. And in fact, if we continue this further, what if we actually want to add additional test cases here as well? It seems like we might end up writing way more code than would be ideal. For instance, I'm testing 2 and 3 now. I should probably test some negative numbers as well. 

So why don't I go ahead and add in, for instance-- let me go ahead and copy and paste this. Let me try to assert that the square root of negative 2 equals equals 4, which should be the case mathematically. And if not, let me go ahead and change this to say negative 2 squared was not 4. And let me go ahead and copy paste this again, test another negative number, just for good measure. Let's test the square root of negative 3, which should equal 9. But if it doesn't, let's go ahead and say that negative 3 squared was not 9. 

And just to think aloud here, what might be another good value to test? I've tried 2. I've tried 3. I've tried negative 2. I've tried negative 3. I can't try infinite numbers. But there's at least something that's a little different in between those values. Let's try 0. 0 is an interesting case too, just in case something might be wrong. And why 0? I'm just going with instincts here. 

Odds are positive numbers are generally going to behave the same. Negative numbers might generally behave the same. 0 might be a little anomalous. There's no science to it necessarily, but rather considering for yourself based on your own experience, what are the potential corner cases based on the function you're trying to test? I'm trying to test something mathematical, so I want to test representative values. 

So let me go ahead and paste in one more try except block. Let's assert that the square of 0 should equal 0. And if not, I'll say something explanatory, like 0 squared was not 0. Now if I go ahead and run this, Python of test_calculator.py, and hit Enter, now I see multiple errors. And this is interesting. It's a bit of a clue, because notice that some, but not all, of these assertions are failing. 

The 1 for 2 squared is apparently OK, as we noted earlier. Recall that 2 squared happens to be 2 plus 2. So that bug doesn't really throw off our test, but it's a good thing we tested for 3. It's a good thing we tested for negative 2 and negative 3, because all of those tests caught this error. The 0 test did not notice, because 0 squared is, of course, 0, but 0 plus 0 is 0. So we're getting lucky or unlucky there, depending on how you view the glass as half full or half empty here. We at least by way of having multiple tests caught this mistake somehow. 

So it would be nice, though, if we weren't writing so much darn code here, because notice what I've done. I have try, except, try, except. I have all of these assertions. I have a main function. I have this if conditional at the bottom of my file. Honestly, who's going to want to write 31 lines of code now just to test a two line function? No one's going to write test code like this if we're all writing so much more code to do the actual testing. 

So people have solved this problem. If you are in the habit of testing your code a lot, or wanting to, if I'm in the habit of wanting to test my code a lot, if everyone else in the real world is in this habit of wanting to test their code, why don't we create tools that make it a little easier to do so? And in fact, there is a mechanism for doing this, whereby we can use a tool that's popularly called pytest. 

So pytest is a third party program that you can download and install that will automate the testing of your code, so long as you write the tests. But what's nice about this library and others like it is that it adopts some conventions so that you don't have to write as many lines of code yourself manually. They do some of that automatically for you. 

Now this is a third party library. There's other libraries for unit tests, so to speak, that is testing units of your code. Some of them come with Python itself. We're proposing that we look at pytest today because it's actually a little simpler than the unit testing frameworks that come with Python itself. And what do we mean by unit testing? Unit testing is just a formal way of describing testing individual units of your program. What are those individual units? They're typically functions. So unit tests are typically tests for functions that you have written. 

Now what does this mean in practice here. Let me go back to my VS code here and let me propose that we simplify my test calculator significantly. I'm going to go ahead and delete all of these tests, which were accumulating to like 31 lines of code. And let's see if we can distill the tests to their essence, using pytest. 

From my same calculator program, let me still import square. So I do still need that line of code so that I can test that's specific function. Now I'm going to go ahead and define a function, just like I did before, as follows. I'm going to define a function called test square, again by convention, test underscore and the name of the function you want to test, though it doesn't have to be that way. And now I'm going to go ahead and make a few assertions. 

I'm going to assert that the square of 2 should equal 4. I'm going to assert that the square of 3 should equal 9. I'm going to assert that the square of negative 2 should equal 4. And I'm going to assert that the square of negative 3 should equal 9. And lastly for now I'm going to assert that the square of 0 should equal 0. 

So I'm still using the assert keyword, as I introduced earlier. And even though it was a little tedious to type those, it's only eight lines of code now. And they're so easy to type. It's not try and except and all of this. Wouldn't it be nice if something else, someone else, handled the try, the except, the printing, all of the standardization of actually running these tests? And that's where, indeed, pytest comes into play. 

Per the documentation for pytest, which can itself be installed with pip install pytest, which we've used to install other libraries in the past, you can look at the documentation here for all of its formal usage. But fortunately, pytest is pretty user friendly, as testing frameworks go, and it actually allows us to dive right in by just running pytest on the code that we've written. 

So if I go back to VS Code here and look at my test_calculator.py, which, notice, has no main function anymore-- it has no conditional. It has no tries. It has no excepts. It has no prints. It just has my few assertions-- pytest and other libraries like it are going to automate the process of running these tests for me and informing me on the screen whether or not any of those tests failed. 

So let me go ahead and do this. I'm going to go ahead and increase the size of my terminal window for a moment, just so we can see more on the screen. And I'm going to run not python, as I've been doing. I'm going to run pytest, which, again, is this third party tool for running tests in your code. I'm going to run pytest of test_calculator, so that same file. I'm going to cross my fingers as always and hit Enter, and we'll see that something has failed. 

Now admittedly, even though I do think you'll find that pytest is relatively simple to use, it's output, at least at first glance, is not necessarily super user friendly. So what are we seeing here? Notice at the very top of my window is the command that I ran after my prompt. Right below that is a single F in red, which means fail, so not very encouraging. I tried really hard here, but fail is my grade on this program. 

But let's see exactly what happened. If I look at this excerpt here under failures, you'll see that test square is the function that failed. That makes sense, because that's the only one I wrote. And you'll see here somewhat arcane output describing what the error was. So what you're seeing here is the first line of output equals equals 4, which is fine. There's no red error message below that, so that one's OK. 

But this line of code here assert that square of 3 equals equals 9, pytest did not like that assertion, because it didn't end up being true. In fact, per the red E at the start of this line, you'll see that I'm effectively trying to assert that 6 equals equals 9. Now, where did the 6 come from? Wait a minute, if my test involves this, notice that where 6 equals square of 3, this is saying that because I've called square, passing in a value of 3, it turns out it's return value is 6. And of course, mathematically, 6 does not equal equal 9. So that's why this is failing. 

Now, pytest is not as user friendly as telling you exactly why the bug is there or how to fix it. This is really just a clue to you what must be wrong. What you're seeing here is a clue that the first test passed, because there's no red error below that line of code, but this test failed. Somehow or other, your square function is returning 6 when passed in 3 instead of 9. 

So at this point, you sort of put your detective hat on, you go back to your actual code, and you think about in calculator.py, how in the world is line 7 of my square function returning 6 instead of 9. And at this point, odds are the light bulb would go off above your head proverbially, and you would see, I'm using addition, instead of multiplication. 

But what pytest has done for us is automate the process of at least pointing out that error for us. And if I now go in and fix this-- let me go ahead, and the light bulb has gone off. I change the plus to a multiply. Now I'm going to go ahead, and after clearing my screen, I'm going to run not Python, but pytest of test_calculator.py, crossing my fingers again. And now it's green. And I see just a dot, which indicates that my one and only test passed. I'm good, 100% success with my test now after fixing that bug. Let me pause here and see if there's any questions. 

SPEAKER 3: So my question is, what if a user, instead of, because we are taking input from the user, what if the user is somewhat malicious and types in a string instead of an integer, or maybe he types in a float or some other data type? 

DAVID MALAN: Yeah, so what if the user, like we've seen in past examples, types in cat, instead of a number, when we're expecting an integer? How do we test for something like that? At the moment, I'm admittedly not testing user input. If I go back to my code here, notice that my calculator function, of course, has the square function that we keep testing and retesting. 

But notice that all of the user input is currently relegated to my main function. And admittedly, as of now, I am not testing my main function. So there could be one of those bugs. And in fact, there would be, because if the user types in a string, like cat, instead of an integer, like 2 or 3, then line two recall would actually raise a value error exception. So we've seen that before. 

So when it comes to testing your code, this is actually a good reason for having multiple functions in your program. Rather than putting all of your logic in just the file itself, rather than putting all of the logic in just main, it's actually really good, really helpful practice to break your ideas up into smaller bit-sized functions that themselves are testable. 

And what do I mean here? Square is perfectly testable. Why? Because it takes as input a parameter called n, and it returns as output in integer, which is going to be the square thereof, hopefully. It has a well-defined input and a well-defined output. It is therefore completely within your control in your test program to pass in those values. 

Now I will say, if you want to test whether square behaves properly when passed something like a string, like, quote, unquote, "cat," we could absolutely do something like this, assert that the square of quote, unquote, "cat," it's not going to equal something. You can actually, using different syntax, assert that a specific exception will be raised. 

So if we were actually going to go back into our square function, improve it, and deliberately raise an exception, we could test for that too. But for now, I'm deliberately only testing the square function. I'm not testing for specific user input. But that's another problem to be solved. Other questions now on unit tests? 

SPEAKER 4: Do use the unit test to test code for the CS50 check? 

DAVID MALAN: So Check 50 is similar in spirit. Check 50 is a tool that we, CS50, wrote that is essentially doing something like pytest for the evaluation of students' code. It is similar in spirit, but think of Check 50 as being an alternative to pytest, if you will. But it works a little bit differently. But same idea, pytest and unit testing more generally is a technique that is independent of CS50 and is something that you can and should be doing on your own code, both in or outside of this class. How about one other question here on our unit tests? 

SPEAKER 5: My question is that is instead of writing four times, like as a square of, 2 squared 4, instead of that, can we write equals to in square brackets the numbers we want, instead of writing four lines? 

DAVID MALAN: A really good question, absolutely. Right now if I go back to test_calculator.py, it's indeed pretty manual. It took me a while to say and to type out those several lines, and you could imagine writing some kind of loop to just assert in a loop that this equals that, that this equals that, and so forth, using a list or using maybe a list or a dictionary or some structure like that. 

So yes, you can absolutely automate some of these tests by not just doing the same thing again and again. You can still use all of the syntax of Python to do loops. But generally speaking, your tests should be pretty simple. And in fact, let me propose that we improve upon even this design further, because at the moment what's not really ideal, when I run all of these tests when my function is buggy, is notice the output that I got. 

Let me reintroduce that same bug by changing my multiplication back to addition. Let me increase the size of my terminal window again. And let me run pytest again of test_calculator.py. So this is the version of my code now that has the bug again. So I'm going to see that big massive failure where this failure has been displayed to me. 

But this is not as helpful as it could be, because I have all of those other tests in my code. Recall that I had, what, one, two, three, four, five separate tests, and I'm only seeing the output of the first. Now, why is that? If we go back to my code here, you'll see that the first assertion that's failing, namely this one here, that assert of square of 3 equals equals 9, the other tests aren't even getting run. 

And that's not a big deal in the sense that my code is buggy, so one or more of them are probably going to fail anyway, but wouldn't it be nice to know which of them are going to fail? And in fact, it's ideal to run as many tests all at once as possible to give you as many clues as possible to finding your bug. So let me propose that we improve the design of my testing code now, still using pytest as follows. 

Instead of having one big function called test_square that tests the entire function itself with so many different inputs, let's break down my tests into different categories. And here, too, there's no one right way to do this. But my mind is thinking that I should maybe test positive numbers separately, test negative numbers separately, and test 0 separately. 

I could think of other ways. I could test even numbers. I could test odd numbers or maybe some other pattern altogether, but separating this big test into multiple tests is probably going to yield more clues for me when something goes wrong. So let me do this. Let me go ahead and rename this function to test positive initially, and let me include in that function only those first two tests. Let me then create another function here called test negative. And in this function, let me test only negative 2 and negative 3. 

Then down here, let me do one more def of test_zero, and I'll just run one test in there. So I have the same assertions, the same five, but I've now divided them up among three separate functions. What's nice about pytest and other unit testing frameworks is that all three of these test functions will be run automatically. Even if one of them fails, the others will be attempted. That means that if one or two or three of them fail, I'll have one or two or three clues now for helping me find that mistake. 

So let me go ahead and again increase the size of my terminal window, just so we can see more on the screen. My calculator still has the bug, using addition, instead of multiplication. Let me go ahead and run not Python, but again, pytest of test_calculator.py, crossing my fingers as always, and now, oh my God, there's even more errors on the screen. But this in itself is more helpful. Let's work through them from top to bottom. 

So under FAILURES here, in all caps, which I know is not very encouraging to see failure when you're just trying to solve a problem, but that's what these frameworks do, under FAILURES, the first function that failed is test_positive. But here, too, we see the same clue as before. The first one, 2, the square of 2 equals equals 4, that one is fine. It's not erring with any red errors. But the next one is failing. So I know that square is broken when I pass in 3. 

What about down here? It looks like, unfortunately, my test negative function is failing too. Why? When I pass in-- oh, this is interesting-- here now, negative 2 doesn't even work. So I got lucky with positive 2. But negative 2 isn't working. So that's a bit of a clue. But in total, only two tests failed. 

So notice at the very bottom, this summary, two failed and one passed. What's the other one? What was the third one? Test zero. So test zero is passing. These two are failing. And so that kind of leads me logically, mathematically, if you will, to the source of the bug. And just to be clear too, if you have a lot of tests, this little one line output is helpful, even though also a bit discouraging, fail, fail, and dot means pass. So there are the three tests just depicted graphically a little bit differently. 

Let me rewind now and go back in to calculator.py. Let's fix that bug, because let's suppose that I've deduced I'm using addition. I should have been using multiplication all this time. Let me now after fixing the bug yet again, let me go back to my big terminal. Let me run pytest of test_calculator.py, hitting Enter, crossing my fingers now, and dot dot dot means all is well. 100% of my tests passed, all three of them. So now I'm good. 

It doesn't necessarily mean that my code is 100% correct. But it does mean that it has passed 100% of my current tests. And so it would probably behoove us to think a little harder about maybe we should test bigger numbers. Maybe we should test even smaller numbers. Maybe we should test strings or something else. The onus is ultimately on you to decide what you're going to test. 

But in the real world, you're going to be very unhappy with yourself or someone else-- maybe your boss is going to be very unhappy with you-- if you did not catch a bug in your code, which you could have caught had you just written a test to try that kind of input. Let me pause again and see if there's any questions now on unit testing with pytest. 

SPEAKER 6: So if you wanted to test, like someone suggested before, user input as well as testing your function, do you do that within the same file? Or do you make separate files for different types of tests? 

DAVID MALAN: Really good question. You could absolutely make separate files to test different types of things. Or if you don't have that many, you can keep them all in the same file. At the moment, I've been storing all of my tests in one file for convenience, and there's not terribly many of them. But we'll take a look in a bit at an example that allows me to put them into a folder and even run pytest on the whole folder of tests as well. So that's possible. Other questions on unit testing. 

SPEAKER 7: So I've got two questions. So a couple of while ago, you just used an exception called-- I'm not sure what it was-- oh yeah, assertion error. What exactly does that particular error catch? And my second question is, does the assert keyword stand out to the compiler, exactly tell them to insert this particular line of code? 

DAVID MALAN: Indeed. The assert keyword we're seeing and the assertion error we saw earlier are intertwined. So when you use assert and the assertion fails, because whatever Boolean expression you're using is not true, it's false, an assertion error, by definition of Python, will be raised. So those two work in conjunction. 

Those errors, those assertion errors, are still being raised by my code here when any of these lines of code fail. However, pytest, this third party library, is handling the process of catching those exceptions automatically for me, so as to give me this standard output. 

So we started today's story by really implementing unit testing myself. I wrote all of the code myself. I wrote main. I did my conditional. I did try and except. Honestly, it's going to get incredibly painful to write tests long term if you and I have to write that much code every time, especially when our function is this small. So pytest and unit testing frameworks like it just automate so much of that. Essentially, pytest adds the try, the except, the if, the prints for you, so you can just focus on the essence of the test, which really are these inputs and outputs. How about time for one other question here on unit testing as well? 

SPEAKER 8: So when we enter minus x or minus 5 squared, square root of that number comes up. But when we put 6.6 or 5.6, something like that integer, then line shows error. So what's happening there? 

DAVID MALAN: So I'm deliberately testing integers right now, in large part because I only want pow to operate on integers. And that might be conveyed in Python's documentation or my own documentation for that function. If you were to pass in something else, like a float, it turns out that floating point values in Python and other languages are actually very hard, if not impossible, to represent 100% precisely. 

And so if you are trying to compare it against some other value, there might be slight rounding errors as a result. I'm just inferring from what you've described, but I'm very deliberately now testing this function with only the inputs that I would expect. It might indeed throw other errors if other inputs are passed. 

Allow me to propose that we consider what should happen if square isn't actually passed a number. For instance, if I go back to calculator.py, and suppose that I, or perhaps someone else using my square function, simply forgets to convert the return value of input from a str to an int, as by modifying line to here. 

Now, something's definitely going to go wrong if I type in a str instead of what appears to be an int. For instance, if I clear my terminal here, run Python of calculator.py and hit Enter-- let's type in cat as our value for x-- and of course, this raises now a type error. Why? Can't multiply sequence by non-int of type 'str.' What does that mean? You can't do cat times cat, because indeed, square is expecting that end will be some number. 

But that doesn't necessarily mean that square itself is buggy. But this does mean that if I expect a type error to be raised, let's test for that too, so that I know the behavior indeed works as expected. So let me go back to test_calculator.py, and let me go in add a fourth test down here. How about define test underscore, and I'll call this test_str, because I'm going to specifically and deliberately pass in a str for testing. 

And I want to in spirit assert that passing in something like cat to square will raise a type error. But we don't use the assert keyword for that. Rather, we need this. Let me go to the top of this file, and let me additionally import the pytest library itself, because it turns out there's a function in that library called raises that allows me to express that I expect an exception to be raised. 

And I can express that as follows with pytest.raises, and then in parentheses I can pass in the type of exception I expect, which is going to be a type error in this case. And now when do I expect that type error to be raised? Whenever I do something like calling square and passing in not a number, but something like cat. So now if I go back to my terminal window, run pytest of test calculator.py, this time having four tests, I should see that all four now are successful. 

Let's now consider how we could test code that doesn't just expect numbers as input, but actually strings. And let me rewind us in time here in VS Code to that very first program we wrote a few different versions of in hello.py that ultimately looked a little something like this. I had a main function that prompted the user for the value of a variable by asking them, "what's your name?" question mark. 

And then we went ahead and did something like hello, open paren, name, passing that user's name into a function called hello. Now that function hello recall ultimately looked like this. We defined hello as taking a parameter called to, the default value of which was world, and that function very simply printed hello, followed by a comma, and then whatever the name that had been passed in. 

And then we ultimately called main, but for now onward, I'm going to always add this if conditional, if name equals equals underscore underscore main, then and only then do I want to call main. So that's essentially what this program looked like in its last incarnation. How do we go about testing it? Here again too, I'm not going to test the user's input per se in main. I'm going to focus really on the module of code here that's of interest, which is the hello function itself. How can I go about testing the hello function? 

Unfortunately, even if I start by doing something like code of test hello.py-- let me go about and start writing a test program-- I could import from my hello program a function called hello. So a bit strange to see from hello import hello, but notice that on this line here, I'm importing from the module-- that is the file called hello.py-- the function called hello. 

And how do I go about testing this? If I have a function like define test_argument like this-- let me do this. So if I were to define a function like define test_hello, what could I do? I could call hello with quote, unquote, say, "David," and then check if it equals, what, "hello, David." 

So would this work, this approach here? If I've written a test, called test_hello, that calls hello with an argument of David and then tests its return value, just like we've done for our calculator, would this work as written? And let me go back to in just a moment the version of hello that we're testing. So you can see that function hello. Here's the test. Here is the actual code. Would this test now work? Any thoughts? 

SPEAKER 9: I think the problem is that in the first version in hello.py, you're using the to argument that you first declared, when you declared the function instead of using the name. 

DAVID MALAN: That is actually not a bug here. So let me stipulate that in hello.py, this code actually does work as intended. And let me go ahead and test it manually, just to demonstrate as much. Let me run Python of hello.py, typing in, as my name, D-A-V-I-D, and I see, in fact, that it says, "hello, David." 

If, though, I were to change this program, and get rid of the name argument, get rid of the name variable, and just call hello, again, running Python of hello.py, this time I'm not even prompted, because I got rid of my input call, but it does behave as I expect. It does say "hello, world." So let me stipulate that this code in its current form is actually correct, but my test is not going to work as I'd hoped. And there's a subtle difference between my hello function and my square function that explains. Why might this test not work as intended? 

SPEAKER 10: Because it's not returning a value. 

DAVID MALAN: Yeah, exactly. Recall our discussion early on about functions. Functions can either return a value, like my square function hands you back the square of some value, or they can have side effects, sort of visual artifacts that might happen on the screen, like printing something out on the screen. And by definition, that's how print works. Notice that hello, it is short, but it's implemented ultimately using the print function, which does not return a value as I'm using it here. It instead has this side effect of printing something onto the screen. 

So it is not correct in my test function to check if the return value of hello equals equals hello David, because again, hello is not returning anything. It's printing something, that side effect, but notice, literally, it has no return keyword, unlike my square function, which did. 

So here's an opportunity to perhaps change how I go about implementing my actual functions. It turns out that as your programs get more and more sophisticated, more and more complicated, it tends to be best practice not to have side effects if you can avoid it, especially if you want your code to be testable. And in fact, I'm going to propose that we change my hello program to now work as follows. 

Let me go ahead and change this function to not print hello and then that name. Let me go ahead and literally return maybe an F string, which will clean this up a little bit, hello comma to close quotes at the end. So my syntax here is just the familiar f string or format string. It's going to return hello, world or hello, David or hello, whomever's name is passed in as that argument, but I'm returning it now. I'm not printing it out. 

So what needs to change up here? I could do something like this. I could say something like output equals hello and then print output in my main function. Or I can simplify that, because I don't really need that variable. I could instead just do this. I could still call hello, but I could immediately print out the result. 

And this version of my hello program now is actually more testable. Why? Because these assert statements that we're using, and we've seen thus far for our tests, are really designed to test arguments into functions and return values they're from, not testing side effects. 

So if you're doing equals equals, you're looking for a return value, something that's handed back from the function. So that's fine. If I modify the design of my program now not to just print hello, but to return the string, the sentence, the phrase that I want to construct, I can leave it to the caller-- that is the function who's using this hello function-- to handle the actual printing. 

Now what does this mean in my code? It means now if my hello.py looks like this, and hello is indeed returning a value, in my test_hello function, I can test it exactly like this. So let me go ahead and run pytest of test_hello.py, crossing my fingers as always, and voila, one passed. So I passed this test, because apparently the return value of hello does indeed equal "hello, David." 

Let's test the other scenario. What if I call hello without any arguments? Let's assert that calling hello with nothing in those parentheses similarly equals hello comma, but world, the default value. Let me now go ahead and run pytest of test_hello.py. And that too passes entirely. But there too, suppose that I had made some mistakes. Suppose that there were a bug in my code. It might not be best practice to combine multiple tests in this one function, so let's make it more clear what might pass or fail. 

Let's call the first function test the default to this function. And let's only include this first line of code. And then let's go ahead and define another function, like test_argument, to test this other line of code here. So now I have two different tests, each of which is testing something a little fundamentally different. 

So now when I run my code, it's still not broken. If I run pytest of test_hello.py, Enter, I've now passed two tests. And that's just as good as before. But if I did have a bug, having two tests instead of one would indeed give me, perhaps, a bit more of a hint as to what's wrong. Questions now on this testing of return values, when these return values are now strings instead of integers and why we've done this? 

SPEAKER 11: So my question is about function inside the function. Can we test that too or recursion we haven't seen? 

DAVID MALAN: If you have a recursive function, which we've not discussed in this class, yes, you can absolutely test those too by simply calling them exactly in this way. Recursion does not affect this process. How about one more question here on unit tests before we look at one final example? 

SPEAKER 12: When testing our arguments, can we use something like loops or inside of assets or for the values? 

DAVID MALAN: Absolutely. You can absolutely use a loop to test multiple values. In this case, for instance, I could do something like this. I could say for name in the following list of Hermione, say, Harry, and Ron, I could then within this loop assert that hello of that given name equals equals, say, the format string of hello, comma name, and then run all of these here at once by running, again, pytest of test_hello.py. 

It's still going to be just one test within that function, but if there's something interesting about those several strings that makes it compelling to test all of them, you can absolutely automate the test in that way. With that said, each of your tests should ideally be pretty simple and pretty small. Why? Because you don't want to write so much code, so much complicated code that your tests might be flawed. 

What we don't want to have to do is write tests for our tests and test for our tests for our test, because it would never end. So keeping tests nice and simple is really the goal, so that a reasonable human, yourself included, can eyeball them and just claim, yeah, that is correct. We don't need tests for our tests. 

How about one other feature? Suppose that we don't have just one test, but many different tests instead, and we want to start to organize those tests into multiple files and even a folder. Pytest and other frameworks support that paradigm as well. In fact, let me go ahead and test hello.py using a folder of tests, with technically just one test, but it would be representative of having even more in that folder. 

I'm going to go ahead and create a new folder called test using mkdir at my command line. And then within that folder, I'm going to go ahead and create a file called test_hello.py. Within this file, meanwhile, I'm going to test the same thing. So I'm going to go ahead, and from hello, import hello. 

And I'm going to go ahead and define a function like test default that simply tests the scenario where hello with no arguments returns hello, comma world. And I'm going to have that other function where I test that an argument is passed. And in this case, I'll choose an argument like asserting that hello, quote, unquote, David, equals, indeed, hello, comma, not world, but David. 

So in this case, I've just recreated the same test as earlier, but they're in a file now in a folder called test. Pytest allows me to run these here too. But to do so, I actually need to create one other file. Within my test directory, I need to create a file called __init__.py, which has the effect, even if this file is empty, of telling Python to treat that folder as not just a module, but a package, so to speak. 

A package is a Python module or multiple modules that are organized inside of a folder. And this file, __init__.py, is just a visual indicator to Python that indeed it should treat that folder as a package. If I had more code in this folder, I could do even more things with this file. But for now, it's just a clue that it's indeed meant to be a package and not just a module or file alone. 

What I can now do in closing is run pytest, not even on that specific file, but on a whole folder of tests. So if I run pytest of test, where the test is the name of that folder, pytest will automatically search through that folder looking for all possible tests, granted there's just those two in this one file, but when I run it now with Enter, I'll still pass those tests. I'll still get 100%. And I now have a mechanism, ultimately, for testing my own code. 

So whether you're writing functions that return integers or something else, functions that have side effects that could be rewritten as functions that return values, you now have a mechanism to not just wait for, one, someone like us to test your code and not just test your code manually again and again, which might get tedious, and you might make mistakes by not including some possible inputs, we now have an automated mechanism for testing one's own code that's going to be even more powerful when you start collaborating with others so that you can write tests that ensure that if they make a change to the same code, they haven't broken the code that you've written. That's it for this week. We'll see you next time. 

# lecture6-File I/O

[CROWD MURMURING] [MUSIC PLAYING] 

DAVID MALAN: All right, this is CS50's Introduction to Programming with Python. My name is David Malan, and this is our week on File I/O, Input and Output of files. So up until now, most every program we've written just stores all the information that it collects in memory-- that is, in variables or inside of the program itself, a downside of which is that, as soon as the program exits, anything you typed in, anything that you did with that program is lost. 

Now, with files, of course, on your Mac or PC, you can hang on to information long term. And File I/O within the context of programming is all about writing code that can read from, that is load information from, or write to, that is save information to, files themselves. So let's see if we can't transition then from only using memory and variables and the like to actually writing code that saves some files for us and, therefore, data persistently. 

Well, to do this, let me propose that we first consider a familiar data structure, a familiar type of variable that we've seen before, that of a list. And using lists, we've been able to store more than one piece of information in the past. Using one variable, we typically store one value. 

But if that variable is a list, we can store multiple values. Unfortunately, lists are stored in the computer's memory. And so once your program exits, even the contents of those disappear. But let's at least give ourselves a starting point. 

So I'm over here in VS Code. And I'm going to go ahead and create a simple program using code of names.py, a program that just collects people's names, students' names, if you will. And I'm going to do it super simply initially in a manner consistent with what we've done in the past to get user input and print it back out. I'm going to say something like this, name equals input, quote/unquote, what's your name? 

Thereby storing in a variable called name the return value of input, as always. And as always, I'm going to go ahead and very simply print out a nice f string that says, hello, comma, and then, in curly braces, name to print out Hello, David, hello, world, whoever happens to be using the program. Let me go ahead and run this just to remind myself what I should expect. And if I run python of names.py and hit Enter, type in my name like David, of course, I now see Hello, comma, David. 

Suppose, though, that we wanted to add support not just for one name, but multiple names-- maybe three names for the sake of discussion so that we can begin to accumulate some amount of information in the program, such that it's really going to be a downside if we keep throwing it away once the program exits. Well, let me go back into names.py up here at top. Let me proactively give myself a variable, this time called names, plural. And set it equal to an empty list. Recall that the square bracket notation, especially if nothing's inside of it, just means, give me an empty list that we can add things to over time. 

Well, what do we want to add to it? Well, let's add three names, each from the user. And let me say something like this, for underscore in range of 3, let me go ahead and prompt the user with the input function and getting their name in this variable. And then using list syntax, I can say, names.append name to that list. And now I have, in that list, that given name-- 1, 2, 3 of them. 

Other points to note is, I could use a variable here, like i, which is conventional. But if I'm not actually using i explicitly on any subsequent lines, I might as well just use underscore, which is a Pythonic convention. And actually, if I want to clean this up a little bit right now, notice that my name variable doesn't really need to exist because I'm assigning it a value and then immediately appending it. 

Well, I could tighten this up further by just getting rid of that variable altogether and just appending immediately the return value of input. I think we could go both ways in terms of design here. On the one hand, it's a pretty short line, and it's readable. On the other hand, if I were to eventually change this phrase to be not what's your name but something longer, we might want to break it out again into two lines. But for now, I think it's pretty readable. 

Now later in the program, let's just go ahead and print out those same names, but let's sort them alphabetically so that it makes sense to be gathering them all together, then sorting them, and printing them. So how can I do that? Well, in Python, the simplest way to sort a list in a loop is probably to do something like this. For name in names-- but wait. 

Let's sort the names first. Recall that there's a function called sorted which will return a sorted version of that list. Now let's go ahead and print out an f string that says, again, hello, bracket, name, close quotes. 

All right, let me go ahead and run this. So Python of names.py, and let me go ahead and type in a few names this time. How about Hermione? How about Harry? How about Ron? And notice that they're not quite in alphabetical order. But when I hit Enter and that loop kicks in, it's going to print out, hello, Harry, hello, Hermione, hello, Ron, in sorted order. But of course, now, if I run this program again, all of the names are lost. 

And if this is a bigger program than this, that might actually be pretty painful to have to re-input the same information again, and again, and again. Wouldn't it be nice, like most any program today on a phone, or a laptop, or desktop, or cloud to be able to save this information somehow instead? And that's where File I/O comes in. And that's where files come in. They are a way of storing information persistently on your own phone, or Mac, or PC, or some cloud server's disk so that they're there when you come back and run the program again. 

So how can we go about saving all three of these names on in a file as opposed to having to type them again and again? Let me go ahead and simplify this file and, again, give myself just a single variable called name, and set the return value of input equal to that variable. So what's your name, as before, quote/unquote. And now let me go ahead, and let me do something more with this value. Instead of just adding it to a list or printing it immediately out, let's save the value of the person's name that's just been typed in to a file. Well, how do we go about doing that? 

Well, in Python, there's this function called open whose purpose in life is to do just that, to open a file, but to open it up programmatically so that you, the programmer, can actually read information from it or write information to it. So open is like the programmer's equivalent of double clicking on an icon on your Mac or PC. But it's a programmer's technique because it's going to allow you to specify exactly what you want to read from or write to that file. Formally, it's documentation is here, and you'll see that it's usage is relatively straightforward. It minimally just requires the name of the file that we want to open and, optionally, how we want to open it. 

So let me go back to VS Code here, and let me propose now that I do this. I'm going to go ahead and call this function called open, passing in an argument for names.txt, which is the name of the file I would like to store all of these names in. I could call it anything I want. But because it's going to be just text, it's conventional to call it something.txt. 

But I'm also going to tell the open function that I plan to write to this file. So as a second argument to open, I'm going to put literally, quote/unquote, w, for Write, and that's going to tell open to open the file in a way that's going to allow me to change the content. And better yet, if it doesn't even exist yet, it's going to create the file for me. 

Now, open returns what's called a file handle, a special value that allows me to access that file subsequently. So I'm going to go ahead and sign it equal to a variable like file. And now I'm going to go ahead and, quite simply, write this person's name to that file. So I'm going to literally type file, which is the variable linking to that file, .write, which is a function otherwise known as a method that comes with open files that allows me to write that name to the file. And then lastly, I'm going to quite simply going to go ahead and say, file.close, which will close and effectively save the file. 

So these three lines of code here are essentially the programmer's equivalent to double clicking an icon on your Mac or PC, making some changes in Microsoft Word or some other program, and going to File, Save. We're doing that all in code with just these three lines here. Well, let's see, now, how this works. 

Let me go ahead now and run python of names.py and Enter. Let's type in a name. I'll type in Hermione, Enter. All right, where did she end up? Well, let me go ahead now and type code of names.txt, which is a file that happens now to exist because I opened it in write mode. And if I open this in a tab, we'll see there is Hermione. 

Well, let's go ahead and run names.py once more. I'm going to go ahead and run python of names.py, Enter, and this time, I'll type in Harry. Let me go ahead and run it one more time. And this time, I'll type in Ron. And now let me go up to names.txt, where, hopefully, I'll see all three of them here. 

But no. I've just actually seen Ron. What might explain what happened to Hermione and Harry, even though I'm pretty sure I ran the program three times, and I definitely wrote the code that writes their name to that file? What's going on here, do you think? 

AUDIENCE: I think because we're not appending them, we should append the names. Since we are writing directly, it is erasing the old content, and it is replacing with the last set of characters that we mentioned. 

DAVID MALAN: Exactly. Unfortunately, quote/unquote w is a little dangerous. Not only will it create the file for you, it will also recreate the file for you every time you open the file in that mode. So if you open the file once and write Hermione, that worked just fine, as we saw. 

But if you do it again for Harry, if you do it again for Ron, the code is working. But each time, it's opening the file and recreating it with brand-new contents, so we had one version with Hermione, and one version with Harry, and one final version with Ron. But ideally, I think we probably want to be appending, as Vishal says, each of those names to the file, not just clobbering-- that is, overwriting the file each time. 

So how can I do this? It's actually a relatively easy fix. Let me go ahead and do this as follows. I'm going to first remove the old version of names.txt. 

And now I'm going to change my code to do this. I'm going to change the w, quote/unquote, to just a, quote/unquote-- a for Append, which means to add to the bottom, to the bottom, to the bottom, again and again. Now let me go ahead and rerun python of names.py, Enter. 

I'll again start from scratch with Hermione because I'm creating the file new. Notice that if I now do code of names.txt, Enter, we do see that Hermione is back. So after removing the file, it did get recreated, even though I'm using append, which is good. But now let's see what happens when I go back to my terminal. And this time, I run python of names.py again-- this time, typing in Harry. 

And let me run it one more time-- this time, typing in Ron. So hopefully, this time, in that second tab, names.txt, I should now see all three of them. But, but, but, but this doesn't look ideal. What have I clearly done wrong? Something tells me, even though all three names are there, it's not going to be easy to read those back unless you know where each name ends and begins. 

AUDIENCE: The English format is not correct. The English format is not correct. It's incorrect. It's concatenating them. 

DAVID MALAN: It is. Well, it appears to be concatenating. But technically speaking, it's just appending to the file-- first Hermione, then Harry, then Ron. It has the effect of combining them back to back, but it's not concatenating, per se. 

It really is just appending. Let's go to another hand here. What really have I done wrong? Or equivalently, how might I fix? It would be nice if there were some kind of gaps between each of the names, so we could read them more cleanly. 

AUDIENCE: Hello. We should add a new line before we write new name. 

DAVID MALAN: Good. We want to add a new line ourselves. So whereas print by default, recall, always outputs, automatically, a line ending of backslash n. Unless we override it with the named parameter called end, write does not do that. 

Write takes you literally. And if you say write Hermione, that's it. You're getting the H through the e. If you say, write Harry, you get the H through the y. You don't get any extra new lines automatically. 

So if you want to have a new line at the end of each of these names, we've got to do that manually. So let me, again, close names.txt, and let me remove the current file. And let me go back up to my code here. And I can fix this in any number of ways, but I'm just going to go ahead and do this. 

I'm going to write out an f string that contains name and backslash n at the end. We could do this in different ways. We could manually print just the new line or some other technique, but I'm going to go ahead and use my f strings, as I'm in the habit of doing, and just print the name and the new line all at once. 

I'm going to go ahead now and down to my terminal window, run python of names.py again, Enter. We'll type in Hermione. I'm going to run it again, type in Harry. I'm going to type it again and this time, Ron. 

Now I'm going to run code of names.txt and open that file. And now it looks like the file is a bit cleaner. Indeed, I have each of the name on its own line as well as a line ending, which ensures that we can separate one from the other. 

Now, if I were writing code, I bet I could parse, that is, read the previous file by looking at differences between lowercase and uppercase letters. But that's going to get messy quickly. Generally speaking, when storing data long-term in a file, you should probably do it somehow cleanly, like doing one name at a time. 

Well, let's now go back, and I'll propose that this code is now working correctly, but we can design it a little bit better. It turns out that it's all too easy when writing code to sometimes forget to close files. And sometimes, this isn't necessarily a big deal. 

But sometimes, it can create problems. Files could get corrupted or accidentally deleted or the like, depending on what happens in your code. So it turns out that you don't strictly need to call close on the file yourself if you take another approach instead. More Pythonic when manipulating files is to do this, to introduce this other keyword called, quite simply, with that allows you to specify that, in this context, I want you to open and automatically close some file. 

So how do we use with? It simply looks like this. Let me go back to my code here. I've gotten rid of the close line. 

And I'm now just going to say this instead. Instead of saying, file equals open, I'm going to say, with open, then the same arguments as before, and somewhat curiously, I'm going to put the variable at the end of the line. Why? That's just the way this is done. 

You say, with, you call the function in question, and then you say as and specify the name of the variable that should be assigned the return value of open. Then I'm going to go ahead and indent the line underneath so that the line of code that's writing the name is now in the context of this with statement, which just ensures that, automatically, if I had more code in this file down below no longer indented, the file would be automatically closed as soon as line 4 is done executing. So it doesn't change what has just happened, but it does automate the process of at least closing things for us just to ensure I don't forget and so that something doesn't go wrong. 

But suppose, now, that I wanted to read these names from the file. All I've done thus far is write code that writes names to the file. But let's assume, now, that we have all of these names in the file. 

And heck, let's go ahead and add one more. Let me go ahead and run this one more time-- python of names.py. And let's add in Draco to the mix. So now that we have all four of these names here, how might we want to read them back? 

Well, let me propose that we go into names.py now, or we could create another program altogether. But I'm going to keep reusing the same name just to keep us focused on this. And now I'm going to write code that reads an existing file with Hermione, Harry, Ron, and Draco together. 

And how do I do this? Well, it's similar in spirit. I'm going to start this time with with open, and then the first argument is going to be the name of the file that I want to open, as before. And I'm going to open it, this time, in read mode-- quote/unquote, r. And to read a file just means to load it, not to save it. And I'm going to name the return value file. 

And now I'm going to do this. And there's a number of ways I can do this, but one way to read all of the lines from the file at once would be this. Let me declare a variable called lines. 

Let me access that file and call a function or a method that comes with it called readlines. So if you read the documentation on File I/O in Python, you'll see that open files come with a special method whose purpose in life is to read all the lines from the file and return them to me as a list. So what this line 2 is doing is it's reading all of the lines from that file, storing them in a variable called lines. 

Now, suppose I want to iterate over all of those lines and print out each of those names. For line in lines, this is just a standard for loop in Python. Lines as a list. Line is the variable that will be automatically set to each of those lines. Let me go ahead and print out something like, oh, hello, comma, and then I'll print out the line itself. 

All right, so let me go to my terminal window, run python of names.py now-- I have not deleted names.txt, so it still contains all four of those names-- and hit Enter, and OK, it's not bad, but it's a little ugly here. What's going on? When I ran names.py, it's saying Hello to Hermione, to Harry, to Ron, to Draco. But there's these gaps now between the lines. What explains that symptom? If nothing else, it just looks ugly. 

AUDIENCE: It happens because in the text file, we have new line symbols in between those names, and the print always adds another new line at the end. So you use the same symbol twice. 

DAVID MALAN: Perfect. And here's a good example of a bug, a mistake in a program. But if you just think about those first principles, like, how do each of the lines of code work that I'm using? You should be able to reason, exactly as Ripal there to say that, all right, well, one of those new lines is coming from the file after each name. And then, of course, print, all of these weeks later, is still giving us for free that extra new line. 

So there's a couple possible solutions. I could certainly do this, which we've done in the past, and pass in a named argument to print, like end="". And that's fine. I would argue a little better than that might actually be to do this, to strip off of the end of the line the actual new line itself so that print is handling the printing of everything, the person's name as well as the new line. 

But you're just stripping off what is really just an implementation detail in the file. We chose to use new lines in my text file to separate one name from another. So arguably, it should be a little cleaner in terms of design to strip that off and then let print print out what is really just now a name. But that's ultimately a design decision. The effect is going to be exactly the same. 

Well, if I'm going to open this file and read all the lines and then iterate over all of those lines and print them each out, I could actually combine this into one thing because, right now, I'm doing twice as much work. I'm reading all of the lines, then I'm iterating over all of the lines just to print out each of them. Well, in Python, with files, you can actually do this. I'm going to erase almost all of these lines now, keeping only with statement at top. And inside of this with statement, I'm going to say this, for line in file, go ahead and print out, quote/unquote, hello, comma, and then line.rstrip. 

So I'm going to take the approach of stripping off the end of the line. But notice how elegant this is, so to speak. I've opened the file in line 1. And if I want to iterate over every line in the file, I don't have to very explicitly read all the lines, then iterate over all of the lines. I can combine this into one thought. 

In Python, you can simply say, for line in file, and that's going to have the effect of giving you a for loop that iterates over every line in the file, one at a time, and on each iteration, updating the value of this variable line to be Hermione, then Harry, then Ron, then Draco. So this, again, is one of the appealing aspects of Python is that it reads rather like English-- for line in file, print this. It's a little more compact when written this way. 

Well, what if, though, I don't want quite this behavior? Because notice now, if I run python of names.py, it's correct. I'm seeing each of the names and each of the hellos, and there's no extra spaces in between. But just to be difficult, I'd really like us to be sorting these hellos. Really, I'd like to see Draco first, then Harry, then Hermione, then Ron, no matter what order they appear in the file. 

So I could go in, of course, to the file and manually change the file. But if that file is changing over time based on who is typing their name into the program, that's not really a good solution. In code, I should be able to load the file, no matter what it looks like, and just sort it all at once. Now, here is a reason to not do what I've just done. 

I can't iterate over each line in the file and print it out but sort everything in advance. Logically, if I'm looking at each line one at a time and printing it out, it's too late to sort. I really need to read all of the lines first without printing them, sort them, then print them. So we have to take a step back in order to add now this new feature. So how can I do this? 

Well, let me combine some ideas from before. Let me go ahead and start fresh with this. Let me give myself a list called names, and assign it an empty list, just so I have a variable in which to accumulate all of these lines. And now let me open the file with open, quote/unquote, names.txt. 

And it turns out, I can tighten this up a little bit. It turns out, if you're opening a file to read it, you don't need to specify, quote/unquote, r. That is the implicit default. 

So you can tighten things up by just saying, open names.txt. And you'll be able to read the file but not write it. I'm going to give myself a variable called file, as before. 

I am going to iterate over the file in the same way, for line in file. But instead of printing each line, I'm going to do this. I'm going to take my names list and append to it. And this is appending to a list in memory, not appending to the file itself. I'm going to go ahead and append the current line, but I'm going to strip off the new line at the end so that all I'm adding to this list is each of the students' names. 

Now I can use that familiar technique from before. Let me go outside of this with statement because now I've read the entire file, presumably. So by the time I'm done with lines 4 and 5, again, and again, and again, for each line in the file, I'm done with the file. It can close. 

I now have all of the students' names in this list variable. Let me do this. For name in, not just names, but the sorted names, using our Python function sorted, which does just that, and do print, quote/unquote, with an f string, hello, comma, and now I'll plug in bracket name. 

So now, what have I done? I'm creating a list at the beginning, just so I have a place to gather my data. I then, on lines 3 through 5, iterate over the file from top to bottom, reading in each line, one at a time, stripping off the new line and adding just the student's name to this list. And the reason I'm doing that is so that on line 7, I can sort all of those names, now that they're all in memory, and print them in order. I need to load them all into memory before I can sort them. Otherwise, I'd be printing them out prematurely, and Draco would end up last instead of first. 

So let me go ahead in my terminal window and run python of names.py now, and hit Enter. And there we go. The same list of four hellos, but now they're sorted. And this is a very common technique. When dealing with files and information more generally, if you want to change that data in some way, like sorting it, creating some kind of variable at the top of your program, like a list, adding or appending information to it just to collect it in one place, and then do something interesting with that collection, that list, is exactly what I've done here. 

Now, I should note that if we just want to sort the file, we can actually do this even more simply in Python, particularly by not bothering with this names list, nor the second for loop. And let me go ahead and, instead, just do more simply this. Let me go ahead and tell Python that we want the file itself to be sorted using that same sorted function, but this time on the file itself. 

And then inside of that for loop, let's just go ahead and print right away our hello, comma, followed by the line itself, but still stripping off of the end of it any white space therein. If we go ahead and run this same program now with python of names.py and hit Enter, we get the same result. But of course, it's a lot more compact. 

But for the sake of discussion, let's assume that we do actually want to potentially make some changes to the data as we iterate over it. So let me undo those changes, leave things as is. Whereby now, we'll continue to accumulate all of the names first into a list, maybe do something to them, maybe forcing them to uppercase or lowercase or the like, and then sort and print out each item. 

Let me pause and see if there's any questions now on File I/O reading or writing or now accumulating all of these values in some list. 

AUDIENCE: Hi. Is there a way to sort the files-- instead if you want it from alphabetically from A to Z, is there a way to reverse it from Z to A. Is there a little extension that you can add to the end to do that? Or would you have to create a new function? 

DAVID MALAN: If you wanted to reverse the contents of the file? 

AUDIENCE: Yeah, so if you, instead of sorting them from A to Z in ascending order, if you wanted them in descending order, is there an extension for that? 

DAVID MALAN: There is, indeed. And as always, the documentation is your friend. So if the goal is to sort them, not in alphabetical order, which is the default, but maybe reverse alphabetical order, you can take a look, for instance, at the formal Python documentation there. 

And what you'll see is this summary. You'll see that the sorted function takes the first argument, generally known as an iterable. And something that's iterable means that you can iterate over it. 

That is you can loop over it one thing at a time. What the rest of this line here means is that you can specify a key, like, how you want to sort it, but more on that later. But this last named parameter here is reverse. 

And by default, per the documentation, it's false. It will not be reversed by default. But if we change that to true, I bet we can do that. 

So let me go back to VS Code here and do just that. Let me go ahead and pass in a second argument to sorted in addition to this iterable, which is my names list-- iterable, again, in the sense that it can be looped over. And let me pass in reverse=True, thereby overriding the default of false. 

Let me now run python of names.py. And now Ron's at the top, and Draco's at the bottom. So there, too, whenever you have a question like that moving forward, consider, what does the documentation say? And see if there's a germ of an idea there because, odds are, if you have some problem, odds are, some programmer before you has had the same question. Other thoughts? 

AUDIENCE: Can we limit the number or numbers of names? And the second question, can we find a specific name in list? 

DAVID MALAN: Really good question, can we limit the number of the names in the file? And can we find a specific one? We absolutely could. If we were to write code, we could, for instance, open the file first, count how many lines are already there, and then if there's too many already, we could just exit with sys.exit or some other message to indicate to the user that, sorry, the class is full. As for finding someone specifically, absolutely. 

You could imagine opening the file, iterating over it with a for loop again and again and then adding a conditional. Like, if the current line equals equals Harry, then we found the chosen run. And you can print something like that. So you can absolutely combine these ideas with previous ideas, like conditionals, to ask those same questions. How about one other question on File I/O? 

AUDIENCE: So I just thought about this function, like read all the lines. And it looks like it's separate all the lines by this special character, backslash. And but it looks like we don't need it character, and we always strip it. And it looks like some bad design or function. Why wouldn't we just strip it inside this function? 

DAVID MALAN: A really good question. So we are, in my examples thus far, using rstrip to strip from the end of the line all of this white space. You might not want to do that. 

In this case, I am stripping it away because I know that each of those lines isn't some generic line of text. Each line really represents a name that I have put there myself. I'm using the new line just to separate one value from another. 

In other scenarios, you might very well want to keep that line ending because it's a very long series of text, or a paragraph, or something like that, where you want to keep it distinct from the others. But it's just a convention. We have to use something, presumably, to separate one chunk of text from another. 

There are other functions in Python that will, in fact, handle the removal of that white space for you. Readlines, though, does literally that, though. It reads all of the lines as is. 

Well, allow me to turn our attention back to where we left off here, which is just names to propose that, with names.txt, we have an ability, it seems, to store each of these names pretty straightforwardly. But what if we wanted to keep track of other information as well? Suppose that we wanted to store information, including a student's name and their house at Hogwarts, be it Gryffindor, or Slytherin, or something else. Well, where do we go about putting that? 

Hermione lives in Gryffindor, so we could do something like this in our text file. Harry lives in Gryffindor, so we could do that. Ron lives in Gryffindor, so we could do that. And Draco lives in Slytherin, so we could do that. 

But I worry here-- but I worry now that we're mixing apples and oranges, so to speak. Some lines are names. Some lines are houses. So this probably isn't the best design, if only because it's confusing, or it's ambiguous. 

So maybe what we could do is adopt a convention. And indeed, this is, in fact, what a lot of programmers do. They change this file not to be names.txt, but instead, let me create a new file called names.csv. CSV stands for Comma-Separated Values. 

And it's a very common convention to store multiple pieces of information that are related in the same file. And so to do this, I'm going to separate each of these types of data, not with another new line, but simply with a comma. I'm going to keep each student on their own line, but I'm going to separate the information about each student using a comma instead. 

And so now we sort of have a two-dimensional file, if you will. Row by row, we have our students. But if you think of these commas as representing a column, even though it's not perfectly straight because of the lengths of these names, it's a little jagged. You can think of these commas as representing a column. 

And it turns out, these CSV files are very commonly used when you use something like Microsoft Excel, Apple Numbers, or Google Spreadsheets, and you want to export the data to share with someone else as a CSV file. Or conversely, if you want to import a CSV file into your preferred spreadsheet software, like Excel, or Numbers, or Google Spreadsheets, you can do that as well. So CSV is a very common, very simple text format that just separates values with commas and different types of values, ultimately, with new lines as well. 

Let me go ahead and run code of students.csv to create a brand-new file that's initially empty. And we'll add to it those same names but also some other information as well. So if I now have this new file, students.csv, inside of which is one column of names, so to speak, and one column of houses, how do I go about changing my code to read not just those names but also those names and houses so that they're not all on one line-- we somehow have access to both type of value separately? Well, let me go ahead and create a new program here called students.py. 

And in this program, let's go about reading, not a text file, per se, but a specific type of text file, a CSV, a Comma-Separated Values file. And to do this, I'm going to use similar code as before. I'm going to say with open, quote/unquote, students.csv. I'm not going to bother specifying, quote/unquote, r because, again, that's the default. 

But I'm going to give myself a variable name of file. And then in this file, I'm going to go ahead and do this. For line in file, as before, and now I have to be a bit clever here. 

Let me go back to students.csv, looking at this file, and it seems that on my loop on each iteration, I'm going to get access to the whole line of text. I'm not going to automatically get access to just Hermione or just Gryffindor. Recall that the loop is going to give me each full line of text. So logically, what would you propose that we do inside of a for loop that's reading a whole line of text at once, but we now want to get access to the individual values, like Hermione and Gryffindor, Harry and Gryffindor? How do we go about taking one line of text and gaining access to those individual values, do you think? Just instinctively, even if you're not sure what the name of the functions would be. 

AUDIENCE: You can access it as you would as if you were using a dictionary, like using a key and value. 

DAVID MALAN: So ideally, we would access it using it a key and value. But at this point in the story, all we have is this loop, and this loop is giving me one line of text that is the time. I'm the programmer now. I have to solve this. There is no dictionary yet in question. How about another suggestion here? 

AUDIENCE: So you can somehow split the two words based on the comma? 

DAVID MALAN: Yeah, even if you're not quite sure what function is going to do this, intuitively, you want to take this whole line of text-- Hermione, comma, Gryffindor, Harry, comma, Gryffindor, and so forth-- and split that line into two pieces, if you will. And it turns out wonderfully, the function we'll use is actually called split that can split on any characters, but you can tell it what character to use. 

So I'm going to go back into students.py, and inside of this loop, I'm going to go ahead and do this. I'm going to take the current line. I'm going to remove the white space at the end, as always, using rstrip here. And then whatever the result of that is, I'm going to now call split and, quote/unquote, comma. 

So the split function or method comes with strings. Strs in Python-- any str has this method built-in. And if you pass in an argument, like a comma, what this split function will do is split that current string into 1, 2, 3, maybe more pieces by looking for that character again and again. 

Ultimately, split is going to return to us a list of all of the individual parts to the left and to the right of those commas. So I can give myself a variable called row here. And this is a common paradigm. When you know you're iterating over a file, specifically a CSV, it's common to think of each line of it as being a row and each of the values therein separated by commas as columns, so to speak. So I'm going to deliberately name my variable row, just to be consistent with that convention. And now what do I want to print? 

Well, I'm going to go ahead and say this. Print, how about the following, an f string that starts with curly braces-- well, how do I get access to the first thing in that row? Well, the row is going to have how many parts? Two, because if I'm splitting on commas, and there's one comma per line, that's going to give me a left part and a right part, like Hermione and Gryffindor, Harry and Gryffindor. 

When I have a list like row, how do I get access to individual values? Well, I can do this. I can say, row, bracket, 0. And that's going to go to the first element of the list, which should hopefully be the student's name. Then after that, I'm going to say, is in, and I'm going to have another curly brace here for row, bracket, 1. And then I'm going to close my whole quote. 

So it looks a little cryptic at first glance. But most of this is just f string syntax with curly braces to plug in values. And what values am I plugging in? Well, row, again, is a list, and it has two elements, presumably-- Hermione in one and Gryffindor in the other, and so forth. So bracket 0 is the first element because, remember, we start indexing at 0 in Python. And 1 is going to be the second element. 

So let me go ahead and run this now and see what happens-- python of students.py, Enter. And we see Hermione is in Gryffindor. Harry's in Gryffindor. Ron is in Gryffindor. And Draco is in Slytherin. 

So we have now implemented our own code from scratch that actually parses, that is, reads and interprets a CSV file ultimately here. Now, let me pause to see if there's any questions. But we'll make this even easier to read in just a moment. Any questions on what we've just done here by splitting by comma? 

AUDIENCE: So my question is, can we edit any line of code any time we want? Or the only option that we have is to append the lines? Or let's say, we want to, let's say, change Harry's house to Slytherin or some other house. 

DAVID MALAN: Yeah, a really good question. What if you want to, in Python, change a line in the file and not just append to the end? You would have to implement that logic yourself. So for instance, you could imagine now opening the file and reading all of the contents in, then maybe iterating over each of those lines. And as soon as you see that the current name equals equals Harry, you could maybe change his house to Slytherin. 

And then it would be up to you, though, to write all of those changes back to the file. So in that case, you might want to, in simplest form, read the file once and let it close. Then open it again, but open for writing, and change the whole file. 

It's not really possible or easy to go in and change just part of the file, though you can do it. It's easier to actually read the whole file, make your changes in memory, then write the whole file out. But for larger files where that might be quite slow, you can be more clever than that. 

Well, let me propose now that we clean this up a little bit because I actually think this is a little cryptic to read-- row, bracket, 0, row, bracket, 1-- it's not that well-written at the moment, I would say. But it turns out that when you have a variable that's a list like row, you don't have to throw all of those variables into a list. You can actually unpack that whole sequence at once. That is to say, if you know that a function like split returns a list, but you know in advance that it's going to return two values in a list, the first and the second, you don't have to throw them all into a variable that itself is a list. 

You can actually unpack them simultaneously into two variables, doing name, comma, house. So this is a nice Python technique to not only create, but assign, automatically, in parallel, two variables at once, rather than just one. So this will have the effect of putting the name in the left, Hermione, and it will have the effect of putting Gryffindor the house in the right variable. 

And we now no longer have a row. We can now make our code a little more readable by now literally just saying name down here and, for instance, house down here. So just a little more readable, even though, functionally, the code now is exactly the same. 

All right, so this now works. And I'll confirm as much by just running it once more-- python of students.py, Enter. And we see that the text is as intended. But suppose, for the sake of discussion, that I'd like to sort this list of output. 

I'd like to say hello, again, to Draco first, then hello to Harry, then Hermione, then Ron. How can I go about doing this? Well, let's take some inspiration from the previous example, where we were only dealing with names and, instead, do it with these full phrases. So and so is in house. 

Well, let me go ahead and do this. I'm going to go ahead and start scratch and give myself a list called students, equal to an empty list, initially. And then with open students.csv as file, I'm going to go ahead and say this-- for line in file. And then below this, I'm going to do exactly as before-- name, comma, house equals the current line, stripping off the white space at the end, splitting it on a comma-- so that's exact same as before. 

But this time, before I go about printing the sentence, I'm going to store it temporarily in a list so that I can accumulate all of these sentences and then sort them later. So let me go ahead and do this. Students, which is my list, .append-- let me append the actual sentence I want to show on the screen-- so another f string. 

So name is in house, just as before. But notice, I'm not printing that sentence. I'm appending it to my list-- not a file, but to my list. Why am I doing this? Well, just because, as before, I want to do this. For student in the sorted students, I want to go ahead and print out students, like this. 

Well, let me go ahead and run python of students.py, and hit Enter now. And I think we'll see, indeed, Draco is now first. Harry is second. Hermione is third. And Ron is fourth. 

But this is arguably a little sloppy, right? It seems a little hackish that I'm constructing these sentences. And even though I technically want to sort by name, I'm technically sorting by these whole English sentences. So it's not wrong. 

It's achieving the intended result, but it's not really well designed because I'm just getting lucky that English is reading from left to right. And therefore, when I print this out, it's sorting properly. It would be better, really, to come up with a technique for sorting by the students' names, not by some English sentence that I've constructed here on line 6. 

So to achieve this, I'm going to need to make my life more complicated for a moment. And I'm going to need to collect information about each student before I bother assembling that sentence. So let me propose that we do this. Let me go ahead and undo these last few lines of code so that we currently have two variables, name and house, each of which has name and the student's house respectively. And we still have our global variable, students. 

But let me do this. Recall that Python supports dictionaries. And dictionaries are just collections of keys and values. So you can associate something with something else, like, a name with Hermione, like, a house with Gryffindor. That really is a dictionary. 

So let me do this. Let me temporarily create a dictionary that stores this association of name with house. Let me go ahead and do this. 

Let me say that the student here is going to be represented initially by an empty dictionary. And just like you can create an empty list with square brackets, you can create an empty dictionary with curly braces. So give me an empty dictionary that will soon have two keys, name and house. How do I do that? 

Well, I could do it this way-- student, open bracket, name equals the student's name that we got from the line. Student, bracket, house equals the house that we got from the line. And now I'm going to append to the students list-- plural-- that particular student. 

Now, why have I done this? I've admittedly made my code more complicated. It's more lines of code, but I've now collected all of the information I have about students while still keeping track-- what's a name, what's a house. The list, meanwhile, has all of the students' names and houses together. Now, why have I done this? Well, let me, for the moment, just do something simple. Let me do for student in students, and let me very simply now say, print the following f string, the current student with this name is in this current student's house. 

And now notice one detail. Inside of this f string, I'm using my curly braces, as always. I'm using, inside of those curly braces, the name of a variable, as always. But then I'm using not bracket 0 or 1 because these are dictionaries now, not list. But why am I using single quotes to surround house and to surround name? Why single quotes inside of this f string to access those keys? 

AUDIENCE: Yes, because you have double quotes in that line 12. And so you have to tell Python to differentiate. 

DAVID MALAN: Exactly, because I'm already using double quotes outside of the f string, if I want to put quotes around any strings on the inside, which I do need to do for dictionaries because, recall, when you index into a dictionary, you don't use numbers like lists-- 0, 1, 2, onward-- you, instead, use strings, which need to be quoted. But if you're already using double quotes, it's easiest to then use single quotes on the inside, so Python doesn't get confused about what lines up with what. So at the moment, when I run this program, it's going to print out those hellos. 

But they're not yet sorted. In fact, what I now have is a list of dictionaries, and nothing is yet sorted. But let me tighten up the code too to point out that it doesn't need to be quite as verbose. 

If you're in the habit of creating an empty dictionary, like this on line 6, and then immediately putting in two keys, name and house, each with two values, name and house respectively, you can actually do this all at once. So let me show you a slightly different syntax. I can do this. 

Give me a variable called student, and let me use curly braces on the right-hand side here. But instead of leaving them empty, let's just define those keys and those values now. Quote/unquote name will be name, and quote/unquote house will be house. 

This achieves the exact same effect in one line instead of three. It creates a new non-empty dictionary containing a name key, the value of which is the student's name, and a house key, the value of which is the student's house. Nothing else needs to change. 

That will still just work so that if I, again, run python of students.py, I'm still seeing those greetings, but they're still not quite actually sorted. Well, what might I go about doing here in order to-- what could I do to improve upon this further? Well, we need some mechanism now of sorting those students. But unfortunately, you can't do this. 

We can't sort all of the students now because those students are not names like they were before. They aren't sentences like they were before. Each of the students is a dictionary, and it's not obvious how you would sort a dictionary inside of a list. 

So ideally, what do we want to do? If at the moment we hit line 9, we have a list of all of these students, and inside of that list is one dictionary per student, and each of those dictionaries has two keys, name and house, wouldn't it be nice if there were way in code to tell Python, sort this list by looking at this key in each dictionary? Because that would give us the ability to sort either by name, or even by house, or even by any other field that we add to that file. 

So it turns out, we can do this. We can tell the sorted function not just to reverse things or not. It takes another positional-- it takes another named parameter called key, where you can specify what key should be used in order to sort some list of dictionaries. 

And I'm going to propose that we do this. I'm going to first define a function-- temporarily, for now-- called get_name. And this function's purpose in life, given a student, is to, quite simply, return the student's name from that particular dictionary. So if student is a dictionary, this is going to return literally the student's name, and that's it. That's the sole purpose of this function in life. 

What do I now want to do? Well now that I have a function that, given a student, will return to me the student's name, I can do this. I can change sorted to say, use a key that's equal to whatever the return value of get_name is. And this now is a feature of Python. Python allows you to pass functions as arguments into other functions. 

So get_name is a function. Sorted is a function. And I'm passing in get_name to sorted as the value of that key parameter. Now, why am I doing that? 

Well, if you think of the get_name function, it's just a block of code that will get the name of a student. That's handy because that's the capability that sorted needs. When given a list of students, each of which is a dictionary, sorted needs to know, how do I get the name of the student? In order to do alphabetical sorting for you. 

The authors of Python didn't know that we were going to be creating students here in this class, so they couldn't have anticipated writing code in advance that specifically sorts on a field called student, let alone called name, let alone house. So what did they do? They instead built into the sorted function this named parameter key that allows us, all these years later, to tell their function sorted how to sort this list of dictionaries. 

So now watch what happens. If I run python of students.py and hit Enter, I now have a sorted list of output. Why? Because now that list of dictionaries has all been sorted by the student's name. 

I can further do this. If, as before, we want to reverse the whole thing by saying reverse equals true, we can do that too. Let me rerun Python of students.py, and hit Enter. Now it's reversed. Now it's Ron, then Hermione, Harry, and Draco. 

But we can do something different as well. What if I want to sort, for instance, by house name reversed? I could do this. I could change this function from get_name to get_house. I could change the implementation up here to be get_house. 

And I can return not the student's name but the student's house. And so now notice, if I run python of students.py, Enter, notice now it is sorted by house in reverse order. Slytherin is first, and then Gryffindor. 

If I get rid of the reverse but keep the get_house and rerun this program, now it's sorted by house. Gryffindor is first, and Slytherin is last. And the upside now of this is, because I'm using this list of dictionaries and keeping the students data together until the last minute when I'm finally doing the printing, I now have full control over the information itself, and I can sort by this or that. I don't have to construct those sentences in advance, like I rather hackishly did the first time. 

All right, that was a lot. Let me pause here to see if there are questions. 

AUDIENCE: So when we are sorting the files, every time, should we use the loops, or a text dictionary, or any kind of list? Can we sort by just sorting, not looping or any kind of stuff? 

DAVID MALAN: A good question, and the short answer with Python alone, you're the programmer. You need to do the sorting. With libraries and other techniques, absolutely. 

You can do more of this automatically because someone else has written that code. What we're doing at the moment is doing everything from scratch ourselves. But absolutely, with other functions or libraries, some of this could be made more easily done. Some of this could be made easier. Other questions on this technique here? 

AUDIENCE: If equal to the return value of the function, can it be equal to just a variable or a value? 

DAVID MALAN: Well, yes. It should equal a value. And I should clarify, actually, since this was not obvious. 

So when you pass in a function like get_name or get_house to the sorted function as the value of key, that function is automatically called by the sorted function for you on each of the dictionaries in the list. And it uses the return value of get_name or get_house to decide what strings to actually use to compare in order to decide which is alphabetically correct. So this function, which you pass just by name, you do not pass in parentheses at the end, is called by the sorted function in order to figure out for you how to compare these same values. 

AUDIENCE: How can we use nested dictionaries? I have read about nested dictionaries. What is the difference between nested dictionaries and the dictionary inside a list? I think it is that. 

DAVID MALAN: Sure. So we are using a list of dictionaries. Why? Because each of those dictionaries represents a student. And a student has a name and a house, and we want to, I claim, maintain that association. And it's a list of students because we've got multiple students-- four, in this case. 

You could create a structure that is a dictionary of dictionaries. But I would argue, it just doesn't solve a problem. I don't need a dictionary of dictionary. I need a list of key-value pairs right now. That's all. 

So let me propose, if we go back to students.py here, and we revert back to the approach where we have get_name as the function, both used and defined here, and that function returns the student's name, what happens to be clear is that the sorted function will use the value of key-- get_name, in this case-- calling that function on every dictionary in the list that it's supposed to sort. And that function, get_name, returns the string that sorted will actually use to decide whether things go in this order, left-right, or in this order, right-left. It alphabetizes these things based on that return value. 

So notice that I'm not calling the function get_name here with parentheses. I'm passing it in only by its name so that the sorted function can call that get name function for me. 

Now, it turns out, as always, if you're defining something, be it a variable or, in this case, a function, and then immediately using it but never, once again, needing the name of that function, like, get_name, we can actually tighten this code up further. I can actually do this. I can get rid of the get_name function all together, just like I could get rid of a variable that isn't strictly necessary. 

And instead of passing key, the name of a function, I can actually pass key what's called a lambda function, which is an anonymous function, a function that just has no name. Why? Because you don't need to give it a name if you're only going to call it in one place. And the syntax for this in Python is a little weird. But if I do key equals literally the word lambda, then something like student, which is the name of the parameter I expect this function to take, and then I don't even type the Return key. I instead just say, student, bracket, name. 

So what am I doing here with my code? This code here that I've highlighted is equivalent to the get_name function I implemented a moment ago. The syntax is admittedly a little different. I don't use def. 

I didn't even give it a name, like get_name. I, instead, am using this other keyword in Python called lambda, which says, hey, Python, here comes a function, but it has no name. It's anonymous. 

That function takes a parameter. I could call it anything I want. I'm calling it student. Why? Because this function that's passed in as key is called on every one of the students in that list, every one of the dictionaries in that list. 

What do I want this anonymous function to return? Well given a student, I want to index into that dictionary and access their name so that the string Hermione, and Harry, and Ron, and Draco is ultimately returned. And that's what the sorted function uses to decide how to sort these bigger dictionaries that have other keys, like house, as well. 

So if I now go back to my terminal window and run python of students.py, it still seems to work the same, but it's arguably a little better design because I didn't waste lines of code by defining some other function, calling it in one and only one place. I've done it all sort of in one breath, if you will. All right, let me pause here to see if there's any questions specifically about lambda, or anonymous functions, and this tightening up of the code. 

AUDIENCE: I have a question, like whether we could define lambda twice. 

DAVID MALAN: You can use lambda twice. You can create as many anonymous functions as you'd like. And you generally use them in contexts like this, where you want to pass to some other function a function that itself does not need a name. So you can absolutely use it in more than one place. I just have only one use case for it. How about one other question on lambda or anonymous functions specifically? 

AUDIENCE: What if our lambda would take more than one line, for example? 

DAVID MALAN: Sure, if your lambda function takes multiple parameters, that is fine. You can simply specify commas followed by the names of those parameters, maybe x and y or so forth, after the name student. So here too, lambda looks a little different from def in that you don't have parentheses, you don't have the keyword def, you don't have a function name. But ultimately, they achieve that same effect. They create a function anonymously and allow you to pass it in, for instance, as some value here. 

So let's now change students.csv to contain not students' houses at Hogwarts, but their homes where they grew up. So Draco, for instance, grew up in Malfoy Manor. Ron grew up in The Burrow. Harry grew up in Number Four, Privet Drive. And according to the internet, no one knows where Hermione grew up. 

The movies apparently took certain liberties with where she grew up. So for this purpose, we're actually going to remove Hermione because it is unknown exactly where she was born. So we still have some three students. But if anyone can spot the potential problem now, how might this be a bad thing? Well, let's go and try and run our own code here. 

Let me go back to students.py here. And let me propose that I just change my semantics because I'm now not thinking about Hogwarts houses but the students' own homes. So I'm just going to change some variables. 

I'm going to change this house to a home, this house to a home, as well as this one here. I'm still going to sort the students by name, but I'm going to say that they're not in a house, but rather, from a home. So I've just changed the names of my variables and my grammar in English here, ultimately, to print out that, for instance, Harry is from Number Four, Privet Drive, and so forth. 

But let's see what happens here when I run Python of this version of students.py, having changed students.csv to contain those homes and not houses. Enter. Huh, our first value error, like the program just doesn't work. What might explain this value error? The explanation of which rather cryptically is, too many values to unpack. And the line in question is this one involving split. How did, all of a sudden, after all of these successful runs of this program, did line 5 suddenly now break? 

AUDIENCE: In the line in students.csv, you have three values. There's a line that you have three values and in students. 

DAVID MALAN: Yeah, I spent a lot of time trying to figure out where every student should be from so that we could create this problem for us. And wonderfully, like, the first sentence of the book is Number Four, Privet Drive. And so the fact that address has a comma in it is problematic. Why? Because you and I decided sometime ago to just standardize on commas-- CSV, Comma-Separated Values-- to denote the-- we standardized on commas in order to delineate one value from another. 

And if we have commas grammatically in the student's home, we're clearly confusing it as this special symbol. And the split function is now, for just Harry, trying to split it into three values, not just two. And that's why there's too many values to unpack because we're only trying to assign two variables, name and house. 

Now, what could we do here? Well, we could just change our approach, for instance. One paradigm that is not uncommon is to use something a little less common, like a vertical bar. So I could go in and change all of my commas to vertical bars. That, too, could eventually come back to bite us in that if my file eventually has vertical bars somewhere, it might still break. So maybe that's not the best approach. 

I could maybe do something like this. I could escape the data, as I've done in the past. And maybe I could put quotes around any English string that itself contains a comma. And that's fine. I could do that, but then my code, students.py, is going to have to change too because I can't just naively split on a comma now. 

I'm going to have to be smarter about it. I'm going to have to take into account split only on the commas that are not inside of quotes. And oh, it's getting complicated fast. 

And at this point, you need to take a step back and consider, you know what, if we're having this problem, odds are, many other people before us have had this same problem. It is incredibly common to store data in files. It is incredibly common to use CSV files specifically. And so you know what. Why don't we see if there's a library in Python that exists to read and/or write CSV files? Rather than reinvent the wheel, so to speak, let's see if we can write better code by standing on the shoulders of others who have come before us-- programmers passed-- and actually use their code to do the reading and writing of CSVs, so we can focus on the part of our problem that you and I care about. 

So let's propose that we go back to our code here and see how we might use the CSV library. Indeed, within Python, there is a module called CSV. The documentation for it is at this URL here in Python's official documentation. 

But there's a few functions that are pretty readily accessible if we just dive right in. And let me propose that we do this. Let me go back to my code here. 

And instead of re-inventing this wheel and reading the file line by line, and splitting on commas, and dealing now with quotes, and Privet Drives, and so forth, let's do this instead. At the start of my program, let me go up and import the CSV module. Let's use this library that someone else has written that's dealing with all of these corner cases, if you will. I'm still going to give myself a list, initially empty, in which to store all these students. 

But I'm going to change my approach here now just a little bit. When I open this file with with, let me go in here and change this a little bit. I'm going to go in here now and say this. Reader equals csv.reader, passing in file as input. 

So it turns out, if you read the documentation for the CSV module, it comes with a function called reader whose purpose in life is to read a CSV file for you and figure out, where are the commas, where are the quotes, where are all the potential corner cases, and just deal with them for you. You can override certain defaults or assumptions in case you're using not a comma, but a pipe or something else. But by default, I think it's just going to work. 

Now, how do I integrate over a reader and not the raw file itself? It's almost the same. The library allows you still to do this. For each row in the reader-- so you're not iterating over the file directly now. You're iterating over the reader, which is, again, going to handle all of the parsing of commas, and new lines, and more. 

For each row in the reader, what am I going to do? Well, at the moment, I'm going to do this. I'm going to append to my students list the following dictionary, a dictionary that has a name whose value is the current row's first column, and whose house, or rather, home now is the row's second. column. 

Now, it's worth noting that the reader for each line in the file, indeed, returns to me a row. But it returns to me a row that's a list, which is to say that the first element of that list is going to be the student's name, as before. The second element of that list is going to be the student's home, as now before. 

But if I want to access each of those elements, remember that lists are 0 indexed. We start counting at 0 and then 1, rather than 1 and then 2. So if I want to get at the student's name, I use row, bracket, 0. And if I want to get at the student's home, I use row, bracket, 1. 

But in my for loop, we can do that same unpacking as before. If I know the CSV is only going to have two columns, I could even do this-- for name, home in reader. And now I don't need to use list notation. I can unpack things all at once and say, name here, and home here. The rest of my code can stay exactly the same because, what am I doing now on line 8? 

I'm still constructing the same dictionary as before, albeit for homes instead of houses. And I'm grabbing those values now, not from the file itself and my use of split, but the reader. And again, what the reader is going to do is figure out, where are those commas, where are the quotes? And just solve that problem for you. 

So let me go now down to my terminal window and run python of students.py, and hit Enter. And now we see successfully, sorted no less, that Draco is from Malfoy Manor. Harry is from Number Four, comma, Privet Drive. And Ron is from The Burrow. Questions now on this technique of using CSV reader from that CSV module, which, again, is just getting us out of the business of reading each line ourself and reading each of those commas and splitting? 

AUDIENCE: So my questions are related to something in the past. I recognize that you are reading a file every time-- well, we assume that we have the CSV file to hand already in this case. Is it possible to make a file readable and writable? So in this case, you could write such stuff to the file, but then at the same time, you could have another function that reads through the file and does changes to it as you go along? 

DAVID MALAN: A really good question. And the short answer is, yes. However, historically, the mental model for a file is that of a cassette tape. Years ago, not really in use anymore, but cassette tapes are sequential whereby they start at the beginning, and if you want to get to the end, you kind of have to unwind the tape to get to that point. 

The closest analog nowadays would be something like Netflix or any streaming service, where there's a scrubber that you have to go left to right. You can't just jump there or jump there. You don't have random access. 

So the problem with files, if you want to read and write them, you or some library needs to keep track of where you are in the file so that if you're reading from the top and then you write at the bottom, and you want to start reading again, you seek back to the beginning. So it's not something we'll do here in class. It's more involved, but it's absolutely doable. For our purposes, we'll generally recommend, read the file. And then if you want to change it, write it back out, rather than trying to make more piecemeal changes, which is good if, though, the file is massive, and it would just be very expensive time-wise to change the whole thing. Other questions on this CSV reader? 

AUDIENCE: It's possible to write a paragraph in that file? 

DAVID MALAN: Absolutely. Right now, I'm writing very small strings, just names or houses, as I did before. But you can absolutely write as much text as you want, indeed. Other questions on CSV reader? 

AUDIENCE: Can a user chose himself a key? Like, input key will be a name or code. 

DAVID MALAN: So short answer, yes, we could absolutely write a program that prompts the user for a name and a home, a name and a home. And we could write out those values. And in a moment, we'll see how you can write to a CSV file. For now, I'm assuming, as the programmer who created students.csv, that I know what the columns are going to be. And therefore, I'm naming my variables accordingly. 

However, this is a good segue to one final feature of reading CSVs, which is that you don't have to rely on either getting a row as a list and using bracket 0 or bracket 1, and, you don't have to unpack things manually in this way. We could actually be smarter and start storing the names of these columns in the CSV file itself. And in fact, if any of you have ever opened a spreadsheet file before, be it in Excel, Apple Numbers, Google Spreadsheets or the like, odds are, you've noticed that the first row, very frequently, is a little different. It actually is boldface sometimes, or it actually contains the names of those columns, the names of those attributes below. 

And we can do this here. In students.csv, I don't have to just keep assuming that the student's name is first and that the student's home is second. I can explicitly bake that information into the file just to reduce the probability of mistakes down the road. 

I can literally use the first row of this file and say, name, comma, home. So notice that name is not literally someone's name, and home is not literally someone's home. It is literally the words, name and home, separated by comma. 

And if I now go back into students.py and don't use CSV reader, but instead, I use a dictionary reader, I can actually treat my CSV file even more flexibly, not just for this, but for other examples too. Let me do this. Instead of using a CSV reader, let me use a CSV dict reader, which will now iterate over the file top to bottom, loading in each line of text not as a list of columns but as a dictionary of columns. 

What's nice about this is that it's going to give me automatic access now to those columns' names. I'm going to revert to just saying, for row in reader, and now I'm going to append a name and a home. But how am I going to get access to the current row's name and the current row's home? Well, earlier, I used bracket 0 for the first and bracket 1 for the second when I was using a reader. 

A reader returns lists. A dict reader or dictionary reader returns dictionaries, one at a time. And so if I want to access the current row's name, I can say, row, quote/unquote, name. 

I can say here for home, row, quote/unquote, home. And I now have access to those same values. The only change I had to make, to be clear, was in my CSV file, I had to include, on the very first row, little hints as to what these columns are. 

And if I now run this code, I think it should behave pretty much the same-- python of students.py. And indeed, we get the same sentences. But now my code is more robust against changes in this data. If I were to open the CSV file in Excel, or Google Spreadsheets, or Apple Numbers, and for whatever reason change the columns around, maybe this is a file that you're sharing with someone else, and just because, they decide to sort things differently left to right by moving the columns around, previously, my code would have broken because I was assuming that name is always first, and home is always second. 

But if I did this-- be it manually in one of those programs or here-- home, comma, name, and suppose, I reversed all of this. The home comes first, followed by Harry, The Burrow, then by Ron, and then lastly, Malfoy Manor, then Draco, notice that my file is now completely flipped. The first column is now the second, and the second's the first. But I took care to update the header of that file, the first row. 

Notice my Python code, I'm not going to touch it at all. I'm going to rerun python of students.py, and hit Enter. And it still just works. And this, too, is an example of coding defensively. What if someone changes your CSV file, your data file? 

Ideally, that won't happen. But even if it does now, because I'm using a dictionary reader that's going to infer from that first row for me what the columns are called, my code just keeps working. And so it keeps getting, if you will, better and better. Any questions now on this approach? 

AUDIENCE: Yeah, what is the importance of new line in the CSV file? 

DAVID MALAN: What's the importance of the new line in the CSV file? It's partly a convention. In the world of text files, we humans have just been, for decades, in the habit of storing data line by line. It's visually convenient. It's just easy to extract from the file because you just look for the new lines. 

So the new line just separates some data from some other data. We could use any other symbol on the keyboard, but it's just common to hit Enter to just move the data to the next line. Just a convention. Other questions? 

AUDIENCE: It seems to be working fine if you just have name and home. I'm wondering what will happen if you want to put in more data. Say, you wanted to add a house to both the name and the home. 

DAVID MALAN: Sure, if you wanted to add the house back-- so if I go in here and add house last, and I go here and say, Gryffindor for Harry, Gryffindor for Ron, and Slytherin for Draco, now I have three columns, effectively, if you will-- home on the left, name in the middle, house on the right, each separated by commas with weird things, like Number Four, comma, Privet Drive still quoted. Notice, if I go back to students.py, and I don't change the code at all and run python of students.py, it still just works. And this is what's so powerful about a dictionary reader. 

It can change over time. It can have more and more columns. Your existing code is not going to break. 

Your code would break, would be much more fragile, so to speak, if you were making assumptions like, the first column's always going to be name. The second column is always going to be house. Things will break fast if those assumptions break down-- so not a problem in this case. 

Well, let me propose that, besides reading CSVs, let's at least take a peek at how we might write a CSV too. If you're writing a program in which you want to store not just students' names, but maybe their homes as well in a file, how can we keep adding to this file? Let me go ahead and delete the contents of students.csv and just re-add a single simple row, name, comma, home, so as to anticipate inserting more names and homes into this file. And then let me go to students.py, and let me just start fresh so as to write out data this time. 

I'm still going to go ahead and Import CSV. I'm going to go ahead now and prompt the user for their name-- so input, quote/unquote, What's your name? And I'm going to go ahead and prompt the user for their home-- so home equals input, quote/unquote, Where's your home? 

Now I'm going to go ahead and open the file, but this time for writing instead of reading, as follows-- with open, quote/unquote, students.csv. I'm going to open it in append mode so that I keep adding more and more students and homes to the file, rather than just overwriting the entire file itself. And I'm going to use a variable name of file. 

I'm then going to go ahead and give myself a variable called writer, and I'm going to set it equal to the return value of another function in the CSV module called csv.writer. And that writer function takes as its sole argument the file variable there. Now I'm going to go ahead and just do this. I'm going to say, writer.writerow, and I'm going to pass into writerow the line that I want to write to the file specifically as a list. So I'm going to give this a list of name, comma, home, which, of course, are the contents of those variables. 

Now I'm going to go ahead and save the file. I'm going to go ahead and rerun python of students.py, hit Enter. And what's your name? Well, let me go ahead and type in Harry as my name and Number Four, comma, Privet Drive, Enter. Now notice, that input itself did have a comma. And so if I go to my CSV file now, notice that it's automatically been quoted for me so that subsequent reads from this file don't confuse that comma with the actual comma between Harry and his home. 

Well, let me go ahead and run it a couple of more times. Let me go ahead and rerun python of students.py. Let me go ahead and input this time Ron and his home as The Burrow. Let's go back to students.csv to see what it looks like. Now we see Ron, comma, The Burrow has been added automatically to the file. 

And let's do one more-- python of students.py, Enter. Let's go ahead and give Draco's name and his home, which would be Malfoy Manor, Enter. And if we go back to students.csv, now, we see that Draco is in the file itself. And the library took care of not only writing each of those rows, per the function's name. It also handled the escaping, so to speak, of any strings that themselves contained a comma, like Harry's own home. 

Well, it turns out, there's yet another way we could implement this same program without having to worry about precisely that order again and again and just passing in a list. It turns out, if we're keeping track of what's the name and what's the home, we could use something like a dictionary to associate those keys with those values. So let me go ahead and back up and remove these students from the file, leaving only the header row again-- name, comma, home. 

And let me go over to students.py. And this time, instead of using CSV writer, I'm going to go ahead and use csv.DictWriter, which is a dictionary writer, that's going to open the file in much the same way. But rather than write a row as this list of name, comma, home, what I'm now going to do is follows. I'm going to first output an actual dictionary, the first key of which is name, colon, and then the value thereof is going to be the name that was typed in. 

And I'm going to pass in a key of home, quote/unquote, the value of which, of course, is the home that was typed in. But with DictWriter, I do need to give it a hint as to the order in which those columns are when writing it out so that, subsequently, they could be read, even if those orderings change. Let me go ahead and pass in fieldnames, which is a second argument to DictWriter, equals, and then a list of the actual columns that I know are in this file, which, of course, are name, comma, home. Those times, in quotes because that's, indeed, the string names of the columns, so to speak, that I intend to write to in that file. 

All right, now let me go ahead and go to my terminal window, run python of students.py. This time, I'll type in Harry's name again. I'll, again, type in Number Four, comma, Privet Drive, Enter. 

Let's now go back to students.csv. And voila, Harry is back in the file, and it's properly escaped or quoted. I'm sure that if we do this again with Ron and The Burrow, and let's go ahead and run it one third time with Draco and Malfoy Manor, Enter. 

Let's go back to students.csv. And via this dictionary writer, we now have all three of those students as well. So whereas with CSV writer, the onus is on us to pass in a list of all of the values that we want to put from left to right, with a dictionary writer, technically, they could be in any order in the dictionary. In fact, I could just have correctly done this, passing in home followed by name. 

But it's a dictionary. And so the ordering in this case does not matter so long as the key is there and the value is there. And because I have passed in field names as the second argument to DictWriter, it ensures that the library knows exactly which column contains name or home, respectively. Are there any questions now on dictionary reading, dictionary writing, or CSVs more generally? 

AUDIENCE: In any specific situation for me to use a single quotation or double quotation? Because after the print, we use single quotation to represent the key of the dictionary. But after the reading or writing, we use the double quotation. 

DAVID MALAN: It's a good question. In Python, you can generally use double quotes, or you can use single quotes. And it doesn't matter. 

You should just be self-consistent so that stylistically your code looks the same all throughout. Sometimes, though, it is necessary to alternate. If you're already using double quotes, as I was earlier for a long f string, but inside that f string, I was interpolating the values of some variables using curly braces, and those variables were dictionaries. 

And in order to index into a dictionary, you use square brackets and then quotes. But if you're already using double quotes out here, you should generally use single quotes here, or vise versa. But otherwise, I'm in the habit of using double quotes everywhere. Others are in the habit of using single quotes everywhere. It only matters sometimes if one might be confused for the other. Other questions on dictionary writing or reading? 

AUDIENCE: Yeah, my question is, can we use multiple CSV files in any program? 

DAVID MALAN: Absolutely. You can use as many CSV files as you want. And it's just one of the formats that you can use to save data. Other questions on CSVs or File I/O? 

AUDIENCE: Thanks for taking my question. So when you're reading from the file as a dictionary, you had the fields called. When you're reading, couldn't you just call the row? the previous version of the students.py file, when you're reading each row, you were splitting out the fields by name. Yeah, so when you're appending to the students list, couldn't you just call for row and reader, students.append row, rather than naming each of the fields? 

DAVID MALAN: Oh, very clever. Short answer, yes, in so far as DictReader returns one dictionary at a time, when you loop over it, row is already going to be a dictionary. So yes, you could actually get away with doing this. And the effect would really be the same in this case. Good observation. How about one more question on CSVs? 

AUDIENCE: Yeah, when reading in CSVs from my past work with data, a lot of things can go wrong. I don't know if it's a fair question that you can answer in a few sentences. But are there any best practices to double check that no mistakes occurred? 

DAVID MALAN: It's a really good question. And I would say, in general, if you're using code to generate the CSVs and to read the CSVs, and you're using a good library, theoretically, nothing should go wrong. It should be 100% correct if the libraries are 100% correct. 

You and I tend to be the problem. When you let a human touch the CSV, or when Excel, or Apple Numbers, or some other tools involved that might not be aligned with your code's expectations, things then, yes, can break. The goal-- sometimes, honestly, the solution is manual fixes. 

You go in and fix the CSV, or you have a lot of error checking, or you have a lot of try, except just to tolerate mistakes in the data. But generally, I would say, if you're using CSV or any file format internally to a program to both read and write it, you shouldn't have concerns there. You and I, the humans, are the problem, generally speaking-- and not the programmers, the users of those files, instead. 

All right, allow me to propose that we leave CSVs behind but to note that they're not the only file format you can use in order to read or write data. In fact, they're a popular format, as is just raw text files-- .txt files. But you can store data, really, any way that you want. We've just picked CSVs because it's representative of how you might read and write from a file and do so in a structured way, where you can somehow have multiple keys, multiple values all in the same file without having to resort to what would be otherwise known as a binary file. 

So a binary file is a file that's really just zeros and ones. And they can be laid out in any pattern you might want, particularly if you want to store not textual information, but maybe graphical, or audio, or video information as well. So it turns out that Python is really good when it comes to having libraries for, really, everything. 

And in fact, there's a popular library called pillow that allows you to navigate image files as well and to perform operations on image files. You can apply filters, a la Instagram. You can animate them as well. And so what I thought we'd do is leave behind text files for now and tackle one more demonstration, this time, focusing on this particular library and image files instead. 

So let me propose that we go over here to VS Code and create a program, ultimately, that creates an animated GIF. These things are everywhere nowadays in the form of memes, and animations, and stickers, and the like. And an animated GIF is really just an image file that has multiple images inside of it. 

And your computer or your phone shows you those images, one after another, sometimes on an endless loop, again and again. And so long as there's enough images, it creates the illusion of animation because your mind and mine kind of fills in the gaps visually and just assumes that if something is moving, even though you're only seeing one frame per second, or some sequence thereof, it looks like an animation. So it's like a simplistic version of a video file. 

Well, let me propose that we start with maybe a couple of costumes from another popular programming language. And let me go ahead and open up my first costume here, number 1. So suppose here that this is a costume or, really, just a static image here, costume1.gif. And it's just a static picture of a cat, no movement at all. 

Let me go ahead now and open up a second one, costume2.gif, that looks a little bit different. Notice-- and I'll go back and forth-- this cat's legs are a little bit aligned differently so that this was version 1, and this was version 2. Now, these cats come from a programming language from MIT called scratch that allows you, very graphically, to animate all this and more. But we'll use just these two static images, costume1 and costume2 to create our own animated GIF that, after this, you could text to a friend or message them, much like any meme online. 

Well, let me propose that we create this animated GIF, not by just using some off-the-shelf program that we downloaded, but by writing our own code. Let me go ahead and run code of costumes.py and create our very own program that's going to take, as input, two or even more image files and then generate an animated GIF from them by essentially creating this animated GIF by toggling back and forth endlessly between those two images. 

Well, how am I going to do this? Well, let's assume that this will be a program called costumes.py that expects two command line arguments, the names of the files, the individual costumes that we want to animate back and forth. So to do that, I'm going to import sys so that we ultimately have access to sys.argv. I'm then, from this pillow library, going to import support for images specifically. So from PIL import Image-- capital I, as per the library's documentation. 

Now I'm going to give myself an empty list called images, just so I have a list in which to store one, or two, or more of these images. And now let me do this. For each argument in sys.argv, I'm going to go ahead and create a new image variable, set it equal to this Image.open function, passing in arg. Now, what is this doing? 

I'm proposing that, eventually, I want to be able to run python of costumes.py, and then as command line argument, specify costume1.gif, space, costume2.gif. So I want to take in those file names from the command line as my arguments. So what am I doing here? Well, I'm iterating over sys.argv all of the words in my command line arguments. I'm creating a variable called image, and I'm passing to this function, Image.open from the pillow library, that specific argument. And that library is essentially going to open that image in a way that gives me a lot of functionality for manipulating it, like animating. 

Now I'm going to go ahead and append to my images list that particular image. And that's it. So this loop's purpose in life is just to iterate over the command line arguments and open those images using this library. The last line is pretty straightforward. I'm going to say this. 

I'm going to grab the first of those images, which is going to be in my list at location 0, and I'm going to save it to disk. That is, I'm going to save this file. Now, in the past when we use CSVs or text files, I had to do the file opening. 

I had to do the file writing, maybe even the closing. I don't need to do that with this library. The pillow library takes care of the opening, the closing, and the saving for me by just calling save. 

I'm going to call this save function. And just to leave space, because I have a number of arguments to pass, I'm going to move to another line so it fits. I'm going to pass in the name of the file that I want to create, costumes.gif-- that will be the name of my animated GIF. I'm going to tell this library to save all of the frames that I pass to it-- so the first costume, the second costume, and even more if I gave them. 

I'm going to then append to this first image-- the images 0-- the following images, equals this list of images. And this is a bit clever, but I'm going to do this. I want to append the next image there, images[1]. And now I want to specify a duration of 200 milliseconds for each of these frames, and I want this to loop forever. And if you specify loop=0, that is time 0, it means it's just not going to loop a finite number of times, but an infinite number of times instead. 

And I need to do one other thing. Recall that sys.argv contains not just the words I typed after my program's name, but what else does sys.argv contain? If you think back to our discussion of command line arguments, what else is sys.argv besides the words I'm about to type, like costume1.gif and costume2? 

AUDIENCE: Yeah, so we'll actually get the original name of the program we want to run, the costumes.py. 

DAVID MALAN: Indeed, we'll get the original name of the program, costumes.py in this case, which is not a GIF, obviously. So remember that using slices in Python, we can do this. If sys.argv is a list, and we want to get a slice of that list, everything after the first element, we can do 1, colon, which says, start it location 1, not 0, and take a slice all the way to the end. So give me everything except the first thing in that list, which, to McKenzie's point, is the name of the program. 

Now, if I haven't made any mistakes, let's see what happens. I'm going to run python of costumes.py, and now I'm going to specify the two images that I want to animate-- so costume1.gif and costume2.gif. What is the code now going to do? Well, to recap, we're using the sys library to access those command line arguments. We're using the pillow library to treat those files as images and with all the functionality that comes with that library. I'm using this images list just to accumulate all of these images, one at a time from the command line. 

And in lines 7 through 9, I'm just using a loop to iterate over all of them and just add them to this list after opening them with the library. And the last step, which is really just one line of code broken onto three so that it all fits, I'm going to save the first image, but I'm asking the library to append this other image to it as well-- not bracket 0, but bracket 1. And if I had more, I could express those as well. 

I want to save all of these files together. I want to pause 200 milliseconds-- a fifth of a second in between each frame. And I want it to loop infinitely many times. 

So now if I cross my fingers as always, hit Enter, nothing bad happened, and that's almost always a good thing. Let me now run code of costumes.gif to open up in VS Code the final image. And what I think I should see is a very happy cat? And indeed. 

So now we've seen not only that we can read and write files, be it textually. We can read and now write files that are binary zeros and ones. We've just scratched the surface. This is using the library called pillow. But ultimately, this is going to give us the ability to read and write files however we want. 

So we've now seen that via File I/O, we can manipulate not just textual files, be it TXT files, or CSVs, but even binary files as well. In this case, they happen to be images. But if we dived in deeper, we could explore audio, and video, and so much more all by way of these simple primitives, this ability, somehow, to read and write files. That's it for now. We'll see you next time. 

# lecture7-Regular Expressions

[ORCHESTRA TUNING] [MUSIC PLAYING] 

DAVID MALAN: All right. This is CS50's Introduction to Programming with Python. My name is David Malan, and this is our week on regular expressions. So a regular expression, otherwise known as a regex, is really just a pattern. And indeed, it's quite common in programming to want to use patterns to match on some kind of data, often user input. 

For instance, if the user types in an email address, whether to your program, or a website, or an app on your phone, you might ideally want to be able to validate that they did indeed type in an email address and not something completely different. So using regular expressions, we're going to have the newfound capability to define patterns in our code to compare them against data that we're receiving from someone else, whether it's just to validate it, or, heck, even if we want to clean up a whole lot of data that itself might be messy because it, too, came from us humans. 

Before, though, we use these regular expressions, let me propose that we solve a few problems using just some simpler syntax and see what kind of limitations we run up against. Let me propose that I open up VS Code here, and let me create a file called validate.py, the goal at hand being to validate, how about just that, a user's email address. They've come to your app, they've come to your website, they type in their email address, and we want to say yes or no, this email address looks valid. 

All right. Let me go ahead and type code of validate.py to create a new tab here. And then within this tab, let me go ahead and start writing some code, how about, that keeps things simple initially. First, let me go ahead and prompt the user for their email address. And I'll store the return value of input in a variable called email, asking them "what's your email?" question mark. 

I'm going to go ahead and preemptively at least clean up the user's input a little bit by minimally just calling strip at the end of my call to input, because recall that input returns a string or a str. strs come with some built-in methods or functions, one of which is strip, which has the effect of stripping off any leading whitespace to the left or any trailing whitespace to the right. So that's just going to go ahead and at least avoid the human having accidentally typed in a space character. We're going to throw it away just in case. 

Now I'm going to do something simple. For a user's input to be an email address, I think we can all agree that it's got a minimal we have an @ sign somewhere in it. So let's start simple. If the user has typed in something with an @ sign, let's very generously just say, OK, valid, looks like an email address. And if we're missing that @ sign, let's say invalid, because clearly it's not an email address. It's not going to be the best version of my code yet, but we'll start simple. 

So I'm going to ask the question, if there is an @ symbol in the user's email address, go ahead and print out, for instance, quote, unquote, "valid." Else, if there's not, now I'm pretty confident that the email address is, in fact, invalid. 

Now, what is this code doing? Well, if @ sign in email is a Pythonic way of asking is this string quote, unquote "@" in this other string email, no matter where it is-- at the beginning, the middle, or the end. It's going to automatically search through the entire string for you automatically. I could do this more verbosely. 

And I could use a for loop or a while loop and look at every character in the user's email address, looking to see if it's an @ sign. But this is one of the things that's nice about Python. You can do more with less. So just by saying if "@" quote, unquote in email, we're achieving that same result. We're going to get back true if it's somewhere in there, thus valid, or false if it is not. 

Well, let me go ahead now and run this program in my terminal window with python of validate.py. And I'm going to go ahead and give it my email address-- malan@harvard.edu, Enter. And indeed, it's valid. Looks valid, is valid. 

But of course, this program is technically broken. It's buggy. What would be an example input, if someone might like to volunteer an answer here, that would be considered valid but you and I know it really isn't valid? 

AUDIENCE: Yeah, thank you. Well, for instance, you can type just two signs and that's it, and it'll still be valid-- still be valid according to your program, but missing something. 

DAVID MALAN: Exactly. We've set a very low bar here. In fact, if I go ahead and rerun python of validate.py, and I'll just type in one @ sign, that's it-- no username, no domain name, this doesn't really look like an email address. But unfortunately, my code thinks it, in fact, is, because it's obviously just looking for an @ sign alone. 

Well, how could we improve this? Well, minimally an email address, I think, tends to have, though this is not actually a requirement, tends to have an @ sign and a single dot at least, maybe somewhere in the domain name-- so malan@harvard.edu. So let's check for that dot as well. But again, strictly speaking it doesn't even have to be that case. But I'm going for my own email address, at least for now, as our test case. 

So let me go ahead and change my code now and say, not only if @ is in email, but also dot is in email as well. So I'm asking now two questions. I have two Boolean expressions-- if @ in email, and I'm anding them together logically-- this is a logical and, so to speak. So if it's the case that @ is in email and dot is in email, OK, now I'm going to go ahead and say valid. 

All right. This would still seem to work for my email address. Let me go ahead and run python validate.py, malan@harvard.edu, Enter, and that, of course, is valid is expected. But here, too, we can be a little adversarial and type in something nonsensical like "@." and unfortunately, that, too, is going to be mistaken as valid, even though there's still no username, domain name, or anything like that. 

So I think we need to be a little more methodical here. In fact, notice that if I do this like this, the @ sign can be anywhere, and the dot can be anywhere. But if I'm assuming the user is going to have a traditional domain name like harvard.edu or gmail.com, I really want to look for the dot in the domain name only, not necessarily just the username. 

So let me go ahead and do this. Let me go ahead and introduce a bit more logic here, and instead do this. Let me go ahead and do email.split of quote, unquote @ sign. So email, again, is a string or a str. strs come with methods, not just strip but also another one called split that, as the name implies, will split one str into multiple ones if you give it a character or more to split on. 

So this is hopefully going to return to me two parts from a traditional email address, the username and the domain name. And it turns out I can unpack that sequence of responses by doing this-- username comma domain equals this. I could store it in a list or some other structure, but if I already know in advance what kinds of values I'm expecting, a username and hopefully a domain, I'm going to go ahead and do it like this instead and just define two variables at once on one line of code. 

And now I'm going to be a little more precise. If username-- if username, then I'm going to go ahead and say, print "valid." Else, I'm going to go ahead and say print "invalid." Now, this isn't good enough. But I'm at least checking for the presence of a username now. And you might not have seen this before, but if you simply ask a question like "if username," and username is a string, well, username-- "if username" is going to give me a true answer if username is anything except none or quote, unquote "nothing." 

So there's a truthy value here, whereby if username has at least one character, that's going to be considered true. But if username has no characters, it's going to be considered a false value effectively. But this isn't good enough. I don't want to just check for username. I want to also check that it's the case that dot is in the domain name as well. 

So notice here there's a bit of potential confusion with the English language. Here, I seem to be saying "if username and dot in domain," as though I'm asking the question, "if the username and the dot are in the domain," but that's not what this means. These are two separate Boolean expressions-- "if username," and separately, "if dot in domain." And if I parenthesis this, we could make that even more clear by putting parentheses there, parentheses here. So just to be clear, it's really two Boolean expressions that we're anding together, not one longer English-like sentence. 

Now, if I go ahead and run this, python validate.py Enter, I'll do my own email address again, malan@harvard.edu, and that's valid. And it looks like I could tolerate something like this. If I do malan@, just say, harvard, I think at the moment this is going to be invalid. Now, maybe the top-level domain harvard exists. But at the moment, it looks like we're looking for something more. We're looking for a top-level domain too, like .edu. For now, we'll just consider this to be invalid. 

But it's not just that we want to do-- it's not just that we want to check for the presence of a username and the presence of a dot. Let's be more specific. Let's start to now narrow the scope of this program, not just to be about generic emails more generally, but about edu addresses, so specifically for someone in a US university, for instance, whose email address tends to end with .edu. I can be a little more precise. And you might recall this function already. Instead of just saying, is there a dot somewhere in domain, let me instead say, and the domain ends with quote, unquote ".edu." 

Now we're being even more precise. We want there to be minimally a username that's not empty-- it's not just quote, unquote "nothing"-- and we want the domain name to actually end with .edu. Let me go ahead and run python of validate.py. And just to make sure I haven't made things even worse, let me at least test my own email address, which does seem to be valid. 

Now, it seems that I minimally need to provide a username, because we definitely do have that check in place. So I'm going to go ahead and say malan. And now I'm going to go ahead and say @. And it looks like I could be a little malicious here, just say malan@.edu, as though minimally meeting the requirements of this pattern. And that, of course, is considered valid, but I'm pretty sure there's no one at malan@.edu. We need to have some domain name in there. So we're still not being quite as generous. 

Now, we could absolutely continue to iterate on this program, and we could add some more Boolean expressions. We could maybe use some other Python methods for checking more precisely is there something to the left of the dot, to the right of the dot. We could use split multiple times. 

But honestly, this just escalates quickly. Like, you end up having to write a lot of code just to express something that's relatively simple in spirit-- just format this like an email address. So how can we go about improving this? 

Well, it turns out in Python there's a library for regular expressions. It's called succinctly R-E. And in the re library, you have a lot of capabilities to define and check for and even replace patterns. Again, a regular expression is a pattern. And this library, the re library in Python, is going to let us define some of these patterns, like a pattern for an email address, and then use some built-in functions to actually validate a user's input against that pattern or even use these patterns to change the user's input or extract partial information therefrom. We'll see examples of all this and more. 

So what can and should I do with this library? Well, first and foremost, it comes with a lot of functionality. Here is the URL, for instance, to the official documentation. And let me propose that we focus on using one of the most versatile functions in the library, namely this-- search. 

re.search is the name of the function and the re module that allows you to pass in a few arguments. The first is going to be a pattern that you want to search for in, for instance, a string that came from a user. The string argument here is going to be the actual string that you want to search for that pattern. And then there's a third argument optionally that's a whole bunch of flags. 

A flag in general is like a parameter you can pass in to modify the behavior of the function. But initially, we're not even going to use this. We're just going to pass in a couple of arguments instead. 

So let me go ahead and employ this re library, this regular expression library, and just improve on this design incrementally. So we're not going to solve this problem all at once, but we'll take some incremental steps. 

I'm going to go back to VS Code here. And I'm going to go ahead now and get rid of most of this code. But I'm going to go into the top of my file and first of fall, import this re library. So import re gives me access to that function and more. 

Now, after I've gotten the user's input in the same way as before, stripping off any leading or trailing whitespace, I'm just going to use this function super trivially for now, even though this isn't really a big step forward. I'm going to say, if re.search contains quote, unquote "@" in the email address, then let's go ahead and print "valid." Else, let's go ahead and print "invalid." 

At the moment, this is really no better than my very first version where I was just asking Python, if @ sign in the email address. But now I'm at least beginning to use this library by using its own re.search function, which for now you can assume returns a true value effectively if, indeed, the @ sign is an email. 

Just to make sure that this version does work as I expect, let me go ahead and run python of validate.py and Enter. I'll type in my actual email address, and we're back in business. But of course, this is not great, because if I similarly run this version of the program and just type in an @ sign, not an email address, and yet my code, of course, thinks it is valid. 

So how can I do better than this? Well, we need a bit more vocabulary in the realm of regular expressions, in order to be able to express ourselves a little more precisely. Really, the pattern I want to ultimately define is going to be something like, I want there to be something to the left, then an @ sign, then something to the right. And that something to the right should end with .edu but should also have something before the .edu, like Harvard, or Yale, or any other school in the US as well. 

Well, how can I go about doing this? Well, it turns out that in the world of regular expressions, whether in Python or a lot of other languages as well, there are certain symbols that you can use to define patterns. At the moment, I've just used literal raw text. 

If I go back to my code here, this technically qualifies as a regular expression. I've passed in a quoted string inside of which is an @ sign. Now, that's not a very interesting pattern. It's just an @ sign. But it turns out that once you have access to regular expressions or a library that offers that feature, you can more powerfully express yourself as follows. 

Let me reveal that the pattern that you pass to re.search can take a whole bunch of special symbols. And here's just some of them. In the examples we're about to see, in the patterns we're about to define, here are the special symbols. You can use a single period, a dot, to just represent any character except a newline, a blank line. 

So that is to say, if I don't really care what letters of the alphabet are in the user's username, I just want there to be one or more characters in the user's name, dot allows me to express A through z, uppercase and lowercase, and a bunch of other letters as well. 

* is going to mean-- a single asterisk-- zero or more repetitions. So if I say something *, that means that I'm willing to accept either zero repetitions, that is, nothing at all, or more repetitions-- 1, or 2, or 3, or 300. 

If you see a plus in my pattern, so that's going to mean one or more repetitions. That is to say, there's got to be at least one character there, one symbol, and then there's optionally more after that. And then you can say zero or one repetition. You can use a single question mark after a symbol, and that will say, I want zero of this character or one, but that's all I'll expect. 

And then lastly, there's going to be a way to specify a specific number of symbols. If you use these curly braces and a number, represented here symbolically as m, you can specify that you want m repetitions, be it 1, or 2, or 3, or 300. You can specify the number of repetitions yourself. And if you want a range of repetitions, like you want this few characters or this many characters, you can use curly braces and two numbers inside, called here m and n, which would be a range of m through n repetitions. 

Now, what does all of this mean? Well, let me go back to VS Code here, and let me propose that we iterate on this solution further. It's not sufficient to just check for the @ sign. We know that already. We minimally want something to the left and to the right. 

So how can I represent that? I don't really care what the user's username is, or what letters of the alphabet are in it, be it malan or anyone else's. So what I'm going to do to the left of this equal sign is I'm going to use a single period-- the dot that, again, indicates any character except for a newline. 

But I don't just want a single character. Otherwise, the person's username could only a at such and such, or b at such and such. I want it to be multiple such characters. So I'm going to initially use a *. So dot * means give me something to the left, and I'm going to do another one, dot * something to the right. 

Now, this isn't perfect, but it's at least a step forward. Because now what I'm going to go ahead and do is this. I'm going to rerun python of validate.py. And I'm going to keep testing my own email address just to make sure I haven't made things worse. And that's now OK. 

I'm now going to go ahead and type in some other input, like how about just malan@ with no domain name whatsoever. And you would think this is going to be invalid. But, but, but it's still considered valid. But why is that? 

If I go back to this chart, why is malan@ with no domain now considered valid? What's my mistake here by having used .*@.* as my regular expression or regex? 

AUDIENCE: Because you're using the * instead of the plus sign. 

DAVID MALAN: Exactly. The *, again, means zero or more repetitions. So re.search is perfectly happy to accept nothing after the @ sign, because that would be zero repetitions. So I think I minimally need to evolve this and go back to my code here. 

And let me go ahead and change this from dot * to dot +. And let me change the ending from dot * to dot + so that now when I run my code here-- let me go ahead and run python of validate.py. I'm going to test my email address as always. Still working. 

Now let me go ahead and type in that same thing from before that was accidentally considered valid. Now I hit Enter, finally it's invalid. So now we're making some progress on being a little more precise as to what it is we're doing. 

Now, I'll note here, like with almost everything in programming, Python included, there's often multiple ways to solve the same problem. And does anyone see a way in my code here that I can make a slight tweak if I forgot that the plus operator exists and go back to using a *? If I allowed you only to use dots and only stars, could you recreate the notion of plus? 

AUDIENCE: Yes. Use another dot, dot dot *. 

DAVID MALAN: Yeah. Because if a dot means any character, we'll just use a dot. And then when you want to say "or more," use another dot and then the *. So equivalent to dot + would have been dot dot *, because the first dot means any character, and the second pair of characters, dot *, means zero or more other characters. 

And to be clear, it doesn't have to be the same character. Just by doing dot or dot * does not mean your whole username needs to be a, or aa, or aaa, or aaaa. It can vary with each symbol. It just means zero or more of any character back to back. 

So I could do this on both the left and the right. Which one is better? You know, it depends. I think an argument could be made that this is even more clear, because it's obvious now that there's a dot, which means any character, and then there's the dot *. 

But if you're in the habit of doing this frequently, one of the reasons things like the plus exist is just to consolidate your code into something a little more succinct. And if you're familiar with seeing the plus now, maybe this is more readable to you. So again, just like with Python more generally, you're going to often see different ways to express the same patterns, and reasonable people might agree or disagree as to which way is better than another. 

Well, let me propose to you that we can think about both of these models a little more graphically. If this looks a little cryptic to you, let me go ahead and rewind to the previous incarnation of this regular expression, which was just a single dot *. 

This regular expression, .*@.* means what again? It means zero or more characters followed by a literal @ sign followed by zero or more other characters. Now when you pass this pattern in as an argument to re.search, it's going to read it from left to right and then use it to try to match against the input, email, in this case, that the user typed in. 

Now, how is the computer, how is re.search going to keep track of whether or not the user's email matches this pattern? Well, it turns out that it's going to be using a machine of sorts implemented in software known as a finite state machine, or more formally, a nondeterministic finite automaton. 

And the way it works, if we depict this graphically, is as follows. The re.search function starts over here in a so-called start state. That's the sort of condition in which it begins. And then it's going to read the user's email address from left to right. And it's going to decide whether or not to stay in this first state or transition to the next state. 

So for instance, in this first state, as the user is reading my email address, malan@harvard.edu, it's going to follow this curved edge up and around to itself, a reflexive edge. And it's labeled dot, because dot, again, just means any character. So as the function is reading my email address, malan@harvard.edu, from left to right, it's going to follow these transitions as follows, M-A-L-A-N. 

And then it's hopefully going to follow this transition to the second state, because there's a literal @ sign both in this machine as well as in my email address. Then it's going to try to read the rest of my address, H-A-R-V-A-R-D dot E-D-U, and that's it. 

And then the computer is going to check. Did it end up in an accept state, a final state, that's actually depicted here pictorially a little differently with double circles, one inside of the other? And that just means that if the computer finds itself in that second accept state after having read all of the user's input, it is, indeed, a valid email address. If by some chance, the machine somehow ended up stuck in that first state, which does not have double circles and is therefore not an accept state, the computer would conclude this is an invalid email address instead. 

By contrast, if we go back to my other your version of the code where I instead had dot plus on both the left and the right, recall that re.search is going to use one of these state machines in order to decide from left to right whether or not to accept the user's input, like malan@harvard.edu. Can we get from the start state, so to speak, to an accept state to decide, yep, this was, in fact, meeting the pattern? 

Well, let's propose that this nondeterministic finite automaton looked like this instead. We're going to start as before in the leftmost start state, and we're going to necessarily consume one character per this first edge, which is labeled with a dot to indicate that we can consume any one character, like the m in malan@harvard.edu. Then we can spend some time consuming more characters before the @ sign, so the A-L-A-N. 

Then we can consume the @ sign. Then we can consume at least one more character, because recall that the regex has dot plus this time. And then we can consume even more characters if we want. So if we first consume the H in harvard.edu, then leaves the A-R-V-A-R-D, and then dot E-D-U. 

And now here, too, we're at the end of the story, but we're in an accept state, because that circle at the end has two circles total, which means that if the computer, if this function, finds itself in that accept state after reading the entirety of the user's input, it is, too, in fact, a valid email address. If by contrast, we had gotten stuck in one of those other states, unable to follow a transition, one of those edges, and therefore unable to make progress in the user's input from left to right, then we would have to conclude that email address is, in fact, invalid. 

Well, how can we go upon approving this code further? Let me propose now that we check not only for a username and also something after the username, like a domain name, but minimally require that the string ends with .edu as well. Well, I think I could do this fairly straightforward. Not only do I want there to be something after the @ sign, like the domain like Harvard, I want the whole thing to end with .edu. 

But there's a little bit of danger here. What have I done wrong by implementing my regular expression now in this way, by using .+@.+.edu? What could go wrong with this version? 

AUDIENCE: The dot is-- the dot means something else in this context, where it means three or more repetitions of a character, which is why it will interpret it [INAUDIBLE]. 

DAVID MALAN: Exactly. Even though I mean for it to mean literally .edu, a period, and then .edu, unfortunately in the world of regular expressions, dot means any character, which means that this string could technically end in aedu, or bedu, or cedu, and so forth, but that's not, in fact, that I want. 

So any instincts now as to how I could fix this problem? And let me demonstrate the problem more clearly. Let me go ahead and run this code here. Let me go ahead and type in malan@harvard.edu. And as always, this does, in fact, work. 

But watch what happens here. Let me go ahead and do malan@harvard and then-- malan@harvard?edu, Enter, that, too, is valid. So I could put any character there and it's still going to be accepted. But I don't want ?edu. I want .edu literally. 

Any instincts, then, for how we can solve this problem here? How can I get this new function, re.search, and a regular expression more generally, to literally mean a dot, might you think? 

AUDIENCE: You can use the escape character, the backslash? 

DAVID MALAN: Indeed. The so-called escape character, which we've seen before outside of the context of regular expressions when we talked about newlines. Backslash n was a way of telling the computer I want a newline, but without actually literally hitting Enter and moving the cursor yourself. And you don't want a literal n on the screen. So backslash n was a way to escape n and convey that you want a newline. 

It turns out regular expressions use a similar technique to solve this problem here. In fact, let me go into my regular expression. And before that final dot, let me put a single backslash. In the world of regular expressions, this is a so-called special sequence. And it indicates, per this backslash and a single dot, that I literally want to match on a dot. It's not that I want to match on any character and then edu. I want to match on a dot, or a period, edu. 

But we don't want Python to misinterpret this backslash as beginning an escape sequence, something special like backslash n, which even though we as the programmer might type two characters backslash n, it really is interpreted by Python as a single newline. We don't want any kind of misinterpretation like that here. 

So it turns out there's one other thing we should do for regular expressions like this that have a backslash used in this way. I want to specify to Python that I want this string, this regular expression in double quotes, to be treated as a raw string, literally putting an r at the beginning of the string to indicate to Python that you should not try to interpret any backslashes in the usual way. I want to literally pass the backslash and the dot and the edu into this particular function, search, in this case. 

So it's similar in spirit to using that f at the beginning of a format string, which, of course, tells Python to format the string in a certain way, plugging in variables that might be between curly braces. But in this case, r indicates a raw string that I want passed in exactly as is. Now, it's only strictly necessary if you are, in fact, using backslashes to indicate that you want some special sequence, like backslash dot. But in general, it's probably a good habit to get into to just use raw strings for all of your regular expressions so that if you eventually go back in, make a change, make an addition, you don't accidentally introduce a backslash and then forget that that might have some special or misinterpreted meaning. 

Well, let me go ahead and try this new regular expression. I'll clear my terminal window, run python of validate-- run python of validate.py. And then I'll type in my email address correctly, malan@harvard.edu. And that's, fortunately, still valid. 

Let me clear my screen and run it one more time, python of validate.py. And this time, let's mistype it as malan@harvard?edu, whereby there's obviously not a dot there, but there is some other single character that last time was misinterpreted as valid. But this time, now that I've improved my regular expression, it's discovered as, indeed, invalid. 

Any questions now on this technique for matching something to the left of the @ sign, something to the right, and now ending with .edu explicitly? 

AUDIENCE: What happens when user inserts multiple @ signs? 

DAVID MALAN: A good question. And you kind of called me out here. Well, when in doubt, let's try. Let me go ahead and do python of validate.py, malan@@@harvard.edu, which also is incorrect, unfortunately, my code thinks it's valid. So another problem to solve, but a shortcoming for now. 

Other questions on these regular expressions thus far? 

AUDIENCE: Can you use curly brackets m instead of backslash? 

DAVID MALAN: Can you use curly brackets instead of backslash? Not in this case. If you want a literal dot, backslash dot is the way to do it literally. How about one other question on regular expressions? 

AUDIENCE: Is this the same thing that Google Forms uses in order to categorize data in, let's say, some-- if you've got multiple people sending in requests about some feedback? Do they categorize the data that they get using this particular regular expression thing? 

DAVID MALAN: Indeed. If you've ever used Google Forms to not just submit it but to create a Google Form, one of the menu options is for response validation, in English at least. And what that allows you to do is specify that the user has to input an email address, or a URL, or a string of some length. 

But there's an even more powerful feature that some of you may not have ever noticed. And indeed, if you'd like to open up Google Forms, create a new form temporarily, and poke around, you will actually see, in English at least, quote, unquote "regular expression" mentioned as one of the mechanisms you can use to validate your users' input into your Google Form. 

So in fact, after today you can start avoiding the specific dropdowns of like email address, or URL, or the like, and you can express your own patterns precisely as well. Regular expressions can even be used in VS Code itself. If you go and find, or do a find and replace in VS Code, you can, of course, just type in words, like you could into Microsoft Word or Google Docs. You can also type, if you check the right box, regular expressions and start searching for patterns, not literally specific values. 

Well, let me propose that we now enhance this implementation further by introducing a few other symbols, because right now with my code, I keep saying that I want my email address to end with .edu and start with a username, but I'm being a little too generous. This does, in fact, work as expected for my own email address, malan@harvard.edu. But what if I type in a sentence like, "my email address is malan@harvard.edu," and suppose I've typed that into the program or I've typed that into a Google Form? Is this going to be considered valid or invalid? 

Well, let's consider. It's got @ sign, so we're good there. It's got one or more characters to the left of the @ sign. It's got one or more characters to the right of the @ sign. It's got a literal .edu somewhere in there to the right of the @ sign. And granted, there's more stuff to the right. There's literally this period at the end of my English sentence. 

But that's OK, because at the moment, my regular expression is not so precise as to say, the pattern must start with the username and end with the .edu. Technically, it's left unsaid what more can be to the left and what more can be to the right. So when I hit Enter now, you'll see that that whole sentence in English is valid, and that's obviously not what you want. 

In fact, consider the case of using Google Forms or Office 365 to collect data from users. If you don't validate your input, your users might very well type in a full sentence or something else with a typographical error, not an actual email. So if you're just trying to copy all of the results that have been typed into your form so you can paste them into Gmail or some email program, it's going to break, because you're going to accidentally pay something like a whole English sentence into the program instead of just an email address, which is what your mailer expects. 

So how can I be more precise? Well, let me propose we introduce a few more symbols as well. It turns out in the context of a regular expression, one of these patterns, you can use the caret symbol, the little triangular mark, to represent that you want this pattern to match the start of the string specifically-- not anywhere but the start of the user's string. By contrast, you can use a $ sign in your regular expression to say that you want to match the end of the string, or technically just before the newline at the end of the string. 

But for all intents and purposes, think of caret as meaning "start of the string" and $ sign as meaning "end of the string." It is a weird thing that one is a caret and one is $ sign. These are not really things that I think of as opposites, like a parentheses or something like that. But those are the symbols the world chose many years ago. 

So let me go back to VS Code now. And let me add this feature to my code here. Let me specify that yes, I do want to search for this pattern, but I want the user's input to start with this pattern and end with this pattern. So even though it's going to start looking even more cryptic, I put a caret symbol here at the beginning, and I put a $ sign here at the end. That does not mean I want the user to type a caret symbol or a $ sign. This is special symbology that indicates to re.search that it should only look for now an exact match against this pattern. 

So if I now go back to my terminal window-- and I'll leave the previous result on the screen-- let me type the exact same thing. "My email address malan@harvard.edu," Enter-- sorry, period. And now I'm going to go ahead and hit Enter. Now that's considered invalid. But let me clear the screen. And just to make sure I didn't break things, let me type in just my email address, and that, too, is valid. 

Any questions now on this version of my regular expression, which, note, goes further to specify even more precisely that I want it to match at the start and the end? Any questions on this one here? 

AUDIENCE: OK. You have slash, and .edu, then the $ sign. But the dot is one of the regular expression, right? 

DAVID MALAN: It normally is. But this backslash that I deliberately put before this period here is an escape character. It is a way of telling re.search that I don't want any character there, I literally want a period there. And it's the only way you can distinguish one from the other. 

If I got rid of that slash, this would mean that the email address just has to end with any character, then an E, then a D, than a U. I don't want that. I want literally a period, then the E, then the D, then the U. 

This is actually common convention in programming and technology in general. If you and I decide on a convention, whereby we're using some character on the keyboard to mean something special, invariably we create a future problem for ourself when we want to literally use that same character. And so the solution in general to that problem is to somehow escape the character so that it's clear to the computer that it's not that special symbol, it's literally the symbol it sees. 

AUDIENCE: So we don't even know the-- we don't need another slash before the $ sign? 

DAVID MALAN: No. Because in this case, $ sign means something special. Per this chart here, $ sign by itself does not mean US dollars or currency. It literally means "match the end of the string." If, however, I wanted the user to literally type in $ sign at the end of their input, the solution would be the same. I would put a backslash before the $ sign, which means my email address would have to be something like malan@harvard.edu $ sign, which is obviously not correct too. 

So backslash is just allow you to tell the computer to not treat those symbols specially, likes meaning something special, but to treat them literally instead. How about one other question here on regular expressions? 

AUDIENCE: You said one represents to make it one plus, then you said one was to make it one with nothing. 

DAVID MALAN: Sure. 

AUDIENCE: So why would you add the plus? 

DAVID MALAN: Let me rewind in time. I think what you're referring to was one of our earlier versions that initially looked like this, which just meant zero or more characters, than an @ sign, then zero or more other characters. We then evolved to that to be this, dot plus on both sides, which means one or more characters on the left, then an @ sign, then one or more characters on the right. And if I'm interpreting your question correctly, one of the points I made earlier was that if you didn't use plus or forgot that it exists, you could equivalently achieve the exact same result with two dots and a *, because the first dot means any character-- it's got to be there-- the second dot * means zero or more other characters, and same on the right. 

So it's just another way of expressing the same idea. "One or more" can be represented like this with dot dot *, or you can just use the handier syntax of dot +, which means the same thing. All right. So I daresay there's still some problems with the regular expression in this current form, because even though now we're starting to look for the user name at the beginning of the string from the user, and we're looking for the .edu literally at the end of the string from the user, those dots are a little too encompassing right now. 

I'm allowed to type in more than the single @ sign. Why? Because @ is a character, and dot means any character. So honestly, I can have as many @ signs in this thing at the moment as I want. 

For instance, if I run python of validate.py, malan@harvard.edu, still works as expected. But if I also run python of validate.py and incorrectly do malan@@@harvard.edu, should be invalid, but it's considered valid instead. So I think we need to be a little more restrictive when it comes to that dot. And we can't just say, oh, any old character there is fine. We need to be more specific. 

Well, it turns out that regular expressions also support this syntax. You can use square brackets inside of your pattern, and inside of those square brackets include one or more characters that you want to look for specifically. Alternatively, you can inside of those square brackets put a caret symbol, which unfortunately in this context, means something completely different from "match the start of the string." But this would be the complement operator inside of the square brackets, which means "you cannot match any of these characters." 

So things are about to look even more cryptic now. But that's why we're focusing on regular expressions on their own here. If I don't want to allow any character, which is what a dot is, let me go ahead and I could just say, well, I only want to support A, or Bs, or Cs, or Ds, or Es, or Fs, or Gs. I could type in the whole alphabet here plus some numbers to actually include all of the letters that I do want to allow. 

But honestly, a little simpler would be this. I could use a ^ symbol and then an @ sign, which has the effect of saying, this is the set of characters that has everything except an @ sign. And I can do the same thing over here. Instead of a dot to the right of the @ sign, I can do open bracket ^, @ sign. 

And I admit, things are starting to escalate quickly here, but let's start from the left and go to the right. This ^ outside of the square brackets at the very start of my string, as before, means "match from the start of the string." And let's jump ahead. The $ sign all the way at the end of the regular expression means "match at the end of the string." 

So if we can mentally tick those off as straightforward, let's now focus on everything else in the middle. Well, to the left here we have new syntax-- a square bracket, another ^, an @ sign, and a closed square bracket, and then a +. The + means the same thing as always. It means "one or more of the things to the left." 

What is the thing to the left? Well, this is the new syntax. Inside of square brackets here, I have a ^ symbol and then an @ sign. That just means any character except an @ sign. It's a weird syntax, but this is how we can express that simple idea-- any character on the keyboard except for an @ sign. And heck, even other characters that aren't physically on your keyboard but that nonetheless exist. 

Then we have a literal @ sign, then we have another one of these same things-- square bracket, ^@ closed bracket, which means any character except an @ sign, then one or more of those things, followed by literally a period edu. So now let me go ahead and do this again. Let me rerun python of validate.py and test my own email address to make sure I've not made things worse. And we're good. 

Now let me go ahead and clear my screen and run python of validate.py again and do malan@@@harvard.edu, crossing my fingers this time. And finally, this now is invalid. Why? I'm allowing myself to have one @ sign in the middle of the user's input, but everything to the left per this new syntax cannot be an @ sign. It can be anything but one or more times. And everything to the right of the @ sign can be anything but an @ sign one or more times followed by, lastly, a literal .edu. 

So again, the new syntax is quite simply this-- square brackets allow you to specify a set of characters that you literally type out at your keyboard-- A, B, C, D, E, F, or the complement, the opposite, the ^ symbol, which means "not," and then the one or more symbols you want to exclude. Questions now on this syntax here? 

AUDIENCE: So right after @ sign, can we use the curly brackets m one so that we can only have one repetition of the @ symbol? 

DAVID MALAN: Absolutely. So we could do this. Let me go ahead and pull up VS Code. And let me delete the current form of a regular expression and go back to where we began, which was just dot * @ and dot *. I could absolutely do something like this and require that I want at least one of any character here. And then I could do something more to have any more as well. 

So the curly brace syntax, which we saw on the slide earlier but didn't yet use, absolutely can be used to specify a specific number of characters. But honestly, this is more verbose than is necessary. The best solution, arguably, or the simplest, at least, ultimately, is just to say dot +. But there, too, another example of how you can solve the same problem multiple ways. 

Let me go back to where the regular expression just was and take other questions as well. Questions on the sets of characters or complementing that set? 

AUDIENCE: So can you use that same syntax to say that you don't want a certain character throughout the whole string? 

DAVID MALAN: You could. It's going to be-- you could absolutely use the same character to exclude-- you could absolutely use this syntax to exclude a certain character from the entire string. But it would be a little harder right now, because we're still requiring .edu the end. But yes, absolutely. Other questions? 

AUDIENCE: What happens if the user inputs .edu in the beginning of the string? 

DAVID MALAN: A good question. What happens if the user types in .edu at the beginning of the string? Well, let me go back to VS Code here. And let's try to solve this in two different ways. First, let's look at the regular expression and see if we can infer if that's going to be tolerated. Well, according to the current cryptic regular expression, I'm saying that you can have any character except the @ sign. So that would work I. Could have the dot for the .edu. 

But then I have to have an @ sign. So that wouldn't really work, because if I'm just typing in .edu, we're not going to pass that constraint. So now let me try this by running the program. Let me type in just literally .edu. That doesn't work. 

But, but, but I could do this, .edu@.edu. That, too, is invalid. But let me do this, .edu@something.edu. That passes. So it's starting to get a little weird now. Maybe it's valid, maybe it's not. But I think we'll eventually be more precise, too. How about one more question on this regular expression and these complementing of sets? 

AUDIENCE: Can we use another domain name, the string input? 

DAVID MALAN: Can you use another domain name? Absolutely. I'm using my own just for the sake of demonstration. But you could absolutely use any domain or top-level domain. And I'm using .edu, which is very US centric. But this would absolutely work exactly the same for any top-level domain. 

All right. Let me go ahead now and propose that we improve this regular expression further, because if I pull it up again in VS Code here, you'll see that I'm being a little too tolerant still. It turns out that there are certain requirements for someone's username and domain name in an email address. There is an official standard in the world for what an email address can be and what characters can be in it. 

And this is way too accommodating of all the characters in the world except for the @ symbol. So let's actually narrow the definition of what we're going to tolerate in usernames. And companies like Gmail could certainly do this as well. Suppose that it's not just that I want to exclude @ sign. Suppose that I only want to allow for, say, characters that normally appear in words, like letters of the alphabet, A through z, be it uppercase or lowercase, maybe some numbers, and heck, maybe even an underscore could be allowed, too. 

Well, we can use this same square bracket syntax to specify a set of characters as follows. I could do abcdefghij-- oh, my god. This is going to take forever. I'm going to have to type out all 26 letters of the alphabet, both lowercase and uppercase. So let me stop doing that. 

There's a better way already. If you want to specify within these square brackets a range of letters, you can actually just do a hyphen. If you literally do a-z in these square brackets, the computer is going to know you mean a through z. You do not need to type 26 letters of the alphabet. 

If you want to include uppercase letters as well, you just do the same. No spaces, no commas, you literally just keep typing a through capital Z. So I have little a hyphen little z, big A hyphen big Z. No spaces, no commas, no separators. You just keep specifying those ranges. 

If I additionally want numbers, I could do 01234-- nope. You don't need to type in all 10 decimal digits. You can just say 0 through 9 using a hyphen as well. And if you now want to support underscores as well, which is pretty common in usernames for email addresses, you can literally just type an underscore at the end. 

Notice that all of these characters are inside of square brackets, which just again, means here is a set of characters that I want to allow. I have not used a ^ symbol at the beginning of this whole thing, because I don't want to complement it-- complement it with an E, not compliment it with an I-- I don't want to complement it by making it the opposite. I literally want to accept only these characters. 

I'm going to go ahead and do the same thing on the right. If I want to require that the domain name similarly come from this set of characters, which admittedly is a little too narrow, but it's familiar for now so we'll keep it simple, I'm going to go ahead and paste that exact same set of characters over there to the right. And so now, it's much more restrictive. Now I'm going to go ahead and run python of validate.py. I'm going to test my own email address, and we're still good. 

I'm going to clear my screen and run it once more, this time trying to break it. Let me go ahead and do something like, how about, david_malan@harvard.edu, Enter, but that, too, is going to be valid. But if I do something completely wrong again, like malan@@@harvard.edu, that's still going to be invalid. Why? Because my regular expression currently only allows for a single @ in the middle, because everything to the left must be alphanumeric-- alphabetical or numeric-- or an underscore, the same thing to the right, followed by the .edu. 

Now honestly, this is a regular expression that you might be in the habit of typing in the real world. As cryptic as this might look, this is the world of regular expressions. So you'll get more comfortable with this syntax over time. But thankfully, some of these patterns are so common that there are built-in shortcuts for representing some of the same information. 

That is to say, you don't have to constantly type out all of the symbols that you want to include, because odds are some other programmer has had the same problem. So built into regular expressions themselves are some additional patterns you can use. And in fact, I can go ahead and get rid of this entire set, a through z lowercase, A through Z uppercase, 0 through 9 and an underscore, and just replace it with a single backslash w. 

Backslash w in this case represents a "word character," which is commonly known as a alphanumeric symbol or the underscore as well. I'm going to do the same thing over here. I'm going to highlight the entire set of square brackets, delete it, and replace it with a single backslash w. And now I feel like we're making progress, because even though it's cryptic, and would have looked way cryptic a little bit ago-- and even though it would have looked even more cryptic a little bit ago, now it's at least starting to read a little more friendly. 

This ^ on the left means "start matching at the beginning of the string." Backslash w means "any word character." The + means "one or more." @ symbol literally. Then another word character, one or more. then a literal dot, then literally edu, and then match at the very end of the string, and that's it. So there's more of these, too. 

And we won't use them all here, but here is a partial list of the patterns you can use within a regular expression. One, you have backslash d for any decimal digit, "decimal digit" meaning 0 through 9. Commonly done here, too, is if you want to do the opposite of that, the complement, so to speak, you can do backslash capital D, which is anything that's not a decimal digit. So it might be letters, and punctuation, and other symbols as well. 

Meanwhile, backslash s means whitespace characters, like a single hit of the space, or maybe hitting Tab on the keyboard. That's whitespace. Backslash capital S is the opposite or complement of that-- anything that's not a whitespace character. Backslash w, we've seen, a word character, as well as numbers and the underscore. And if you want the complement or opposite of that, you can use backslash capital W to give you everything but a word character. 

Again, these are just common patterns that so many people were presumably using in yesteryear that it's now baked into the regular expression syntax so that you can more succinctly express your same ideas. Any questions, then, on this approach here, where we're now using backslash w to represent my word character? 

AUDIENCE: So what I want to ask about was the-- actually the previous approach, like the square bracket approach. Could we accept lists in there? 

DAVID MALAN: Yes. We'll see this before long. But suppose you wanted to tolerate not just .edu, but maybe .edu, or .com, you could do this. You could introduce parentheses, and then you can or those together. I could say com or edu. Could also add in something like in the US, or gov, or net, or anything else, or org, or the like. And each of the vertical bars here means something special. It means "or." And the parentheses simply group things together. 

Formally, you have this syntax here-- A or B, A or vertical bar B, means "A has to match or B has to match," where A and B can be any other patterns you want. In parentheses, you can group those things together. So just like math, you can combine ideas into one phrase and do this thing or the other. And there's other syntax as well that we'll soon see. 

Other questions on these regular expressions and this syntax here? 

AUDIENCE: What if we put spaces in the expression? 

DAVID MALAN: Sure. So if you want spaces in there, you can't use backslash w alone, because that is only a word character which is alphabetical, numerical, or the underscore. But you could do this. You could go back to this approach whereby you use square brackets. And you could say a through z, or A through Z, or 0 through 9, or underscore, or I'm going to hit the space bar, a single space. You can put a literal space inside of the square brackets, which will allow you then to detect a space. 

Alternatively, I could still use backslash w, But I could combine it as follows. I could say, give me a backslash w or a backslash s, because recall that backslash s is whitespace. So it's even more than a single space. It could be a tab. But by putting those things in parentheses, now you can match either the thing on the left or the thing on the right one or more times. 

How about one other question on these regular expressions? 

AUDIENCE: Perfect. So I was going to ask, does the backslash w include a dot? Because-- no, OK. 

DAVID MALAN: No, it only Includes letters, numbers, and underscore. That is it. 

AUDIENCE: And I was wondering, you gave an example at the beginning that had spaces, like this is my email, so-and-so. I don't think our current version-- or even quite a long while ago stopped accepting it. Was that because of the ^ or because of something else? 

DAVID MALAN: No, the reason I was handling spaces in other English words when I typed out my email address as malan@harvard.edu was because we were using initially dot *, or dot +, which is any character. And even after that, we said anything except the @ sign, which includes spaces. Only once I started using square brackets and a through z and 0 through 9 and underscore did we finally get to the point where we would reject white space. 

And in fact, I can run this here. Let me go into the current version of my code in VS Code, which is using, again, the backslash w's for word characters, let me run python of validate.py and incorrectly type in something like "my email address is malan@harvard.edu," period, which has spaces to the left of my username, and that is now invalid, because space is not a word character. 

You're going to notice, too, that technically I'm not allowing dots. And some of you might be thinking, wait a minute. My Gmail address has a dot in it. That's something we're going to still have to fix. A backslash w is not the end all here. It's just allowing us to express our previous solution a little more succinctly. 

Now, one thing we're still not handling quite properly is uppercase versus lowercase. The backslash w technically does handle lowercase letters and uppercase, because it's the exact same thing as that set from before, which had little a through little z and big A through big Z. But watch this. 

Let me go ahead in my current form run python of validate.py, and just because my Caps lock key is down, MALAN@HARVARD.EDU, shouting my email address. It's going to be OK in terms of the MALAN. It's going to be OK in terms of the HARVARD, because those are matching the backslash w, which does include lowercase and uppercase. But I'm about to see invalid. 

Why? Why is MALAN@HARVARD.EDU invalid when it's in all caps here, even though I'm using backslash w? 

AUDIENCE: Yeah. So you are asking for the domain.edu in lowercase, and you're typing it in uppercase. 

DAVID MALAN: Exactly. I'm typing in my email address in all uppercase, but I'm looking for literally ".edu." And as I see you with AirPods and so many of you with headphones, I apologize for yelling into my microphone just now to make this point. But let's see if we can't fix that. 

Well, if my pattern on line 5 is expecting it to be lowercase, there's actually a few ways I can solve this. One would be something we've seen before. I could just force the user's input to all lowercase. And I could put onto the end of my first line .lower and actually force it all to lowercase. 

Alternatively, I could do that a little later. Instead of passing an email, I could pass in the lowercase version of email, because email addresses should, in fact, be case insensitive. So that would work, too. But there's another mechanism here, which is worth seeing. 

It turns out that that function before called re.search supports, recall, a third argument as well, these so-called flags. And flags are configuration options, typically to a function, that allow you to configure it a little differently. And how might I go about configuring this call to re.search a little bit differently insofar as I'm currently only passing in two arguments? 

Well, it turns out that some of the flags you can pass into this function are these. It turns out that the regular expression library in Python, a.k.a. re, comes with a few built-in variables, so to speak, things that you can think of as constants, that have meaning to re.search. And they do so as follows. If you pass in as a flag re.IGNORECASE, what re.search is going to do is ignore the case of the user's input. It can be uppercase, lowercase, a combination thereof, the case is going to be ignored. It will be treated case insensitively. 

And you can do other things, too, that we won't do here. But if you want to handle the user's input that maybe spans multiple lines-- maybe they didn't just type in an email address but an entire paragraph of text, and you want to match different lines of that text that is multiple lines. Another flag is for re.MULTILINE for just that, or re.DOTALL, whereby you can configure the dot to recognize not just any character except newlines but any character plus newlines as well. 

But for now, let me go ahead and just make use of this first one. Let me pass in a third argument to re.search, which is re.IGNORECASE. Let me now rerun the program without clearing my screen, python of validate.py. Let me type in again in all caps, effectively shouting, MALAN@HARVARD.EDU, Enter, and now it's considered valid, because I'm telling re.search specifically to ignore the case of the input. And that, too, here is fine. 

And why might I do this approach rather than call .lower in one of those other locations? Eh, if I don't actually want to change the user's input for whatever reason, I can still treat it case insensitively without actually changing the value of that variable itself. All right, any final questions now on this validation of email addresses? 

AUDIENCE: So the pattern is a string, right? 

DAVID MALAN: Mm-hmm. 

AUDIENCE: Can we use an fstring? 

DAVID MALAN: You can. Yes, you can use an fstring so that you could plug in, for instance, the value of a variable and pass it into the function. Other questions on this? 

AUDIENCE: Backslash w character, could we take it as an input from the user? 

DAVID MALAN: Technically yes. That's not a problem we're trying to solve right now. We want the user to provide literal input, like their email address, not necessarily a regular expression. But you could imagine building software that asks the user, especially if they're more advanced users, to type in a regular expression for some reason to validate something else against that. 

And in fact, that's what Google is doing. If you play around with Google Forms and create a form with response validation and select Regular Expression, Google lets you and I type in our own regular expressions, which would be a perfect example of that. 

All right. Well, let me propose that we try to solve one other problem here, whereby if I go into the same version as before, which is now ignoring case, but I type in one of my other email addresses. Let me go ahead and run python of validate.py. And this time, let me type in not malan@harvard.edu, which I use primarily, but another email address of mine, malan@cs50.harvard.edu, which forwards to the same. 

Let me go ahead and hit Enter now. And huh, invalid, even though I'm pretty sure that is, in fact, my email address. Well, let's put our finger on the reason why. Why at the moment is malan@cs50.harvard.edu being considered invalid, even though I'm pretty sure I send and receive email from that address, too? Why might that be? 

AUDIENCE: Because there is a dot that has come after the @ symbol. 

DAVID MALAN: Exactly. There's a dot after my cs50. And I'm not expecting any dots there, I'm expecting only, again, word characters, which is A through z, 0 through 9, and underscore. So I'm going to have to retool here. 

But how could I go about doing this? Well, it turns out theoretically, there could be other email addresses, even though they'd be getting a little excessively long, for instance, malan@something.cs50.harvard.edu, which does not technically exist, but it could. You can have, of course, multiple dots in a domain name like we see here. Wouldn't it be nice if we could handle that as well? 

Well, let me propose that we modify my regular expression as follows. It turns out that you can group ideas together. And you can not only ask whether or not this pattern matches or this one using syntax like A vertical bar B, which means "either A or B," you can also group things together and then apply some other operator to them as well. 

In fact, let me go back to the code here. And let me propose that if I want to tolerate a subdomain, like cs50, that may or may not be there, let me go ahead and change it as follows. I could naively do this. If I want to support subdomains, I could say, well, let's allow for other word characters plus, and then a literal dot. 

And notice, I'll highlight in blue here what I've just added. Everything else is the same, but I'm now adding room for another sequence of one or more word characters and then a literal dot. So this now, I think, if I rerun python of validate.py, will work for malan@cs50.harvard.edu, Enter. 

Unfortunately, does anyone see where this is going? Let me rerun python of validate.py and type in as I keep doing, malan@harvard.edu, which up until now has kept working despite all of my changes. But now, ugh, finally I've broken my own email address. So logically what's the solution here? 

Well, there's a bunch of ways we could solve this. I could maybe start using two regular expressions and support email addresses of the form username@domain.tld, or username@subdomain.domain.tld, where TLD just means Top Level Domain, like edu. Or I could maybe just modify this one, because I'd prefer not to have two regular expressions or one that's twice as big. Why don't I just specify to re.search that part of this pattern is optional? 

What was the symbol we saw earlier that allows you to specify that the thing before it is technically optional? 

AUDIENCE: The straight bar? We were using the straight bar as an-- optional, make the argument optional. 

DAVID MALAN: So we could. We could use a vertical bar and some parentheses and say, "either there's something here or there's nothing." We could do that in parentheses. But I think there's actually an even easier way. 

AUDIENCE: Actually, it's a question mark. 

DAVID MALAN: Indeed, question mark. Think back to this summary here of our first set of symbols, whereby we had not just dot and * and +, but also a question mark, which means literally "zero or one repetitions," which effectively means optional. It's either there, one, or it's not, zero. 

Now, how can I translate that to this code here? Well, let me go ahead and surround this part of my pattern with parentheses, which doesn't mean I want literally a parentheses in the user's input, I just want to group these characters together. And in fact, this now will still work. I've only added parentheses around the new part for the subdomain. 

Let me run python of validate.py. Let me run malan@cs50.harvard.edu, Enter. That's still valid. But to be clear, if I rerun it again for malan@harvard.edu, that is still invalid, but not if I go in here and say, after the parentheses, which now is one logical unit, it's one big group of ideas together, I add a single question mark there. This will now tell re.search that that whole thing in parentheses can either be there once or be there not at all, zero times. 

So what does this translate into when I run it? Well, let me go ahead and rerun it with malan@cs50.harvard.edu so that the subdomain is there. That works as before. Let me clear my screen and run it again, python of validate.py with malan@harvard.edu, which used to work then broke. Are we back in business now? We are. That's now valid again. 

Questions now on this approach, where we've used not just the question mark but the parentheses as well? 

AUDIENCE: Yeah. You said it works for zero or one repetitions. What if you have more? 

DAVID MALAN: What if you have more? That's OK. That's where you could do *. * is zero or more, which gives you all the flexibility in the world. 

AUDIENCE: Yeah. So I was just asking that-- with question marks, there's only one repetition allowed. 

DAVID MALAN: It means zero or one repetition. So it's either not there or it is there. And so that's why this pattern now, if I go back to my code, even though again, it admittedly looks cryptic, let me highlight everything after the @ sign and before the $ sign. This now represents a domain name, like harvard.edu, or a subdomain within the domain name. 

Why? Well, this part to the right is the same as always. Backslash w + means something like Harvard or Yale. Backslash .edu means literally ".edu." So the new part is this. In parentheses, I have another set of backslash w + backslash dot now. But it's all in parentheses. 

I'm now having a question mark right after that, which means that whole thing in parentheses either can be there, or it can't be there. It's either of those that are acceptable. So a question mark effectively make something optional. It would not be correct to remove the parentheses, because what would this mean? If I removed the parentheses, that would mean that only this dot is optional, which isn't really what we want to express. I want the subdomain, like cs50 and the additional dot to be what's there or not there. 

How about one other question on regexes here? 

AUDIENCE: Can we use this for the usernames? 

DAVID MALAN: Absolutely. We still have other problems. We're not solving all of the problems today just yet. But absolutely. Right now, we are not letting you have a period in your username. 

And again, some of you with Gmail accounts or other accounts, you probably have not just underscores, numbers, and letters. You might have periods, too. Well, we could fix that, not using question mark here per se. 

But now that we have these parentheses at our disposal, what I could do is this. I could use parentheses to surround the backslash w to say "any word character," which is the same thing, again, as a letter, or a number, or an underscore. But I could also or in, using a vertical bar, something else, like a literal dot. 

Now, a literal dot needs to be escaped, otherwise it represents any character, which would be a regression, a step back. But now notice what I've done. In parentheses, I'm telling re.search that those first few characters in your email address, that is your username, has to be a word character, like A through z, uppercase or lowercase, or 0 through 9, or an underscore, or a literal dot. 

We could do this differently, too. I could get rid of the parentheses and the or, and I could just use a set of characters. I could, again, manually say a through z, A through Z, 0 through 9, underscore, and then I could do a literal dot with a backslash period. And now I technically don't even need the uppercase, because I'm already telling the computer to ignore case. I can just pick one or the other. 

Which one is better is really up to you. Whichever one you think is more readable would generally be the better design. All right. Let me propose that I rewind this in time to where we left off, which was here. 

And let me propose that there are, indeed, still limitations of this solution, not just with the username, not just with the domain name. We're still being a little too restrictive. So would you like to see the official regular expression that at least browsers use nowadays whenever you type in an email address to a web form, and the web form, the browser, tells you yes or no, your email address is syntactically valid? Ready? Ready? 

Here is-- and this isn't even officially the right regular expression. It's a simplified version that browsers use because it catches most mistakes but not all. Here we go. This is the regular expression for a valid email address, at least as browsers nowadays implement them. Now it's crazy cryptic at first glance. 

But note-- and it's wrapping on to many lines, but it's just one pattern. But just notice the now-familiar symbols. There is the ^ symbol at the very top. There is the $ sign at the very end. There is a square bracket over here and then some of these ranges plus other characters. 

Turns out you don't normally see these characters in email addresses. It looks like you're swearing at someone in their username. But they're valid characters. They're valid officially. That doesn't mean that Gmail is going to allow you to put $ signs and other punctuation in your username. But officially, some servers might allow that. 

So if you really want to validate a user's email address, you would actually come up with or copy-paste something like this. But honestly, this looks so cryptic. And if you were to type it out manually, you are so likely to make a mistake. What's the better solution here instead? 

This is where, per past weeks, libraries are your friend. Surely someone else on the internet, a programmer more experienced than you, even, has come up with code that validates email addresses properly, using this regular expression or even something more sophisticated than that. So generally, if the problem at hand is to validate input that is pretty conventional-- an email address, a URL, something where there's an official definition that's independent of you yourself-- find a popular library that you're comfortable using and use it in your code to validate email addresses. This is not a wheel, necessarily, that you yourself should invent. 

We've used email addresses, though, to iteratively start from something simple, too simple, and build on top of that. So you could certainly imagine using regular expressions still to validate things that aren't email addresses but are data that are important to you. So we at least now have these building blocks. 

Now, besides the regular expressions themselves, it turns out there's other functions in Python's re library for regular expressions. Among them is this function here, re.match, which is actually very similar to re.search, except you don't have to specify the ^ symbol at the very beginning of your regex if you want to match from the start of a string. re.match by design will automatically start matching from the start of the string for you. Similar in spirit is re.fullmatch, which does the same thing but not only matches at the start of the string but the end of the string, so that you, too, don't need to type in the ^ symbol or the $ sign as well. 

But let's go ahead and transition back now to some actual code, whereby we solve a different problem in spirit. Rather than just validate the user's input and make sure it looks the way we want, let's just assume that the users are not going to type in data exactly as we want, and so we're going to have to clean up their input. This happens so often when you're using like a Google Form, or Office 365 form, or anything else to collect user input. No matter what your form question says, your users are not necessarily going to follow those directions. They might go ahead and type in something that's a little differently formatted than you might like. 

Now, you could certainly go through the results and download a CSV, or open the Google spreadsheet, or equivalent in Excel, and just clean up all of the data manually. But if you've got lots of submissions-- dozens, hundreds, thousands of rows in your data set-- doing things manually might not be very fun. It might be much more effective to write code, as in Python, that can allow you to clean up that data and any future data as well. 

So let me propose that we go ahead here and close validate.py. And let's go ahead and create a new program altogether called format.py, the goal of which is to reformat the user's input in the format we expect. I'm going to go ahead and run code of format.py. And let's suppose that the data we're going to reformat is the user's name-- so not email address but name this time. 

And we're going to hope that they type in their name properly, like David Malan. But some users might be in the habit, for whatever reason, of typing their name backwards, if you will, with a comma, such as Malan comma David instead. Now, it's fine because both are clearly as readable to the human. But if you want to standardize how those names are stored in your system, perhaps a database, or CSV file, or something else, it would be nice to at least standardize or canonicalize the format in which you're storing your data, so that if you print out the user's name it's always the same format, David Malan, and there's no commas or backwardness to it. 

So let's go ahead and do something familiar. Let's go ahead and give myself a variable called name and set it equal to the return value of input, asking the user, as we've done many times, "what's your name," question mark. I'm going to go ahead and proactively at least clean up some messiness, as we keep doing here, by just stripping off any leading or trailing whitespace. Just in case the user accidentally hits the spacebar, we don't want that ultimately in our data set. 

And now let me go ahead and do this as we've done before. Let me just go ahead quickly and print out, just to make sure I'm off to the right start, "hello," and then in curly braces name, so making an fstring to format "hello," comma, "name." 

Now let me go ahead and clear my screen and run python of format.py. Let me behave and type in my name as I normally would, David, space, Malan, Enter. And I think the output looks pretty good. It looks as expected grammatically. 

Let me now go ahead, though, and play this game again. But this time, maybe because I'm not thinking, or I'm just in the habit of doing last name comma first, I do Malan, comma, David, and hit Enter. All right. Well, this now is weird. 

Even though the program is just spitting out exactly what I typed in, arguably this is not close to correct, at least grammatically. It should really say "hello, David Malan." Now, maybe I could have some if conditions and I could just reject the user's input if they type a comma or get their names backwards somehow. 

But that's going to be too little too late if the user has already submitted a form online, and I already have the data, and now I need to go in and clean it up. And it's not going to be fun to go through manually in Google Spreadsheets, or Apple Numbers, or Microsoft Excel and manually fix a lot of people's names to get rid of the commas and move the first name before the last, as is conventional in the US. 

So let's do this. It could be a little fragile, but let's start to express ourselves a little programmatically here and ask this. If there is a comma in the person's name, which is Pythonic-- I'm just asking the question, is this shorter string in this longer string?-- then let me go ahead and do this. Let me go ahead and grab that name in the variable, split on not just the comma but the space after, assuming the human typed in a space after their name. 

And let me go ahead and store the result of that splitting of Malan, comma, David into two variables. Let's do last, comma, first, again unpacking the sequence of values that comes back. Now let me go ahead and reformat the name. So I'm going to forcibly change the user's name to be as I expect. 

So name is actually going to be this format string-- first name then last name, both in curly braces but formatted together with a single space, so that I'm overwriting the user's input and updating my name variable accordingly. For the moment, to be clear, this program is interactive. Like, the users, like me, are typing their name into the program. 

But imagine the data already is in a CSV file. It came in from some process like a Google Form or something else online. You could imagine writing code similar to this, but that maybe goes and reads that file into memory first. Maybe it's a CSV via CSV Reader or DictReader, and then iterating over each of those names. But we'll keep it simple and just do one name at a time. 

But now what's kind of interesting here is if I go back to my terminal window and clear it, and run python of format.py, and hit Enter, I'm going to type in David, space, Malan as before. And I think we're still good. But I'm also going to go ahead and do this-- python of format.py Malan, comma, David, with a space in between, crossing my fingers and hit Enter, and voila. That now has been fixed. 

Such a simple thing to be sure. But it is so commonly necessary to clean up users input. Here we see at least one way to do so pretty easily. Now, to be fair, there's some problems here. And in fact, can someone imagine a scenario in which this code really doesn't fix the user's input? What could still go wrong even with this fix in my code? Any thoughts? 

AUDIENCE: If they typed in their name comma and then [INAUDIBLE]. 

DAVID MALAN: Oh, and then something else. Yeah. So let me try this, for instance. Let me go ahead and run a program. And I am the only David Malan that I know. But suppose I were, let's say, junior like this. And it's common, in English at least, to sometimes put a comma there. You don't necessarily need the comma, but I'm one of those people who uses a comma. 

That's now really, really broken. So I've broken some assumption there. And so that could certainly go wrong here. What else? Well, let me go ahead and run this again. And if I did Malan, comma, David, no space, because I'm being a little sloppy, I'm not paying attention, which is going to happen when you have lots of users ultimately, well, this really broke now. 

Notice I have a ValueError, an actual exception. Why? Well, because split is supposed to be splitting the string into two strings by looking for the comma and a space. But if there is no comma and space, it can't split it into two things. And the fact that I have two variables on the left, but I'm only getting back one thing on the right, means that I can't do this code quite as this. 

So it's fragile to be sure. But wouldn't it be nice if we could at least improve it? For instance, we now know some regular expressions syntax. What if I at least wanted to make this space optional? Well, I could use my newfound regular expression syntax and put a question mark, Question mark means zero or one of the things to the left. 

What's the thing to the left? It's literally a space. I don't even need parentheses if there's just one thing there. So that would be the start of a pattern that says, I must have a comma, and then I may or may not have a space, zero or one spaces thereafter. Unfortunately, the version of split that's built into the str variable, as in this case, doesn't support regular expressions. If we want our regular expressions, we need to go use that library here. 

So let me go ahead and do this. Let me go in and leave this code as is but go up to the top now and import re to import the library for regular expressions. And now let me go ahead and start changing my approach here. I'm going to go ahead and do this. I'm going to use the same function called re.search, and I'm going to search for a pattern that I think will be last, comma, first. So let me use my newfound regular expression syntax and represent a pattern for something like Malan, comma, space, David. 

How can I do this? Well, inside of my quotes for re.search, I'm going to have something-- so dot +-- sorry. I'm going to have something, so dot +. Then I'm going to have a comma. Then I'm going to have a space. Then I'm going to have something dot +. 

Now I'm going to preemptively refine this a little bit. I want this whole pattern to start matching at the beginning of the user's input. So I'm going to add the ^ right away. And I want the end of the user's input to be matched as well, so that I'm literally expecting any character one or more times, then a comma then a space, then any other character one or more times. And then that is it. And I'm going to pass in the name variable as before. 

Now, when we've used re.search in the past, we really used it just to answer a question. Does the user's input match the following pattern or not, true or false, effectively. But re.search is actually more powerful than that. You can actually get back more information. 

And you can do this. You can specify a variable and then an assignment operator, and get back more precise answers to what has been found when searched for. But what is it you want to get back? Well, it turns out there's this other feature of regular expressions which allow you to use parentheses, not just to group things together, but to capture them. 

It turns out when you specify parentheses in a regular expression unbeknownst to us up until now, everything in the parentheses will be returned to you as a return value from the re.search function. It's going to allow you to extract specific amounts of information from the user's own input. 

You can reverse this process, too, by using the non-capturing version as well. You can use parentheses, and then literally a question mark, and a colon, and then some other stuff. And that will say, don't either capturing this. I just want to group things. But for now, we're going to use just the parentheses themselves. 

So how am I going to do this? Well, if I want to get back the user's last name and first name, I think what I want to capture is the dot + here and the dot + here. So I've deliberately surrounded in parentheses the dot + both to the left and the right of the comma, not because I'm grouping them together per se-- I'm not adding a question mark, I'm not adding up another + or a *-- I'm using parentheses now for capturing purposes. 

Why? Well, I'm going to do this next. I'm going to still ask a Boolean question like, "if there are matches, then do this." So if matches is not effectively false, like none, I do expect I've gotten back some matches. And watch what I can do now. I can do last, comma, first equals whatever matches in and get back all of the groups of matches. Then go ahead and update name just like before with a format string and do first and then last in curly braces as well, and then at the very bottom, just like before, print out, for instance, "hello," comma, "name." 

So the new code now is everything highlighted here. I'm using re.search to search for whether the user typed their name in last, comma, first format. But I am more powerfully using re.search to capture some of the user's input. What's going to get captured? Anything I surrounded in parentheses will be returned to me as return values. 

How do you get at those return values? You ask the variable to which you assign them for all of the groups, all of the groups of parentheses that were captured. So let me go ahead and do this. Let me go ahead now and run python of format.py, Enter. And I'm going to type my name as usual. 

In this case, nothing happens with this if condition. Why? Because I did not type a comma, and so this search does not find a comma, so there are no matches. So we immediately just print out "hello, name." Nothing interesting or new there. 

But if I now go ahead, and clear my screen, and run python of format.py, and do Malan, comma, space, David, Enter, we've reformatted my name. Well, how did this work? Let me be a little more explicit now. 

It turns out I don't have to just say matches.groups. I can get specific groups back that I want. So let me change my code a little bit more. Let me go ahead now and just say this. Let's update name to-- actually, let's do this. Let's say that the last name is going to be in the matches but specifically group 1. The first name is going to be in the matches but specifically group 2. 

Why 1 and 2? Because this is the first set of parentheses to the left of the comma. This is the second set of parentheses to the right of the comma. And based on the input, this would be the user's last name in this scenario, Malan. This would be the user's first name, David, in this scenario. That's why I'm using group 1 for the last name and group 2 for the first name. 

And now I'm going to go ahead and say name equals fstring, again, first and then last, done. And let me refine this one last step before we take questions. I don't really need these variables if I'm immediately using them. Let's just go ahead and tighten this up further as we've done in the past for design's sake. 

If I want to make the name the concatenation of the person's first name and last name, let's just do this. matches.group 2 first, plus a space, plus matches.group 1. So it's just up to me from left to right, this is group 1, this is group 2. So group 1 is last, group 2 is first. So if I want to flip them around and update the value of name, I can explicitly get group 2 first, concatenate using +, a single space, and then concatenate on group 1. 

All right. That was a lot. Let me pause to see if there are questions. The key difference here is we're still using re.search the exact same way, but now I'm using its return value, not just to answer a question true or false, but to actually get back specific matches anything I captured, so to speak, with parentheses. 

AUDIENCE: Why is it here we're using 1 and 2 instead of 0 and 1 for capturing the first? 

DAVID MALAN: Really good question. A good observation. In almost every other context, we've started counting at 0 and 1 instead of 1 and 2. It turns out there's something else in location 0 when it comes back from re.search related to the string itself. So according to the documentation of this function only, 1 is the first set of parentheses, and 2 is the second set, and onward from there. Just a different convention here. Other questions? 

AUDIENCE: What if we write nothing, like whitespace, comma, whitespace? How do we check truth of condition? 

DAVID MALAN: Before I answer directly, let me just run this and make sure I've not broken anything further. Let me run python of format.py. Let me type in David, space, Malan, the right way. Let me run it once more. Let me type in Malan, comma, David, the wrong way that we're fixing. And we're still good. 

But I think it will still break. Let me run it a third time with Malan, comma, David with no space. And now it's still broken. Why? Because I'm still looking for comma space. 

Now, how can I fix that? One way I could do that is to add a question mark here, which again, is zero or more of the thing before. So if I have a space and then a question mark literally, no need for any parentheses, then I can literally tolerate both Malan, comma, space, David or Malan, comma, David. 

So let's try again. Before, this did not work. Let's do Malan, comma, David with no space. Now it does actually work. So we can tolerate different amounts of whitespace if I am a little more precise with my formula. 

Let me go ahead and try once more. Let me very weirdly but possibly hit the space bar a few too many times so now they're really separated. This, again, is not going to work quite right, because it's going to consume all of that whitespace. So now I might want to strip, left and right, any of the leading white space on the result. Or what I could do here is say this. Instead of zero or one, I could use a * here, so space *. And now if I run this once more with Malan, comma, space, space, space, David, Enter, now we've cleaned up things further. 

So you can imagine, depending on how messy the data is that you're cleaning up, your regular expressions might need to get more and more sophisticated. It really depends on just how many problems we want to solve at once. 

Well, allow me to propose that we forge ahead further just to clean this up even more so, using a feature that's actually relatively new to Python itself. It is very common when using regular expressions to do exactly what I've done here-- to call a function like re.search with capturing parentheses inside, such that you get back a return value that I'm calling matches-- you could call it something else, but I'm calling it by default matches. And then notice on the next line, I'm saying "if matches." 

Wouldn't it be nice if I could just tighten things up further and do these all on the same line? Well, you can sort of. Let me go ahead and do this. Let me get rid of this if. And let me just try to say something like this. If matches equals re.search and then colon-- so combining my if condition into just one line instead of those two. 

In C, or C++, or Java, you would actually do something like this, surrounding the whole thing with parentheses, sometimes double sets to suppress any warnings, if you want to do two things at once. If you want to not only assign the return value of re.search to a variable called matches, but you want to subsequently ask a Boolean question, is this effectively true or false. 

That's what I was doing a moment ago. Let me undo this. A moment ago, I was getting back the return value and assigning it to matches, and then I was asking the question. Well, it turns out this need to have two lines of code presumably rubbed people wrong for too long in Python. And so you can now combine these two kinds of lines into one. 

But you need a new operator. You cannot just say, "if matches equals re.search" and then in a colon at the end. You instead need to do this. You need to do colon equals if and only if you want to assign something from right to left and you want to ask an if or an elif question on the same line. 

This is affectionately known, as can see here, as the walrus operator. And it's new to Python in recent years. And it both allows you to assign a value as I'm doing from right to left, and ask a Boolean question about it, like I'm doing with the if or equivalently elif. Does anyone know why this is called the walrus operator? If you kind of look at it like this, perhaps, if you're familiar with walruses, it kind of sort of looks like a walrus. 

So a minor detail but a relatively new feature of Python that honestly, you'll probably continue to see online, and in source code, and in textbooks, and so forth, increasingly so now that it does exist. It does not change the logic at all. If I run python of format.py and type Malan, comma, space, David, it still fixes things, but it's tightened up my code just a bit more. 

All right. Let's go ahead and look at one final problem to solve, that of extracting information now as well. So at this point, we've now validated the user's input by checking whether or not it meets a certain pattern. We've cleaned up the user's input by checking against a pattern, whether it matches or not, and if it does match, we kind of reorganize some of the user's information so we can clean up their input and standardize the format in which we're storing or printing it, in this case. 

Let's do one final example where we're very specifically extracting information in order to answer some question. So let me propose this. Let me go ahead and close format.py and create a new file called twitter.py, the goal of which is to prompt users for the URL of their Twitter profile and extract from it, infer from that URL, what is the user's username. 

Now, why might you want to do this? Well, one, you might want users to be able to just very easily copy and paste the URL from their own Twitter profile into your form, into your app, so that you can figure out what their username is. Or you might have a form that asks the user for their Twitter username, and because people aren't necessarily paying very close attention, some people type their username. Some people type their whole URL or something else altogether. 

It would be nice now that you're a programmer to just be more tolerant of different types of input and just take on the burden of canonicalizing, standardizing the data, but being flexible with the users. It's arguably a better user experience if you just let me copy-paste or type in what I want, you clean it up. You're the programmer not me. Lends for a better experience, perhaps. 

Well, let me go ahead and do this with twitter.py. Let me first go ahead and prompt the user here for a value for a variable that I'll call url, and just ask them to input the URL of their Twitter profile. I'm going to go ahead and strip off any leading or trailing whitespace, just in case users accidentally hit the spacebar. That's literally the least I can do quite easily. 

But now let's go ahead and do this. Suppose that the user's address is the following. Let me print out what did they type in. And let me clear my screen and run python of twitter.py. I'm going to go ahead and type in, for instance, https://twitter.com/davidjmalan, which happens to be my own Twitter username. For now, we're just going to print it back onto the screen just to make sure I've not messed up yet. 

OK. So I've printed back out the exact same URL. But the goal at hand is to extract the username only. Now, let me just ask, perhaps, a straightforward question. Logically, what do I need to do to get at the user's username? 

AUDIENCE: Well, we just ignore what's before the username and then just extract the username? 

DAVID MALAN: Perfect. Yeah, I mean, it is as simple as that. If you know the username is at the end, well, let's just somehow ignore everything to the beginning. Well, what's at the beginning? 

Well, it's a URL. So we're probably going to need to ignore an HTTPS, a ://, a twitter.com, and a /. So we just want to throw all of that away. Why? Because if it's an URL, we know by how Twitter works that the username comes at the end. 

So let's use that very simple idea to get at the information we want. I'm going to try this a few different ways. Let me go back into my program here. And instead of just printing it out, which was just to see what's going on, let me do this. Let me create a new variable called username. And let me call url.replace. It turns out that if URL is a string or a str in Python, it, again, comes with multiple methods, like strip, and split, and others as well, one of which is called replace. 

And replace will do just that. You pass it two arguments, the first of which is, what do you want to replace? The second argument is, what do you want to replace it with? So if I want to get rid of, as I've proposed, really just everything before the username, that is, the Twitter URL or the beginning thereof, let's just say this. Go ahead and replace "https://twitter.com/", close quote, that's what I want to replace. 

And comma, second argument, what do you want to replace it with? Nothing. So I'm literally going to pass in quote unquote to effectively do a find and replace. That's what the replace method does, just like you can do it in Microsoft Word or Google Docs. This is the programmer's way of doing find and replace. 

Now let me go ahead and print out just the username. So I'll use an fstring like this. I'll say username, colon, and then in curly braces, username, just to format it nicely. All right. Let me go ahead and clear my screen and run python of twitter.py, Enter, URL. Here we go. https://twitter.com/davidjmalan, Enter. 

OK. Now we've made some progress. Done for the day, right? Well, what is suboptimal about this? Can anyone critique or find fault with my program? It is working now, but it's a little fragile. I bet we could contrive some scenarios where I think it works but it doesn't. 

AUDIENCE: Well, I have a few ideas, actually. Well, first of all, if we don't specify HTTPS, it will be broken. Secondly, if we have a slash at the end, it also will be broken. If we have a question mark or something after question mark, it also won't work. 

So a lot of scenarios, actually. 

DAVID MALAN: Oh, my god. I mean, here we are. I was pretending to think I was done. But my god, like, Alex gave us a whole laundry list of problems. And just to recap, then, what if it's not HTTPS, it's HTTP? Slightly less secure, but I should still be able to tolerate that programmatically. 

What if the protocol is not there? What if the user just typed twitter.com/davidjmalan? It would be nice to tolerate that rather than show an error and make me type in the protocol. Why? It's not good user experience. 

What if it had a slash at the end of the username, or a question mark? If you think about URLs you've seen on the web, there's very commonly more information, especially if it's been shared on social media. There might be a HTTP parameters, so to speak, just stuff there that we don't want. There could be a www.twitter.com, which I'm also not expecting but does work if you go to that URL, too. 

So there's just so many things that can go wrong. And even if I come back to my contrived example as earlier, what if I run this program and say this-- "my username is https://twitter.com/davidjmalan," Enter. Well, that too just didn't really work-- it got rid of the-- actually-- [LAUGHS] OK, actually that kind of worked. 

But the goal here is to actually get the user's username, not an English sentence describing the user's username. So I would argue that even though I just accidentally created perfectly correct English grammar, I did not extract the Twitter username correctly. I don't want words like "my username is" as part of my input. 

So how can we go about improving this, and maybe chipping away at some of those problems one by one? Well, let me clear my screen here. Let me come back up to my code. And let me not just replace it, but let me do something else instead. 

I'm going to go ahead, and instead of using replace, I'm going to use another function called removeprefix. A prefix is a string or a substring that comes at the start of another. So if I remove prefix, I don't need a second argument for this function. I just need one. What prefix do you want to remove? 

So this will at least now fix the problem I just described of typing in like a whole sentence, where the URL is there, but it's not at the beginning, it's only at the end. So here, this still is not correct. But we don't create this weird-looking output that just removes the URL part of the input-- "my username is https://twitter.com/davidjmalan." A moment ago, it did remove the URL and left only the davidjmalan. 

This is not perfect still. But at least now, it does not weirdly remove the URL and then leave the English. It's just leaving it alone. So maybe I could handle this better, but at least it's removing it from the part of the string I might anticipate. 

Well, what else could we do here? Well, it turns out that regular expressions just let us express patterns much more precisely. We could spend all day using a whole bunch of different Python functions like removeprefix, or remove, and strip, and others, and kind of make our way to the right solution. But a regular expression just allows you to more succinctly, if admittedly more cryptically, express these kinds of patterns and goals. 

And we've seen from parentheses, which can be used not just to group symbols together as sets but to capture information as well, we have a very powerful tool now in our toolkit. So let me do this. Let me go ahead and start fresh here and import the re library as before at the very top of my program. I'm still going to get the user's URL via the same line of code. But I'm now going to use another function as well. 

It turns out that there's not just re.search, or re.match, or re.fullmatch. There's also re.sub in the regular expression library, where "sub" here means "substitute." And it takes more arguments, but they're fairly straightforward. The first argument to re.sub is the pattern, the regular expression that you want to look for. 

Then you have a replacement string-- what do you want to replace that pattern with? And where do you want to do all that? Well, you pass in the string that you want to do the substitution on. Then there's some other arguments that I'll wave my hands at for now. 

Among them are those same flags and also a count, like how many times do you want to do find and replace? Do you want it to do all, do you want to do just one, or so forth you can have further control there, too, just like you would in Google Docs or Microsoft Word. 

Well, let me go back to my code here, and let me do this. I'm going to go ahead and call re not search but re.sub for substitute. I'm going to pass in the following regular expression, "https://twitter.com/" and then I'm going to close my quote. And now what do I want to replace that with? 

Well, like before with the simple str replace function, I want to replace it with nothing, just get rid of it altogether. But what string do I want to pass in to do this to? The URL from the user. And now let me go ahead and assign the return value of re.sub to a variable called username. 

So re.sub's purpose in life is, again, to substitute some value for some regular expression some number of times. It essentially is find and replace using regular expressions. And it returns to you the resulting string once you've done all those substitutions. 

So now the very last line of my code can be the same as before, print-- and I'll use an fstring, username, colon, and then in curly braces, username. So I can print out literally just that. All right. Let's try this and see what happens. I'll clear my terminal window, run python of twitter.py. 

And here we go, https://twitter.com/davidjmalan. Cross my fingers and hit Enter. OK, now we're in business. But it is still a little fragile. And so let me ask the group, what problem should I now further chip away at? They've been said before, but let's be clear. What's one or more problems that still remain? 

AUDIENCE: The protocols and the domain prefix [INAUDIBLE]. 

DAVID MALAN: Good. The protocols, so HTTP versus HTTPS. Maybe the subdomain, www, should it be there or not? And there's a few other mistakes here, too. Let me actually stay with the group. What are some other shortcomings of this current solution? 

AUDIENCE: If we use a phrase like you do before, we are going to have the same problem, because it's not taking account in the first part of the text example. 

DAVID MALAN: Good. I might still allow for some words, some English to the left of the URL because I didn't use my ^ symbol. So I'll fix that. And any final observations on shortcomings here? 

AUDIENCE: Well, it could be an HTTP, or there could be less than two slashes. 

DAVID MALAN: OK. So it could be HTTP. And I think that was mentioned, too, in terms of protocol. There could be fewer than two slashes. That I'm not going to worry about. If the user gives me instead of two, that's really user error. 

And I could be tolerant of it, but you know what, at that point I'm OK yelling at them with an error message saying, please fix your input. Otherwise, we could be here all day long trying to handle all possible typos. For now, I think in the interests of usability, or user experience, UX, let's at least be tolerant of all possible valid inputs or reasonable INPUTS if you will. 

So let me go here, and let me start chipping away at these here. What are some problems we can solve? Well, let me propose that we first address the issue of matching from the beginning of the string. So let me add the ^ to the beginning. 

And let me add not a $ sign at the end, though, right? Because I don't want to match all the way to the end, because I want to tolerate a username there. So I think we just want the ^ symbol there. 

There's a subtle bug that no one yet mentioned. And let me just kind of highlight it and see if it jumps out at you now. It's a little subtle here on my screen. I've highlighted in blue a final bug here-- maybe some smiles on the screen, yeah? Can we take one hand here? Why am I highlighting the dot in twitter.com, even though it definitely should be there? 

AUDIENCE: So the dot without a backslash means any character except a newline. 

DAVID MALAN: Yeah, exactly. It means any character. So I could type in something like twitter?com, or twitter anything com, and that would actually be tolerated. It's not really that bad, because why would the user do that? But if I want to be correct, and I want to be able to test my own code properly, I should really get this detail right. 

So that's an easy fix, too, but it's a common mistake. Anytime you're writing regular expressions that happen to involve special symbols, like dots in a URL or domain name, a $ sign in something involving currency, remember you might, indeed, need to escape it with a backslash like this here. 

All right. Let me ask the group about the protocol specifically. So HTTPS is a good thing in the world. It means secure. There is encryption being used. So generally, you like to see HTTPS. 

But you still see people typing or copy-pasting HTTP. What would be the simplest fix here to tolerate, as has been proposed, both HTTP and HTTPS? I'm going to propose that I could do this. I could do HTTP vertical bar or HTTPS, which, again, means A or B. But I think I can be smarter than that. I can keep my code a little more succinct. 

Any recommendations here for tolerating HTTP or HTTPS? 

AUDIENCE: We could try to put in question mark behind the S. 

DAVID MALAN: Perfect. Just use a question mark. Both of those would be viable solutions. If you want to be super explicit in your code, fine. Use parentheses and say HTTP or HTTPS, so that you, the reader, your boss, your teacher just know exactly what you're doing. But if you keep taking the more verbose approach all the time, it might actually become less readable, certainly once your regular expressions get this big instead of this big. 

So let's save space where we can. And I would argue that this is pretty reasonable, so long as you're in the habit of reading regular expressions and know that question mark does not mean a literal question mark, but it means zero or one of the thing before. I think we've effectively made the S optional here. 

Now, what else can I do? Well, suppose we want to tolerate the www dot, which may or may not be there, but it will work if you go to a browser. I could do this-- www dot-- wait, I want a backslash there so I don't repeat the same mistake as before. But this is no good either, because I want to tolerate being there or not being there. And now I've just required that it be there. 

But I think I can take the same approach. Any recommendations? How do I make the www. optional, just to hammer this home? 

AUDIENCE: We can group-- make a square and a question mark. 

DAVID MALAN: Perfect. So question mark is the short answer again. But we have to be a little smarter this time. As Maria has noted, we need parentheses now. Because if I just put a question mark after the dot, that just means the dot is optional. 

And that's wrong, because we don't want the user to type in W-W-W-T-W-I-T-T-E-R. We want the dot to be there or just not at all with no www. So we need to group this whole thing together, put a parenthesis there, and then a parenthesis, not after the third W, after the dot, so that that whole thing is either there or it's not there. 

And what else could we still do here? There's going to be one other thing we should tolerate. And it's been said before, and I'll pluck this one off. What about the protocol? Like, what if the user just doesn't type or doesn't copy-paste the http:// or an https://? Honestly, you and I are not in the habit, generally, of even typing the protocol anymore nowadays. You just let the browser figure it out for you, and automatically add it instead. 

So this one's going to look like more of a mouthful. But if I want this whole thing here in blue to be optional, it's actually the same solution as Maria offered a moment ago. I'm going to go ahead and put a parenthesis over here, and a parenthesis after the two slashes, and then a question mark so as to make that whole thing optional as well. And this is OK. It's totally fine to make this whole thing optional, or inside of it, this little thing, just the S optional as well. So long as I'm applying the same principles again and again, either on a small scale or a bigger scale, it's totally fine to nest one of these inside of the other. 

Questions now on any of these refinements to this parsing, this analyzing of Twitter? 

AUDIENCE: What if we put a vertical bar besides this www dot? 

DAVID MALAN: What if we use a vertical bar there? So we could do something like that, too. We could do something like this. Instead of the question mark, I could do www dot or nothing and just leave that and the parentheses. That, too, would be fine. I personally tend not to like that, because it's a little less obvious to me-- wait, a minute. Is that deliberate, or did I forget to finish my thought by putting something after the vertical bar? 

But that, too, would be allowed there as well, if that's what you mean. Other questions on where we left things here, where we made the protocol optional, too? 

AUDIENCE: What happens if we have parenthesis, and inside we have another parenthesis, and another parenthesis? Will it interfere with each other? 

DAVID MALAN: If you have parentheses inside of parentheses, that, too, is totally fine. And indeed, that should be one of the reassuring lessons today. As complicated as each of these regular expressions has admittedly gotten, I'm just applying the exact same principles and the exact same syntax again and again. 

So it's totally fine to have parentheses inside of parentheses if they're each solving different problems. And in fact, the lesson I would really emphasize the most today is that you will not be happy if you try to write out a whole complicated regular expression all at once. Like, if you're anything like me, you will fail, and you will have trouble finding the mistake. 

Because my god, look at these things. They are, even to me all these years later, cryptic. The better way, I would argue, whether you're new to programming or is old to it as I am, is to just take these baby steps, these incremental steps where you do something simple, you make sure it works. You add one more feature, make sure it works. Add one more feature, make sure it works. 

And hopefully, by the end, because you've done each of those steps one at a time, the whole thing will make sense to you. But you'll also have gotten each of those steps correct at each turn. So please, do avoid the inclination to try to come up with long, sophisticated regular expressions all at once, because it's just not a good use of a time if you then stare at it trying to find a mistake that you could have caught if you did things more incrementally instead. 

All right. There still remains, arguably, at least one problem with this solution in that even though I'm calling re.sub to substitute the URL with nothing, quote, unquote, I then in my final line of code, line 6, am just blindly assuming that it all worked, and I'm going to go ahead and print out the username. But what if the user-- if I clear my screen here and run python of twitter.py-- doesn't even type a Twitter URL? What if they do something like https://google.com/, like completely unrelated, for whatever reason, Enter, that is not their Twitter username. 

So we need to have some conditional logic, I would argue, so that for this program's sake, we're only printing out or, in a back end system, we're only saving into our database or a CSV file the username if we actually matched the proper pattern. So rather than use re.sub, which is useful for cleaning up data, as we've done here to get rid of something we don't want there, why don't we go back to re.search, where we began today, and use it to solve this same problem but in a way that's conditional, whereby I can confidently say, yes or no, at the end of my program, here's the username, or here it is not? 

So let me go ahead now. And I'll clear my terminal window here. I'm going to keep most of-- I'm going to keep the first two lines the, same where I import re, and I get the URL from the user. But this time, let's do this. 

Let's this time search for, using re.search instead of re.sub, the following. I'm going to start matching at the beginning of the string, https, question mark to make the S optional, colon, slash, slash, I'm going to make my www optional by putting that in question marks there, then a twitter.com with a literal dot there so I stay ahead of that issue, too, then a slash. And then well, this is where davidjmalan is supposed to go. How do I detect this? 

Well, I think I'll just tolerate anything at the end of the URL here. All right, $ sign at the very end, close quote. For the moment, I'm going to stipulate that we're not going to worry about question marks at the end or hashes, like for fragment IDs in URLs. We're going to assume for simplicity now that the URL just ends with the username alone. 

Now what am I going to do? Well, I want to search for this URL specifically, and I'm going to ignore case, so re.IGNORECASE, applying that same lesson learned from before. re.search, recall, will return to you the matches you've captured. Well, what do I want to capture? Well, I want to capture everything to the right of the twitter.com URL here. So let me surround what should be the user's username with parentheses, not for making them optional but to say, "capture this set of characters." 

Now, re.search, recall, returns an answer. matches will be my variable name again, but I could call it anything I want. And then I can do this. If matches, now I know I can do this. Let's print out the format string, username colon. And then what do I want to print out? 

Well, I think I want to print out matches.group 1 for my matched username. All right. So what am I doing just to recap? Line 1, I'm importing the library. Line 2, I'm getting the URL from the user. So nothing new there. 

Line 5, I'm searching the user's URL, as indicated here as the second argument, for this regular expression, this pattern. I have surrounded the dot + with parentheses so that they are captured ultimately, so I can extract, in this final scenario, the user's username. If I indeed got a match, and matches is non-none, it is actually containing some match, then and only then, print out username. 

In this way, let me try this now. If I run python of twitter.py and type in https://www.google.com/, now nothing gets printed. So I've at least solved the mistake we just saw, where I was just assuming that my code worked. Now I'm making sure that I have searched for and found the Twitter URL prefix. 

All right. Well, let's run this for real now. Python of twitter.py https://twitter.com/davidjmalan. But note, I could use HTTP, I could use www. I'm just going to go ahead here and hit Enter. Huh, none. 

What has gone wrong? This one's a bit more subtle. But why does matches.group 1 contain nothing? Wait a minute. Let me-- maybe I did this wrong. Maybe-- maybe do we need the www? Let me run it again. 

So here we go. https://, let's add a www.twitter.com/davidjmalan. All right. Enter. Ho, ho, ho. What is going on? 

AUDIENCE: You have to say group 2. 

DAVID MALAN: I have to say group 2? Well, wait-- oh, right, because we had the subdomain was optional. And to make it optional, I needed to use parentheses here. And so I then said zero or on. 

OK. So that means that actually, I'm unintentionally but by design capturing the www dot, or none of it if it wasn't there before, but I have a second match over here because I have a second set of parentheses. So I think, yep, let me change matches.group 1 to matches.group 2, and let's run this. Python of twitter.py https://www.twitter-- let's do this, twitter.com/davidjmalan, Enter, and now we've got access to the username. 

Let me go ahead and tighten it up a little bit further. If you like our new friend-- it's hard not to like. If we like our old friend the walrus operator, let's go ahead and add this just to tighten things up. Let me go back to VS Code here, and let me get rid of the unnecessary condition there and combine it up here, if matches equals that. But let's change the single assignment operator to the walrus operator. Now I've tightened things up further. 

But I bet, I bet, I bet there might be another solution here. And indeed, it turns out that we can come back to this final set of syntax. Recall that when we introduce these parentheses, we did it so that we could do A or B, for instance, with the vertical bar. Then you can even combine more than just one bar. 

We use the group to combine ideas like the, www dot. And then there's this admittedly weird syntax at the bottom here, up until now not used. There is a non-capturing version of parentheses if you want to use parentheses logically because you need to, but you don't want to bother capturing the result. 

And this would arguably be a better solution here, because, yes, if I go back to VS Code, I do need to surround the www dot with parentheses, at least as I've written my regex here, because I wanted to put the question mark after it. But I don't need the www dot coming back. In fact, let's only extract the data we care about, just so there's no confusion down the road, for me, or my colleagues, or my teachers. 

So what could I do? Well, the syntax per this slide is to use a question mark and a colon immediately after the open parentheses. It looks weird admittedly. Those of you who have prior programming experience might recognize the syntax from ternary operators, doing an if else all in one line. A question mark colon at the beginning of that parenthetical means, yes, I'm using parentheses to group these things together, but no, you do not need to capture them instead. 

So I can change my code back now to matches.group 1. I'll clear my screen here, run python of twitter.py. I'll again run here https://twitter.com/davidjmalan with or without the www. And now, I indeed get back that username. 

Any questions, then, on these final techniques? 

AUDIENCE: So first of all, could we move the ^ right at the beginning of Twitter, and then just start reading from there, and then get rid of everything else before that, the kind of www issues that we had? And then my second question is, how would we use kind of, I guess, either a list or a dictionary to sort the .com kind of thing, because we have .co.uk, and that kind of stuff. How would we bring that into the re function? 

DAVID MALAN: A good question but no. If I move the ^ before twitter.com and throw away the protocol and the www, then the user is going to have to type in literally twitter.com/username. They can't even type in that other stuff. So that would be a regression, a step back. 

As for the .com, the .org, and .edu, and so forth, the short answer is there's many different solutions here. If I wanted to be stringent about .com-- and suppose that Twitter probably owns multiple domain names, even though they tend to use just this one. Suppose they have something like .org as well. You could use more parentheses here and do something like this-- com or org. I'd probably want to go in and add a question mark colon to make it non-capturing, because I don't care which it is, I just want to tolerate both. 

Alternatively, we could capture that. We could do something like this, where we do dot + so as to actually capture that. And then we could do something like this. If matches.group 1 now equals equals com, then we could support this. So you could imagine factoring out the logic just by extracting the Top-Level Domain, or TLD, and then just using Python code, maybe a list, maybe a dictionary, to validate elsewhere, outside of the regex, if it's, in fact, what you expect. 

For now, though, we kept things simple. We focused only on the .com in this case. Let's make one final change to this program so that we're being a little more specific with the definition of a Twitter username. 

It turns out that we're being a little too generous over here, whereby we're accepting one or more of any character. I checked the documentation for Twitter. And Twitter only supports letters of the alphabet, a through Z, numbers 0 through 9, or underscores, so not just dot, which is literally anything. 

So let me go ahead and be more precise here. At the end of my string, let me go ahead and say, this set of symbols in square brackets. I'm going to go ahead and say a through Z, 0 through 9, and an underscore. Because, again, those are the only valid symbols. I don't need to bother with an uppercase A or a lowercase z, because we're using re.IGNORECASE over here. 

But I want to make sure now that I tolerate not only one or more of these symbols here but also maybe some other stuff at the end of the URL. I'm now going to be OK with there being a slash, or a question mark, or a hash at the end of the URL, all of which are valid symbols in a URL, but I know from the Twitter's documentation, are not part of the username. 

All right. Now I'm going to go ahead and run python of twitter.py one final time, typing in https://twitter.com/davidjmalan, maybe with, maybe without a trailing slash. But hopefully, with my biggest fingers crossed here, I'm going to go ahead now and hit Enter, and thankfully my username is, indeed, davidjmalan. 

So what more is there in the world of regular expressions and this own library? Not just re.search and also re.sub, there's other functions, too. There's re.split, via which you can split a string, not using a specific character or characters like a comma and a space, but multiple characters as well. And there's even functions like re.findall, which can allow you to search for multiple copies of the same pattern in different places in a string so that you can perhaps manipulate more than just one. 

So at the end of the day now, you've really learned a whole other language, like that of regular expressions, and we've used them in Python. But these regular expressions actually exist in so many languages, too, among them JavaScript, and Java, and Ruby, and more. So with this new language, even though it's admittedly cryptic when you use it for the first time, you have this newfound ability to express these patterns that, again, you can use to validate data, to clean up data, or even extract data, and from any data set you might have in mind. 

That's it for this week. We will see you next time. 

# lecture8-OOP



[MUSIC PLAYING] All right. This is CS50's introduction to programming with Python. My name is David Malan, and this is our week on Object Oriented Programming, or OOP. It turns out that in the world of programming, there's different paradigms of programming languages. There's different ways of solving problems with code. And it's a little hard to see this at first if you've only learned one language. But over time, if and when you learn other languages besides Python, you'll start to notice certain patterns and certain capabilities of some languages but not another. Thus far, within the world of Python, you and I have largely been writing code that's procedural in nature, whereby we're writing procedures, we're writing functions, and we're sort of doing things top to bottom.

Everything is step by step by step, as you would expect in general from an algorithm. But along the way, we've actually dabbled in another paradigm known as functional programming with Python, whereby we've been able to pass functions around. We even had an anonymous function some weeks ago. And that's evidence of features of a functional programming language, even though we've just scratched the surface thereof. Today, we focus on another paradigm, and this one in more detail, namely object-oriented programming. And now, while some of you might have prior programming experience and have learned languages like Java, which are by design fundamentally object-oriented, Python indeed allows you a bit of flexibility when it comes to how you solve problems with code. But it turns out OOP, object-oriented programming, is a pretty compelling solution to problems that you invariably encounter as your programs get longer, larger, and more complicated.

So indeed, OOP for our purposes is going to be a solution to a problem that builds on so many of the lessons passed. So let's go ahead and do this. Let's start by writing a program very procedurally by opening up VS Code here. I'm going to go ahead and create a program called student.py. And in this program, I want to do something relatively simple initially, as we might have done some weeks ago now, where I just ask a user for their name and maybe in the context of the Harry Potter universe, their house, and just print out where that student is from. And let's gradually enhance this program by adding more and more features to it and see if we don't stumble upon problems that up until now we might not have had very elegant, well-designed solutions to. But if we introduce explicitly object-oriented programming as a programming technique, I bet we can clean up our code and set the stage for writing even more sophisticated programs, longer programs down the line. So in student.py, let me go ahead and do a name variable,

setting it equal to the return value of input, and just prompt the user for their name like this. And then let me go ahead and do the same for a house variable and prompt the user for their house using input like this. And let's do something super simple now. Let's just go ahead and print out an f string that says something like name from house, just so that I can confirm that the contents of these variables are indeed as I expect. I'm not going to do any error checking or trimming or anything like that for now. I'm really just going to spit back out whatever the user just typed in. All right, let me go ahead and run Python of student.py. Let's use our go-to like Harry, as in Harry Potter, from Gryffindor. And when I hit Enter now, let's see if I see that Harry from Gryffindor is indeed the case.

All right, so I think we have a working program at this point. But let's now introduce some of those lessons learned way back from week 0 where we started writing our own functions, not necessarily because it solves the problem more correctly. I dare say this is correct as is. But it begins to give us building blocks that we can extend so as to solve more complicated programs. So let me go back up to student.py. And let's go ahead now and do this. Let's put the entire logic I just wrote inside of our typical method called main. And let me indent those three lines so that at least they're now combined into one main method. But instead of using input on line 2 and input on line 3,

why don't we go ahead and assume for the moment that we've got some function called get_name in the world. And let's go ahead and assume we've got another function like get_house in the world that don't take parameters, but their purpose in life is, by their name, going to be to get the user's name and to get their user's house, respectively. And then I'm going to print out the exact same f-string as before. I, of course, need to implement these functions now. So let me go lower in my file and define a function called get_name. Nothing in these parentheses because it's not going to take a parameter. And I'm going to go ahead and do something like name equals input, quote unquote, name, just like before. And then I'm going to go ahead and return name. So it's a super simple function, but it's an abstraction.

I now have a function called get_name whose implementation details I don't have to care about anymore. I just know that the function exists. And I can tighten this up, in fact. I don't really need a name variable on line 8 if I'm immediately going to return that same name variable on line 9. So let me just tighten this up a little bit, even though it doesn't change the functionality, and just immediately return the return value of the inputs function call here. Let's do something very similar now for get_house, which will similarly take no arguments. I'm going to go ahead and return the return value of input, this time prompting the user for their house. And I need one final detail at the very bottom. Let's continue our habit of doing if the name of this file equals equals, quote unquote, main, then let's go ahead and actually call main.

And recall that we have that in place so that if this eventually becomes part of a module, a library of sorts, I don't accidentally call main blindly. I only do it if I mean to run main from the command line on this file. All right. So if I didn't make any mistakes here, let me go ahead and in my terminal window again run python of student.py, Enter. Let's type in Harry, Enter. Let's type in Gryffindor, Enter. And we're set. Harry from Gryffindor seems to still be working. So we haven't really solved the problem anymore correctly.

But I've laid the foundation to maybe now do some more interesting things because I've had these building blocks in place. All right. But let me propose that we could be doing this a little bit differently. Get name, get house is fine. But at the end of the day, I'm really trying to get a student from the user. I want their name and their house, not just one or the other. So maybe it would be a little cleaner still to define a function called get student and let get student do all of this work for us. Now theoretically, get student could call get name and could call get house. But because these functions are so short, I think I'm OK with just defining one function called get student that similarly won't take any arguments. But it's going to do two things.

It's going to get the student's name by prompting them with input as before. And it's going to get the student's house by also prompting them as before. And then, now, hmm, I want to return the student. But I think I might have painted myself into a corner here because I now have two variables, name and house. And yet up until now, we've pretty much returned one or the other. We've returned one value. So any suggestions for how we can perhaps solve this problem that I just created for myself whereby I want to return really a student, but I currently have a name variable and a house variable, I'd minimally like to return both of those.  I believe that we can return a dictionary, include the name and the house.  Yeah, so we absolutely could return a dictionary, a dict object in Python, whereby maybe one key is name, one key is house,

and the values thereof are exactly the values of these variables. So we could totally do that. I worry that that might be getting a little complicated. I wonder if there's a simpler way instead. Any other instincts, even if you're not sure it would work?  Return both name and house.  Return both name and house. I like the sound of that. It sounds simple. I don't have to figure out what a dictionary is going to look like.

And in fact, this too would be a valid approach, even if you've not seen this before. It turns out in Python that you can kind of return multiple values, but that's a bit of a white lie. Or we could take Mohammed's approach of actually returning a dictionary and putting multiple keys therein.  So here again, we have yet another example of how you can solve the same problem in at least two ways. And I dare say we're about to see even more.  So one way you could solve this problem whereby you want to return multiple values would be to do something like this. I could go ahead and literally return not just name, but I could put a comma and also return house. This is not necessarily something you can do in other languages if you have programmed in other languages before. It depends on the language. But it looks like, thanks to this comma, maybe I can in fact return two values as actually proposed.

 Well, if I'm returning two values in this way on line 10, how do I get both values at the same time? Well, there's a couple of ways. Let me go up to my main function. I know minimally I'm going to have to change the get name and get house to get student. But what am I going to store the return value in? I think I could actually do this. And we have seen this technique before where you can unpack, so to speak, sequences of values that are coming back. And indeed, consider this to be exactly that. Name comma house is some kind of sequence that I'm returning of values. Name comma house.

So if I want to unpack those and store the return values in two separate variables, I can in fact use the commas on the left-hand side of my assignment operator, the equal sign, to do just that. Now, to be clear, I don't need to call these variables name and house here. I could simplify this and use just n here and h here. And then I could return just n and h. But I would argue that's not very clear to the reader as to what's going on. So I think in this case, even though it's a coincidence that I've used the same variable names in get student and get main, and in main, it's a little more readable to someone like me. So I'm going to leave it as is. Well, let's go ahead and see now if this works. Let me clear my screen down here and run Python of student.py, Enter.

Let's again type in Harry. Let's again type in Gryffindor, Enter. And voila, we still see that Harry is from Gryffindor. But what are we actually doing here? What are we actually doing by returning this value? Well, it turns out that what we've just done is used a tuple. A tuple is another type of data in Python that's a collection of values. x comma y or x comma y comma z. It's similar in spirit to a list in that sense. But it's immutable. It's not mutable.

Now, what does that mean? A list, as we've seen it before, is a data structure in Python that you can change the values of. You can go into bracket 0 for the first location and change the value there. You can go to bracket 1, bracket 2, bracket 3, and actually change the values in lists. But if you have no intention of changing the values of variables and you want to return effectively multiple values, you don't have to even return it as a list. You can return it as a tuple instead just by using a comma. And it turns out we can make explicit that here's the white lie. I'm not actually returning two values per se. Whenever you use a comma in this way on line 9, you're actually returning one value, which is a tuple.

Inside of that tuple now are two values. So it's similar in spirit to returning one list with two things. Here I'm returning one tuple with two things. And the mere fact that I've used a comma and nothing else tells Python that I indeed want to return a tuple. But there's more explicit syntax that we can use instead. I can actually more verbosely put explicit parentheses around the values of this tuple just to make more clear to me, to the reader, that this isn't two values per se. This is one value with two things inside of it. And what I can actually do then too is I don't have to unpack this up here, so to speak. I can actually go up here and maybe give a more apt name like student.

And I can name the value-- or rather name the variable in which I'm storing the return value of get student as, quote unquote, student. So maybe this is a little better design now because I'm sort of abstracting away what a student is. It's implemented at the moment as a tuple with two values. But at least now I have a variable called what I mean, a student. But there's going to be a catch. On line 3, I still want to print out that student's name and their house. But I don't have a name variable anymore. And I don't have a house. And I also don't have a dictionary, as was proposed earlier. So I can't even go at those keys by name.

But what a tuple is, it's very similar in spirit to a list. But it is indeed just immutable. And what I mean by that is I can still index into it numerically by saying student square bracket 0 for the item in the first location in that tuple. And then over here, instead of house, I can say student bracket 1. Student bracket 1 is going to give me the second location in that tuple. Let me go ahead and clear my terminal window. Again, run python of student.py. Let's type in Harry. Let's type in Gryffindor, Enter. And we still have some working code.

Let me pause here now and see if there are any questions on this technique of returning a tuple and indexing into it in this way.  I guess what's an actual use case where you would use a tuple versus a list or something else that's similar?  It's a really good question. When would you use a tuple versus a list? When you want to program defensively or, in general, when you know that the values in this variable shouldn't change, so why would you use a data type that allows them to be changed? It just invites mistakes, bugs down the line, either by you or colleagues who are interacting with your code. So tuple is just another way where you can increase the probability of correctness by just not letting anyone, yourself included, change the contents therein. So it's just another tool in your toolkit.

But let's make clear, then, what I mean by immutable. Again, I claim that immutable means that you cannot change the value. Well, let's go ahead and try to do this. Let me go ahead and run this program once more as is, Python of student.py. Let me go ahead and type in, for instance, how about Padma's name. And I'm going to go ahead and say that Padma's in Gryffindor, as in the movies. And we see Padma from Gryffindor. But technically-- I went down this rabbit hole and looking at Harry Potter more closely-- technically, in the books, Padma, I believe, was from Ravenclaw. So this is actually a mistake or an inconsistency between the movies and the books. Let's see if we can't fix this inconsistency in our code.

So how about we do this? If the student's name that's inputted equals Padma, why don't we override whatever the house is and change it to be properly Gryffindor? Let me go ahead and do if student. Now, if I want to get at Padma's name, I'm going to have to do student bracket 0. I have to know what location the name is in in this tuple. But if that value equals equals Padma, let's go ahead with this if statement and make a change. Let's change the student's bracket 1 value. So the second value, if we're 0 indexing, let's change it to be another house in the world of Harry Potter called Ravenclaw. So I'm just fixing maybe the user's input. They watch the movie, so they type in Padma Gryffindor. But in the books, it was Padma from Ravenclaw.

All right. Let me go ahead and go down to my terminal window, clear my terminal, and do Python of student.py, Enter. I'm going to do Harry as well as Gryffindor just to demonstrate that that is still working as intended. Let me clear my screen again, though, and run Python of student.py on Padma. And I'll put her, too, in Gryffindor as in the movies and hit Enter. And now I just see a big mess of errors on the screen. Some kind of exception has been thrown. And indeed, a type error has happened. I'm using a data type wherein there's an error. And what is that error?

Well, tuple object does not support item assignment. It's a little arcanely expressed. That is, that's not really very user friendly. But if you think about what those words mean, tuple object does not support item assignment. So assignment is copying from right to left. So somehow, that's invalid. And here is a manifestation of the immutability of tuples. You cannot change location 0 or 1 or anything inside. That is a feature. That is the design of a tuple.

So if I want to override that, I think I'm going to have to use a different type of data that we've used before, namely a list. And that's fine. If you want to enable yourself and colleagues using your code to change the contents of that container, well, we can go ahead and return. Not a tuple using explicit parentheses or no parentheses, just the comma. But I can use square brackets. And if I'm using square brackets on the left and the right, this is indeed explicitly a list. Same idea, but it's mutable. That is to say you can change the contents of a list. So making no other changes, just returning a list with square brackets instead of a tuple with parentheses or just the comma. Let me go ahead now and run Python of student.py.

Enter. Let me type in Harry and Gryffindor again. That's still working. Good to see. Let me run this once more and type in Padma and Gryffindor, as in the movies. But no, now we've corrected it to be Padma from Ravenclaw, as in the books instead. Any questions now on tuples versus lists or this idea of immutability versus mutability? Can we use nested tuple in Python, like a nested list? Absolutely. You can have not only nested lists in Python, where one of the elements in a list could be another list. So you have some square brackets out here.

You might have some other square brackets inside. You can absolutely do the same with a tuple as well. There is no constraint on the types of values you can put in there. We've not had occasion to do that in this case. I'm just returning a simple tuple with two elements. But yes, you could absolutely do that too. Other questions on tuples versus lists? OK. For example, when I see the square brackets, is it mainly used for the list? Oh, a really good question.

Sort of. So when you create a value, like a list, you use square brackets. And that would indeed be a visual indicator that this is definitely a list. If you instead see parentheses, that's a visual indicator when creating a value that it's definitely a tuple. However, somewhat confusingly, both lists and tuples use square brackets when you access the contents of them. When you index into them at location 0 or location 1, you always use square brackets. So that's the distinction there. Good question. Allow me to propose now, if I may, that we solve this problem yet another way. And let's see if we're either making things better or for worse than us.

Recall that dictionaries or dict objects also exist in Python. And a dictionary is this collection of keys and values. And the upside in particular of a dictionary is that they have better semantics. You don't just have to assume that a name is always going to be at location 0. House is always going to be at location 1. I mean, that's the kind of thing, especially if you had three, four, or more values, eventually you or someone is going to get confused and forget what the order is. And you're going to write buggy code. So a dictionary is a little more powerful in that you can semantically associate keys, like little descriptions, with the values, those keys and those values respectively.

So let me go ahead and do this. And we can do this in a few different ways. But let me propose that we focus on get student here. And let's go ahead and do this. Let me go ahead and delete the implementation of get student as is. Let me create a student variable and initialize it to an empty dictionary. And I can do that with just two curly braces here. And then let me go ahead and set two keys inside of that dictionary. Inside of the student, there will be quote unquote a name key. And the value of that is going to be whatever the return value of input is when I prompt the user for their name.

And then the house key inside of that same student dictionary is going to be the return value of whatever the user types in for their house. And lastly, I'm going to go ahead and return student. So now I am literally returning one thing still. But this time, it's a dict rather than a tuple rather than a list. But there's still two things in it, technically four things, if you count the keys and the values. But there's two key value pairs. Now my code up here is going to have to change a little bit. And let's simplify this and remove, for instance, now the padma if statement just to focus on what's changing at hand. And let me go ahead now and leave line two alone. I'm still going to have a student variable that gets assigned the return value of get student.

But what I want to do here now is actually access the keys inside of that dictionary, not by numeric index, which was for tuples and lists, 0 and 1, but by way of the keys. Now normally, I might be in the habit, as I personally am, of using double quotes, quote unquote name inside of there, and quote unquote house inside of there. But before I even run this code and show you a mistake, see an error on the screen, does anyone want to call out what I have done wrong here? This is just an f string. I just want to print out the value of the name key, the value of the house key in this dictionary. But-- [INAUDIBLE] Your audio is a little garbled for us. But I think I heard double quotes and single quotes. So I'm going to assume that indeed, you've identified precisely the issue.

I'm just going to confuse Python right now. Even though this is an f string inside of double quotes, prefixed with an f, I can't actually use my double quotes inside my double quotes, because that's going to potentially confuse Python. Indeed, if I run this program now, Python of student.py, and hit Enter, I get a syntax error. So the program didn't even run fully. It just couldn't be understood, because it got confused by those double quotes. So the simplest fix here would indeed just be to use not double quotes, but single quotes around the keys, or conversely, flip the double quotes on the outside to single quotes, then use double quotes on the inside. You just want to be consistent. So a subtle detail.

But again, this is now specific to dictionary syntax. This isn't fundamental to how we're solving this current problem at hand. All right. Well, let's go ahead and try this. Let me go ahead now and run Python of student.py. Let's go ahead and type in Harry. Let's type in Gryffindor. And hopefully, Harry is back from Gryffindor. No syntax errors, no other errors. I think I'm back in business here.

And what I do like to be clear about using a dictionary is that it's allowing me just better semantics. Again, I don't have to remember, memorize, document that 0 is name. 1 is house. Instead, name is name, and house is house. It's just a little clearer, a little more expressive. So that's generally a good thing, especially if we stored more data about students than just their name in their house. If you had three fields, four, five, 10 different fields, no one's going to want to remember or be able to remember forever which is 0, which is 1, which is 2, and so forth, better to introduce names, like name and house in this case. But let me tighten this up further. Indeed, I'm typically in the habit of not introducing variables unnecessarily unless they make the code more readable.

And an alternative way to format the same code would be this. Strictly speaking, I don't need to create an empty dictionary, then add one key to it, then add a second key to it, and then return that dictionary. I can actually consolidate this all into one statement, if you will. Let me go ahead and do this. Let me go ahead and say name equals inputs return value, house equals inputs return value. And then instead of returning any variable name student, which I'm going to propose doesn't need to exist anymore, let me just create and return the dictionary all at once. Let me do quote unquote name in lower case here, and then the variable, it's storing the user's name, then quote unquote house as my second key, the value of which is going to be house the variable. Now, is this better?

Maybe, maybe not. Maybe the first way was a little more readable, and that's totally fine to create variables if they improve the readability of your code. But just know that you can also create and return a dictionary on the fly like this, so to speak, all in one line. And I think it's arguably pretty reasonable in this case. Why? It's just pretty short. I probably wouldn't do this if it got longer and longer and longer. I might minimally then start moving my key value pairs to separate lines. But this would just be a slightly more compact way of doing this as well. But let me propose we do one more change.

Let's go ahead and introduce that same special casing of Padma to fix her house from Gryffindor, for instance, to Ravenclaw. How do we do this with dictionaries? Well, dictionaries, like lists, are mutable. You can change what is in them just like you can lists. How do you do that? It's just a little different syntactically. So let's go back into main and do this fix. If the student variable has a name key that equals equals Padma, then, indented, go ahead and change the value of the house key inside of that student dictionary to be, quote unquote, "Ravenclaw" instead. So very similar in spirit to what we did with a list.

But instead of using location 0 and 1, we're much more clearly, explicitly, semantically using, quote unquote, "name" and, quote unquote, "house" because you index into lists and tuples using numbers, but you index into dictionaries using strings, as I've done here. All right, let me go ahead and run Python. Have student.py. We'll again do Harry from Gryffindor. And I think all is well. Let me run it one more time this time with Padma, who in the movies is from Gryffindor, but should really be from Ravenclaw. Any questions then on this progression from tuples to lists to dictionaries? We haven't necessarily introduced anything new other than those tuples, which have been available to us all this time.

But the goal at the moment is just to demonstrate this distinction among these different data types and how they each work a little bit differently. What if a combination of lists is there in a tuple? So is the list-- like, we can change the list because tuples are immutable. But lists are mutable. Correct. You can change the contents of lists, and you can put most anything you want in them-- other lists or strings, as I've done, integers or anything else. Tuples, you can do the exact same thing, but you cannot change them once you've created them. A dictionary is more like a list in that it is mutable. You can change it.

But the way you index into a dictionary is by way of these keys, these strings, as we keep seeing, rather than by numbers, those numeric indices. All right. Well, let me propose that there is yet another way of solving this problem. And indeed, I would argue that there's now an opportunity to hand. Even though this program isn't particularly complicated, all I'm doing is collecting a name from the user and a house from the user. You could imagine wanting longer term to collect even more information, like the student's patronus or magical spell or a whole bunch of other information that might belong in a student. And right now, we're just kind of using these very general purpose data types in Python-- a tuple to combine some values together, a list to do the same but let us change it later, a dictionary, which is more powerful because it's a little more structured. It does have keys, and it has values, not just values.

But you know what? We wouldn't have to be having this conversation if the authors of Python had just given us a data type called student. It wouldn't have been nice if there were just a type of variable I could create in my code called student. Then we wouldn't have to figure out, well, do we use a tuple or a list or a dictionary? But that's pretty reasonable, right? You can imagine just how slippery of a slope that is, so to speak, if the creators of a language had to anticipate all the possible types of data that programmers like you and me want to store in your programs. So they just gave us these general purpose tools. But they gave us another general purpose tool that's going to allow us to create our own data types as well and actually give them names. And that terminology is a class.

A class is kind of like a blueprint for pieces of data, objects, so to speak. A class is kind of like a mold that you can define and give a name. And when you use that mold or you use that blueprint, you get types of data that are designed exactly as you want. So in short, classes allow you to invent your own data types in Python and give them a name. And this is a primary feature of object-oriented programming to be able to create your own objects in this way. And in the case of Python in classes, even give them some custom names. So what does this mean in real terms? Well, let me go ahead and come back to VS Code here. And let me propose that we introduce a little bit of new syntax. I'm going to go ahead and clear my terminal window first.

I'm going to go to the top of my file. And I'm just going to start a thought but not finish it yet. I'm going to use this new keyword for classes called literally class. So indeed, the new keyword we're going to have here-- and if I go back to our slides here, this would be the official URL where you can read up more on this particular feature of Python in the official tutorial-- class is a new keyword we can use. Now, this is coincidentally related to students, because students take classes. But it has nothing to do with the fact that we're dealing with students. Class is a general purpose term in a lot of languages, Python among them, that allow you to define these custom containers with custom names for pieces of data. So let's go back to VS Code.

Let's use this new keyword. And let me propose that we create a class called students. And by convention, I'm going to use a capital S here. And I'm going to go ahead and, with a colon, get to later the implementation of this class. So I'm just going to use dot, dot, dot, which is a valid placeholder for now that just indicates to me that I'm going to come back to implementing this later. But as of now, it does, in fact, exist. I now have a student class defined for me that I can now use in my code here. How am I going to use it? Well, first of all, let me go down to get student.

And let me change this code to no longer use a dictionary, but to use this class. I'm going to do this. I'm going to give myself a variable called student, as I've done before. But I'm going to set it equal to capital student, open parenthesis, close parenthesis. So I'm going to do what appears to be calling a function. And that function, student with a capital S, notice, matches the name that I gave this class at the top of my file. All right, what do I next want to do? I'm going to go ahead and give this student a name. Now, if I were still using a dictionary, I would say student, quote, unquote, name using square brackets. But this is not a dictionary.

It turns out classes have what, for now, we'll call attributes, properties of sorts that allow you to specify values inside of them. And the syntax for that happens to be a dot. We've seen dots before. We've used it in the context of modules and libraries more generally. This is another similar in spirit use of a dot that allows you to get at something inside of something else. So student.name is going to be the syntax I use for giving this student a name. And that name is going to be whatever the return value of name is. And then I'm going to go ahead and say student.house to give another attribute called house and give that the return value of input here, prompting the user for house. And then as before, I'm just going to return student. But now, what's really powerful about class and object-oriented programming

more generally is that I've created this custom data type called literally student, capital S. I've stored one such student in a variable, like I can always do in a variable called student, lowercase s. But I could call it anything I want. It just makes sense to call it student as well, but lowercase for clarity. And then I'm returning that variable. And because of my syntax in lines 14 and 15, that has the result of putting inside of that class a name attribute and a house attribute. I just need to make one more change up here. I'm going to go ahead and remove our Padma code just so we can focus only on what's new rather than fixing her house. And I'm going to go in here and change the syntax that previously was for dictionaries. Again, dictionaries use square brackets and then strings in quotes, either single quotes or double quotes, depending on the context. Here, though, I'm going to change this to be student.name. And over here, I'm going to change it to be student.house.

And that's just going to be my new syntax for getting the contents of what appears to be a class called student. Let me go ahead and rerun Python of student.by, Enter. Let's type in Harry's name as before. Let's put him in Gryffindor, crossing our fingers as we often do, and Harry is indeed from Gryffindor. What, though, have I done? Let's introduce one other bit of terminology here. It turns out that I can create a class using that class keyword. But any time you use a class, you're creating what are called objects. And here is the word objects as in object-oriented programming, or OOP. Let me go back to my code here.

And even though I haven't really implemented much of it at all, I literally just left it with a dot, dot, dot, that's enough code, lines one and two, to just invent a new data type called student, capital S, that may or may not have some future functionality as well. That's enough to create a class. What, though, am I doing on line 11? On line 11, what I'm technically doing is creating an object of that class. So this, too, is another term of art. You create objects from classes. So if we go back to that metaphor that a class is like a blueprint for a house or a class is like a mold, an object is when you use that blueprint to build a specific house or something that comes out of-- in plaster, the mold, when you actually use that mold to create such an object. So a class is, again, the definition of a new data type.

The object is the incarnation of or technically instantiation of. And another term for objects would actually be an instance. You have instances of classes as well. So that's a lot of vocabulary. But at the end of the day, it just boils down to this. You can define your own class, which is really your own data type. You can then store attributes inside of it using this dot notation here. And then you can access those same attributes using code like this here. And now I have a proper student data type. And I don't have to kind of hack something together using a tuple or a list or even a dictionary.

I now have a proper data type called student that the authors of Python didn't give me. I gave myself. Any questions now on classes, this new keyword class, or this idea of these objects or instances thereof?  Is the class object mutable or immutable?  A good question. And we've clearly laid the stage for having that conversation about every data type now. We will see that they are mutable. But you can make them immutable. So you can get the best of both worlds now by writing some actual code. And we'll write more code than the dot, dot, dot in just a bit.

Other questions on classes or these objects thereof?  Then what would be the properties of those classes?  So at the moment, the properties of or the attributes of, as I've been calling them thus far, would just be name and house. It turns out that there may very well be other attributes built into classes that we may see before long. But for now, the only two attributes that I care about are the ones that I myself created, namely name and house, or again, what I would call attributes. And in a little bit, we're going to start calling those same attributes, more technically, instance variables. Name and house, as I presented them here in VS code, are really just variables called name and called house inside of an object whose type is student.  All right, so what more can we do with these classes?

Well, again, on line 11 is where we're instantiating an object of the student class and assigning it to a student variable. We're then adding attributes, name and house, respectively, on lines 12 and 13 currently. Both of those have values that are technically strings or sters, because that's what the return value of input is. But those attributes values could actually be any data type. We're just keeping things simple and focusing on defining students in terms of two strings, name and house. And then on line 14, we're returning that variable, returning that object to main so that we can actually print out who is from what house. Well, let's go ahead and add a bit more functionality here, because right now on lines 12 and 13, this is a little manual. And it's a little reckless of me to just be putting anything I want inside of this student object. It turns out with classes, unlike with dictionaries, we can actually standardize all the more what those attributes can be and what kinds of values you can set them to.

So let me go ahead and do this. Let me propose that it would actually be really nice if instead of doing this here, let me go ahead and simplify my code as follows. Let me go ahead and give myself a local variable called name and set it equal to the return value of input, like we've done many times now already. Let me give myself one other variable for now called house and set it equal to the return value of input as well, prompting the user for their house. And now, instead of creating a student object from my student class and then manually putting the name attribute inside of it and the house attribute inside of it, let me actually do something more powerful. Let me do this. Let me call that student function, which is identical to the class name. Just by defining a class, you get a function whose name is identical to the class name with the capital letter included. But instead of just doing open parentheses, closed parentheses,

let me pass in the name that I want to fill this object with and the house that I want to put in that object as well. And now, let me set the return value as before to be student equals like this. So what have I done that's different? Fundamentally, I'm still getting user input in the same way. I'm using input on line 11 and input on line 12. And I just so happen to be storing those return values in local variables. But now, and now we're setting the stage for the more powerful features of classes and object-oriented programming more generally, notice that I'm deliberately passing to this capital S student function name, comma, house. I'm passing in arguments to the function. Now, the student class is not going to know what to do with those yet.

But now, I'm sort of standardizing how I'm passing data into this student class. And ultimately, it's going to give me an opportunity to error check those inputs to make sure that the name is valid, that it has a value. And it's not just the user hitting Enter. It's going to allow me to ensure that it's a valid house, that it's Gryffindor or Hufflepuff or Ravenclaw or Slytherin or not just hitting Enter or some random value that the user types in. Because I'm passing name and house to the student class, this particular function, I'm going to have more control over the correctness of my data. So let's now go up to the student class, which up until now, I left as just dot, dot, dot. It turns out that in the context of classes, there are a number of not just attributes or instance variables that you can put inside, but also methods. Classes come with certain methods or functions inside of them that you can define.

And they just behave in a special way by nature of how Python works. These functions allow you to determine behavior in a standard way. They are indeed special methods in that sense. Now, what do I mean by this? Well, let me go back to VS Code here. And let me propose that I start to define a standard function called underscore, underscore, or dunder, as it's abbreviated, init, underscore, underscore. And then I'm going to go ahead and do open parenthesis. And then I'm going to put in here literally the word self. More on that in just a moment.

But now inside of this function, I'm going to have an opportunity to customize this class's objects. That is to say, this underscore, underscore, init method, or dunder init method is specifically known as an instance method. And it's called exactly this. This is designed by the authors of Python. And if you want to initialize the contents of an object from a class, you define this method. And we'll see what it's about to do here. Let me go back to VS Code. And let me do something like this. self.name equals name and self.house equals house. But I don't want to just init this object very generically.

I want this method called init to take in not just self, but name, house as well. Now, what in the world is going on? Because there's a lot of weird syntax here. There is this dunder init method, double underscore, init, double underscore. There's all of a sudden this parameter called self. And then there's this new syntax, self.name and self.house. Now you're seeing really a manifestation of object-oriented programming. It's not all that different fundamentally from what we've been doing for weeks with dictionaries by adding keys to dictionaries. But in this case, we're adding variables to objects, a.k.a. instance variables to objects. Now, what's going on?

Let's do this in reverse. Let's go back to the line of code we wrote earlier. On line 15, I am treating the name of this class, student, with a capital S, as a function. And I am passing in two values, name and house. What I've highlighted here on the screen on line 15 is generally known as a constructor call. This is a line of code that is going to construct a student object for me. Using synonyms, it is going to instantiate a student object for me. And again, how is it going to create that object? It's going to use the student class as a template, as a mold of sorts, so that every student is structured the same. Every student is going to have a name.

Every student is going to have a house. But because I can pass in arguments to this student function, capital S, I'm going to be able to customize the contents of that object. So if you think about the real world, if you've ever been on a street or a neighborhood where all of the houses kind of look the same, but they might be painted differently, they might be decorated a little bit differently on the outside, all of those houses might have been built using the exact same blueprint, sort of a mold, if you will. But then you can specialize exactly the finer points of those houses by painting the outside a different color or planting different trees. You can style them differently. Similar in spirit here, we have a student blueprint that's always going to have now a name and a house, but it's up to you and me to pass in any name in any house that we want. Now, where is this function?

The fact that I'm calling student capital S, and then a parenthesis and a close parenthesis with arguments inside suggests that there's a function somewhere in the world that has been defined with def that's going to be called. Well, as you might have guessed by now, the function that will always be called by definition of how Python classes work is a function called double underscore in it, double underscore. Why? It's a crazy name, but it's what the authors of Python chose to just implement the initialization of an object in Python. Now, the only weird thing, especially weird thing, I will admit, is this. It would be way clearer to me, too, if the only two parameters for in it were just name, comma, house. That's how we've defined every function thus far in the class. You just specify the parameters that you want the function to accept.

And indeed, that lines up with what I'm doing on line 15. I am only passing in two things to the student function. But it turns out that the authors of Python need to give us a little bit of help here, because suppose that you pass in name and house to this in it method, and a method is just a function inside of a class, what are you going to do with the name and the house? Like literally, where are you going to put them? If you want to remember the name and the house for this student, you've got to be able to store those values somewhere. And how do you store them in the current object that has just been instantiated? Well, the authors of Python decided that the convention is going to be that this in it method also semi-secretly takes a third argument that has to come first.

By convention, it's called self. But you could call it technically anything you want. But the convention is to always call it self. And self, as its name implies, gives you access to the current object that was just created. What does that mean? Again, now on line 14, now that it's moved down a little bit, this line here is a constructor. It constructs a student object. But there's nothing in that object initially. There's no name. There's no house.

But the object exists in the computer's memory. It's up to now you to store the name and the house inside of that object. How do you do that? Well, Python will just automatically call this in it method for you. And it's going to automatically pass in a reference to an argument that represents the current object that it just constructed in memory for you. And it's up to you to populate it with values. And what this means is that inside of your init method, you can literally do self.name to create a new attribute, a.k.a. an instance variable, inside of that otherwise empty object and put this name inside of it. It allows you to do self.house and store that value of house. Now, you could call these things anything you want. They could be n. They could be h as before.

But that's really not very self-explanatory. Much better to do this kind of convention. self.name equals name, self.house equals house. And this is like installing into the otherwise empty object the value name and house and storing them in really identically named instance variables in the object. And again, an object is just an instance of a class. Now, I know that was a lot of vocabulary. That's a lot of weird syntax. So any questions on this init method whose purpose in life, again, is to initialize an otherwise empty object when you first create it.  So what is the difference between the init method and the pod constructor?  A good question.

So in other languages, if you program before, for instance, Java, there are functions that are explicitly called constructors that indeed construct an object. They initialize it with values. Python technically calls this init method the initialization method. It initializes the value. It's on line 15 now of my code. If I scroll back down, that I'm technically constructing the object, it turns out there's another special method in Python that we won't talk about in detail today called underscore, underscore, new, underscore, underscore, that actually handles the process of creating an empty object in memory for us. But generally speaking, you, the programmer, don't need to manipulate the new function.

It just works for you. Instead, you define your own init method here, an init function, inside of your class, and that method initializes the contents of the object. So there's technically a distinction between constructing the object with new and initializing it within it. But in the world of Python, you pretty much only worry about the init method. Python generally does the other part for you. A good question. Others?  What about if you want to store more than one name or more than one house?  A good question. If you want to store more than one name or more than one house, you can do this in different ways.

You could create other attributes, technically called instance variables, like self.name1, self.name2. But we've seen in the past that that is not a very good design just to have multiple variables to store multiple things. Maybe instead, you have an instance variable called self.names, plural, and you set it equal to a list of names or a list of houses. Now, in this case, I don't think that really solves a problem, because I'm trying to implement a student singular. So it doesn't really make sense to have multiple first names, maybe a nickname, maybe a last name. So we could add those too. But I don't think we need multiple names, per se, and in this case, multiple houses. But absolutely, you could do that using some of our familiar building blocks, like lists. Other questions?  How are classes or objects represented in memory?

 How are classes and objects represented in memory? So the class is technically just code. It is the code on the top of my file, lines one through four, that defines that blueprint, that template, if you will. Objects are stored in the computer's memory by taking up some number of bytes. So you're probably familiar with bytes or kilobytes or megabytes. There's some chunk of bytes, probably all in the same location in the computer's memory or RAM, where those objects are stored. But that's what Python, the program, handles for you. Python, the interpreter, figures out where in the computer's memory to put it. You and I, the programmers, get to think and solve problems at this level. Python, the interpreter, handles those lower level details for you.

How about one final question on classes and objects?  Now, my question is if we can do the same thing with the dictionary, so I have to use classes.  Good question. If you can do the same things as you can with dictionaries, why should you use classes? Because we are just scratching the surface now of what you can do with classes. Allow me to go back now to my keyboard and show you more of what you can do with classes. But in short, you can do much more with classes. You can ensure the correctness of your data much more with classes. You can error check things. And generally, you can design more complicated software more effectively.

And we'll continue to see today features of Python and object-oriented programming more generally that allows us to do just that.  So let me propose, in fact, that first, let's just tighten up this current implementation, which again, has us with an init method that just declares two instance variables, self.name and self.house, which again, just creates those variables inside of the otherwise empty object and assigns them values, name and house respectively. Let me go ahead and just do one little thing here. I don't really need the student variable. Let me just tighten this up so that each time we improve or change the code, we're focusing really on just the minimal changes alone. So I've not fundamentally done anything different. I just got rid of the variable name. And I'm just returning the return value of this student function that's constructing my new object for me. So I'm just tightening things up as we've done many times in the past.

Well, what if something goes wrong when creating this student? For instance, what if the user does not give us a name and they just hit Enter when prompted for name? I don't want to put in my computer's memory a sort of bogus student object that has no name. I'd ideally like to check for errors before I even create it so I don't create a nameless student. It would just be weird and probably a bug to have an object that has no name. Similarly, I don't want the user to be able to type in something random as their house. At least in the world of Harry Potter, there's really only four houses-- at Hogwarts, at least. Or there's, again, Gryffindor and Hufflepuff and Ravenclaw and Slytherin, a list of four valid houses. It would be nice if I somehow validated that the user's input is indeed in that list. Now, I could do all of that validation in my get student function.

I could check, is the name empty? If so, don't create the student object. Is the house one of those four houses? If not, don't create the student object. But that would be rather decoupled from the student itself. Get student currently exists as just my own function in my student.py file. But classes and really object-oriented programming more generally encourages you to encapsulate inside of a class all functionality related to that class. So if you want to validate that a name exists, if you want to validate that a house is correct, that belongs just fundamentally in the class called student itself, not in some random function that you wrote elsewhere. Again, this is just methodology.

Because again, if we think about writing code that gets longer and longer, more and more complicated, it should make just intuitive sense that if you keep all of the house and all of the name and all of the house-related code in the student, it's just better organization. Keep all of the related code together. And that's probably going to set you up for more success. And indeed, that's part of this methodology of object-oriented programming. Let me go ahead now and change my students classes in it method to do this. If the name is blank, so if not name-- and we've seen this kind of syntax before. If you say in Python, Pythonically, if not name, that's like doing something like this. If name equals equals quote unquote. But I can do this a little more elegantly, just say if not name would be the more Pythonic way to do it.

Well, I want to return an error. Like I might want to do something like this, print missing name. But this is not good enough. It does not suffice to just print out missing name and then let the rest of the code go through. All right, well, what could I do instead? In the past, we've seen another technique. I could do sys.exit. And I could say something like missing name. And I could go up here and I could import sys. But this is a really obnoxious solution to the problem.

Just because you or maybe a colleague messed up and called a function with an invalid name, you're going to quit my whole program? Like that's really, really extreme of a response. And you probably don't want to do that if your program's in the middle of running. You might want to clean some stuff up. You might want to save files. You don't want to just exit a program sometimes in some arbitrary line just because input was invalid. So I don't think we want to do that either. But we do now have a mechanism for signaling errors. Unfortunately, I can't do something like this. I could try returning none and say, uh-uh, this student does not exist.

I'm going to hand you back none instead. But it's too late. If we scroll back down to where I'm creating the student, it's on line 17 now where I've highlighted this code. The student has already been created. There is an object somewhere in the computer's memory that's structured as a student. It just doesn't have any values inside of it. But it's too late, therefore, to return none. That ship has sailed. The object exists. You can't just suddenly say, nope, nope, there is no object.

There is an object. It's up to you to signal an error. And how do you signal an error? Well, we've actually seen this before. But we haven't had occasion to create our own errors. It turns out in Python, there's another keyword related to exceptions that Python itself uses to raise all of those exceptions we've talked about in the past when you've caught things like value errors or other such exceptions that come with Python. Well, it turns out you, the programmer, can raise-- that is, create your own exceptions when something just really goes wrong. Not wrong enough that you want to quit and exit the whole program, but enough that you need to somehow alert the programmer that there has been an error, something exceptional in a very bad way,

something exceptional has happened, and let them try to catch that exception as needed. So let me go back to the S code here and propose that if the user passes in an invalid name, it's just empty. So there's not a name. Well, what I really want to do is this. I want to raise a value error. And we've seen the value errors before. We've created value errors accidentally before. And generally, you and I have tried to catch them if they happen. Well, the flip side of this feature of exceptions in a language like Python is that you, the programmer, can also raise exceptions when something exceptional happens.

And you can even be more precise. You don't have to raise a generic value error and let the programmer figure out what went wrong. You can treat value error and all exceptions in Python like functions and actually pass to them an explanatory message like, quote, unquote, "missing name." So that at least the programmer, when they encounter this error, knows, oh, I messed up. I didn't make sure that the user has a name. And now, what do you want to do instead? Well, now, if you're the programmer, you could do something like this. You could try to create a student, except if there's a value error, then you could handle it in some way. And I'm going to wave my hand with a dot, dot, dot at how you would handle it.

But you would handle it using try and accept, just like we have in the past. And that would allow you, the programmer, to try to create the student. But if something goes wrong, OK, OK, I'll handle it nonetheless. So what's new here, again, is this raise keyword that just lets you and I actually raise our own exceptions to signal these errors. Well, let me go back to my code here. And I'm just going to go ahead and not bother trying or catching this error. For now, we'll just focus on raising it and assume that from our week on exceptions, you could add try and accept as needed in places. Let me go back to the code here and propose that something else could go wrong with house. If there is a name, we're good. But if we're given a house but it's invalid, we should probably raise an exception for that, too.

So what if we do this? If house is not in the list containing Gryffindor, quote unquote, Hufflepuff, quote unquote, let's see, Ravenclaw, quote unquote, or Slytherin, quote unquote, then with my colon, let's raise another type of value error. But rather than raise a generic value error, let's pass in an argument, quote unquote, invalid house. And so here we now see a capability that we can do with classes that we can't with dictionaries. If you add an attribute to a dictionary, a key to a dictionary, it's going in no matter what. Even if the name is empty, even if the house is a completely random string of text that's not one of these four houses, it's going into that dictionary. But with a class, and by way of this init method, you and I can now control exactly what's going to be installed, if you will, inside of this object. You have a little more control now over correctness.

And so now let me go ahead and scroll back down to my terminal window and clear it. Let me run Python of student.py. Let me type in something like Harry. Let me type in Gryffindor, Enter. And we see that indeed Harry is from Gryffindor. What if I made a mistake, though? What if I ran Python of student.py and typed Harry as the name, but I this time typed in number four privet drive, which is where he grew up. Instead of his proper Hogwarts house, let me hit Enter now. And now you see a value error. But this isn't one that Python generated for us, per se.

I raised this error. And therefore, if I went in and wrote more code in my get student function, I could also catch this error with our usual try, accept syntax. So all we have now is not just classes in our toolkit, but even more powers when it comes to exceptions, and not just catching them ourselves, but raising them ourselves, too. Any questions now on this use of classes in init, and now this ability to raise exceptions when something goes wrong inside of the initialization? So what if the user has a middle name, name, middle name, and last name? How would you fix that? A good question. If you wanted the student to have a first name, middle name, and last name, we could do this in a bunch of different ways. The simplest, though-- let me clear my screen here, and let me just temporarily do this.

Let me propose that the init method take in a first argument, a middle argument, and a last argument. And then what I think I would do down here is ultimately have first equals first. And then I would do the same thing for middle and last. So middle and middle, and then last and last. And then what I would have to do here is when I actually ask the user for their name, I might need to really go all out. I might need to ask them first for their first name and store that in a variable called first, and therefore pass in first. I might similarly need to ask them for their middle name and store that in a variable, and then pass in a second argument middle. And then lastly, if you will, let me go ahead and create a third variable called last, get the input for their last name, and pass that in as well. I could instead just use one input and just ask them for their whole name. So type in David Malin, Enter, or David J. Malin, all three of them,

and maybe I could use Python split function, maybe a regular expression to tease it apart. That's probably going to be messy because there's going to be people who don't have just two or three names. They might have four or five. So maybe sometimes it's better to have multiple prompts. But that's not a problem because with a class, we have the expressiveness to take in more arguments if we want. We could even take a list if we wanted. But I think we'd probably want to have even more error checking then, not just for name, but for first, and then maybe for middle, and then maybe for last. So it just is more and more code, though there would be ways to perhaps consolidate that too. Let me undo all of that and see if there are other questions now on classes.

I assume this is classes are something I might do at the beginning of a project. Can I just put them in a different file and import them into my project or my main code as needed? Absolutely. A really good question. You could imagine wanting to use this student class not just in student.py, but in other files or other projects of yours. And absolutely, you can create your own library of classes by putting the student class in your own module or package, per our discussion in the past about libraries more generally. And absolutely, you can do that. And later today, well, we see that we've actually been using classes you and I before in third party libraries. So you too can absolutely do the same.

How about one more question on classes? Can you have optional variables in classes? And two, can you have your own error names, like let's be egotistical and say, I want to raise Eric error? Short answer, yes. So these init functions are just like Python functions more generally, even though they're special in that they're going to get called automatically by Python for you. But if you wanted to make house optional, you could do something like this. You could give it a default value in the init functions signature, so to speak, in that first line of code on line two. And that would allow me to not have to pass in house. In this case, I'm going to continue to always pass in name and house.

But you could make things optional. And yes, to your second question, if you wanted to have your own error message, like an Eric error, you could actually create your own Eric error exception. And we'll see in a little bit that there's actually a whole suite of exceptions that exist. And you too can invent those as well. Let me propose, though, that we now introduce one other aspect of this whereby we try printing out what a student looks like. At the moment, if I scroll back down to my main function, I'm still printing the student's name and house very manually. I'm going inside of the object, doing student.name, and I'm going inside of the object again and getting student.house just to see where the student is from. But wouldn't it be nice if I could just print the student, like I've been printing for weeks, any int or float or stir or any other data type? Well, let's see what happens if I just try printing the student instead of manually going inside and trying to create that sentence myself.

Well, in my terminal window, let me go ahead and run Python of student.py again. Let me type in Harry. Let me type in Gryffindor. And voila, Harry. Whoa. OK. Main student object at 0x102733e80. Well, what is going on? Well, if you were to run the same code, you might actually see something different on your computer in terms of that number. But what you're really seeing is the underlying representation as a string of this specific object. In particular, you're seeing where in the computer's memory it is.

This number, 0x102733e80, refers to, essentially, a specific location in the computer's memory or RAM. That's not really that interesting for me or you or, generally speaking, programmers. But it's just the default way of describing via print what this thing is. But I can override this as well. It turns out that there are other special methods in Python when it comes to classes, not just underscore, underscore, init, underscore, underscore, but continuing in that same pattern, underscore, underscore, stir, underscore, underscore. So this, too, is a special method that if you define it inside of your class, Python will just automatically call this function for you any time some other function wants to see your object as a string. Print wants to see your object as a string. But by default, if you don't have this method defined in your class, it's going to print out that very ugly esoteric incarnation thereof,

where it says main.student object at 0x... Well, how can I then define my own stir function? Well, here, back in VS Code, let me propose that I go in and define not just underscore, underscore, init, but let me define a second function in this class here as follows. Def, underscore, underscore, stir, underscore, underscore. There are indeed two. Even though the font in VS Code is putting the two underscores so close, it just looks like a longer underscore, there are indeed two there on the left and the right, just like for init. This one only takes one argument that by convention is always called self, so that you have access to it. And then indented below that, after a colon, I'm going to go ahead and create a format string and return it.

So let me go ahead and return-- how about something generic first, like astudent? So I'm not going to bother even trying to figure out what this student's name or house is. I'm just going to always return astudent. Let me go back now to my earlier code, which has printstudent on line 16. Let me clear my terminal window and rerun Python of student.py, enter. Type in Harry. Type in Gryffindor. Last time, I saw that very cryptic output. This time, I see more generically astudent. More readable, but not very enlightening. Which student is this?

Well, notice that the double underscore str method takes in this self argument by default. It's just the way the Python authors designed this method. It will always be passed a reference to the current student object. What do I mean by that? When this line of code on line 6 is called, print, because it's hoping it's going to get a string, is going to trigger the underscore, underscore str, underscore, underscore method to be called. And Python for you automatically is going to pass into that method a reference to the object that's trying to be printed so that you, the programmer, can do something like this. Here's an f string with double quotes as usual. I'm going to use some curly braces and say print out self.name from self.house.

So there's nothing new in what I've just done. It's just an f string. An f on the beginning, two double quotes, a couple of pairs of curly braces. But because automatically this str method gets passed self, so to speak, a reference to the current object, I can go inside of that object and grab the name. I can go inside that object again and grab the house. So now when I go back to my terminal window, previously it just printed out a student. But now if I run Python of student.py, enter, type in Harry, type in Gryffindor, and one more time hit Enter, Harry is again from Gryffindor. But if I run this yet again, let's for instance do Draco is from Slytherin. Enter, Draco is from Slytherin.

Now it's customized to the specific object that we're trying to print. Questions on this function here, this thunder stir method. Is there anything else that the underscore underscore stir method can do? The other question is what's the difference between stir and repr? A good question. So there are many other methods that come with Python classes that start with underscore underscore. We're just scratching the surface and we'll pretty much focus primarily on these. But yes, there are many others and we'll see at least one other in just a little bit. There is an among the others is indeed one called repr, which is a representation of the Python object. Generally speaking, the underscore underscore repr underscore underscore method is meant for developers eyes.

It typically has more information than Harry from Gryffindor. It would also say what type of object it is, like a student capital S. Whereas underscore underscore stir underscore underscore is generally meant for users, the users of the program. And it's meant to be even more user friendly. But both of those can be overridden as you see fit. Well, let me propose now that we pick up where we've left off on student and just add even more functionality, but not just these special methods like double underscore in it and double underscore stir. Like let's create our own methods because therein lies the real power and flexibility of classes if you and I as the programmers can invent new functionality that's specific to students. For instance, students at Hogwarts over the time in school learn how to cast a certain type of spell. So when they say expecto patronum, something comes out of their wand that typically resembles an animal or something like that. It's a special spell that they have to practice and practice.

So let's see if we can't store not just the student's name in their house, but also their patronus, what actually they conjure when using this spell. Well, let me go ahead and clear my terminal window. And in the top of my code here, in the init method of student, let me go ahead and start expecting a third argument in addition to self, which automatically gets passed in, called patronus. And I'm not going to worry for now on validating the patronus from an official list of valid patronuses or patroni. I'm instead going to go ahead and just blindly assign it to self.patronus equals patronus. And we're going to let the user type whatever they want for now. But I could certainly add more error checking if I wanted to limit the patronuses to a specific list of them here. Let me go ahead now and prompt the user for this patronus as by, in my get student method-- get student function, defining a variable called

patronus or anything else, prompting the user for input for their patronus. And now I'm going to go ahead and pass in that third variable here. So again, similar in spirit to just adding more and more attributes to the class, I'm going to pass in all three of these values instead of just two. I'm not going to do anything interesting with that value yet, but just to make sure I haven't made things worse by breaking my code, let me run python of student.py. I'll type in Harry. I'll type in Gryffindor. And it turns out his patronus was a stag. And hit Enter. I haven't seen what his patronus is in my output because I didn't change my sturb method yet.

But at least I don't have any syntax error. So at least I've not made anything worse. But suppose now I want to have functionality not just for initializing a student and printing out a student. If my class is really meant to be a student, what I can do is not just remember information about data about students. What's powerful about classes, unlike dictionaries alone, is that classes can have not just variables or instance variables, so to speak, those attributes we keep creating. They can also have functions built in, AKA methods. When a function is inside of a class, it's called a method, but it's still just a function. At this point, we've seen two functions already, two methods called double_init and double_str. But those are special methods in that they just work.

If you define them, Python calls them automatically for you. But what if you wanted to create more functionality for a student so that your class really represents this real world, or maybe fantasy world, notion of a student where students not only have names and houses and patronuses, they also have functionality. They have actions they can perform like casting a charm, a spell, magically. Could we implement, therefore, a function called charm that actually uses their magical knowledge? Well, let's go ahead and define our very own function as follows. Let me clear my terminal window, scroll back up to my student class, and instead of creating yet another function that's special, with double underscores, I'm going to invent my own function or method inside of this class. I want to give Harry and Hermione and all of the other students the ability to cast charms, so I'm going to define a function that I can completely on my own call charm.

I could call this function anything I want. But because it's a method inside of a class, the convention is that it's always going to take at least one argument called self by convention so that you have access to the current object, even if you don't plan to use it per se. All right, let me go ahead and propose that we implement charm in such a way that the method returns an emoji that's appropriate for each student's patronus. All right, how to implement this? Well, inside of the charm method, let's go ahead and match on self.patronus, which is the instance variable containing a string that represents each student's patronus. And in the case that it matches a stag, for instance, for Harry, let's go ahead and return maybe the closest emoji, this horse here.

How about in the case of an otter? Well, in that case, let's go ahead and return, oh, maybe the closest match to the otter, which might be this emoji here. And let's see. In the case of a-- for Ron, rather than Hermione-- a Jack Russell terrier, let's go ahead and return how about-- don't have as many options here. Why don't we go ahead and return the cutest available dog in that case. And in the case of no patronus recognized, as might cover someone like Draco, let's go ahead and use a default case using the underscores as in the past. And let's go ahead and return for this. Oh, what should happen if someone doesn't have a patronus? Why don't we just see a magical wand that seems to fizzle out, as in this case?

All right. Well, now, rather than just print the student, let's go about printing their actual patronus. So I'm going to go down to my main function here. I'm going to still get a student using the get student function. But rather than print student, let's go ahead and declare expecto patronum, printing out just that as pure text. And now, let's go ahead and print out not the student, but rather the return value of their own charm method. All right, so let me go back down to my terminal window and run python of student.py and enter. Name, let's start with Harry. He lives in Gryffindor. Patronus is a stag.

And let's see, expecto patronum. And of course, we see the stag emoji. What about someone like Draco, who at least in the books doesn't have a known patronus? Well, let's go ahead and clear my terminal window, rerun python of student.py. And this time, let's type in Draco for name, Slytherin for house, and patronus is unknown. So I'm just going to go ahead and hit Enter. And now, expecto patronum. And it just kind of sizzles instead. Well, let me propose now that we remove this patronus code just to simplify our world and focus on some of the other core capabilities of classes. So at the risk of disappointing, I'm going to get rid of all of these beautiful emoji and charms.

And I'm going to go ahead and stop asking the user now for their patronus. And I'm going to stop passing it into init here. And I'm going to stop doing this here. And I'm going to instead just go ahead and restore our use of print student here. And I'm going to go ahead and get rid of patronus down here, so essentially undo all of the fun charms we just created. So we're now back at the point in the story where we have a student class with only two methods, init and stir. The first of those takes, of course, self as the first argument, as it always will, plus two more now, name and house. No more patronus. We're validating name up here. We're validating house down here.

And then we're assigning name and house, respectively, to two instance variables called name and house also. But we use self to get access to the current object to store those values therein. We then still have our stir method here, which takes one argument by default, self, and that's it. And that function is going to be called automatically any time you want to convert a student object to a string, just like print might want to do here. So let me go ahead and just make sure I haven't broken anything. Let me run Python of student.py. I'll type in Harry. I'll type in Gryffindor. Enter.

OK, we're back in business. Gone are the charms and patronuses. But at least I'm back to a situation where I have names and houses. But it turns out, at the moment, our use of classes is not very robust, even though we have this mechanism, very cleverly, if I may, in our init method of making sure that we're validating name and house, making sure that name is not blank, and making sure that house is a valid house among those four Hogwarts houses. It turns out that classes will still let me get at those attributes, those so-called instance variables, using dot notation anyway. Let me scroll down then and try to do this a little adversarially. Suppose that on line 16, I go ahead and call getStudents, which exists as before, and then I store the return value in a student variable, again on line 16.

That will ensure that getStudent gets called, which calls input and input. And then it calls the student constructor, which invokes automatically this init method. So by way of how we've laid out my code, we're going to ensure that name is not blank, and house is definitely one of those four values. My error correction or error checking is in place. But if I'm a little adversarial, I can still circumvent it. Suppose that-- fine. You're going to require me to type in Harry and Gryffindor. I'm going to go ahead and type in student.house equals, quote unquote, number four, privet drive. And you're not going to be able to stop me. Why?

Well, it turns out with classes and objects thereof, you and I can still access those instance variables using this familiar dot notation. That's how we began the story of classes, just setting these attributes ourselves. But you can also read these attributes themselves and change them later if you want. And this will effectively circumvent the if condition and the other if condition in our init method, because that is only called when you first create the student object. There's nothing stopping me at the moment from just changing the house or the name after. So if I now clear my terminal window and run Python of student.py, I'll still type in Harry and Gryffindor to meet my requirements that the house be one of those four. But when it's printed, notice I've still overridden it. So it seems that while classes do allow us a little more control over the data we're storing, it doesn't necessarily prevent the user, be it rather the programmer, be it myself or maybe a colleague, from still kind of messing things up.

So here, too, in the spirit of programming a little more defensively, allow me to introduce another feature of Python as well, namely properties. So a property is really just an attribute that has even more defense mechanisms put into place, a little more functionality implemented by you to prevent programmers like me and you from messing things up, like these attributes. So again, a property is going to be an attribute that you and I just have more control over. How? We just write a little more code using some Python conventions. And how we're going to do that is going to use in just a moment a feature-- a keyword known as @property, which is technically a function. Property is a function in Python. But we're about to see some new @syntax that allows you to decorate functions. And this, too, is a term of art.

In the world of Python, you can have decorators, which are functions that modify the behavior of other functions, if you will. And we'll leave it at that without going too much into the weeds. And we'll see by example how you can use these decorators specifically to define properties. So let me go back to VS Code here. And let me propose that I do this. I'm going to go ahead and create how about a property called house as follows. Inside of my student class, I'm going to go ahead and below my init method and below my str method, I'm going to go ahead and define a function called house that takes, as it always must, one argument at least called self. And what I'm going to do now is return self.house. So I'm just going to define a method called house whose sole purpose in life is to return the value of house.

But I'm going to define one other method, curiously also called house. But that's going to take into as argument two values, self as always and also a value called house. And I'm going to now do this. I'm going to say self-- rather, I'm going to do self.house equals house. Now, what have I done? Well, let me just temporarily add some comments here. In a moment, we're going to start referring to this generally as a getter. And down here, I'm going to refer to this as a setter. And this is terminology you frequently see in the world of Java. Some of you have programmed in Java before.

But as the names imply, a getter is a function for a class that gets some attribute. A setter is a function in some class that sets some value. And now, even though we're not done and there's a bit of a mistake in the code I've already written, intuitively, what we're going to do is this. We're trying to prevent programmers, myself included, from circumventing my error checking that I put into place for name and house. How can I do that? Well, we don't have that many building blocks in programming. We've had things like variables for data. And we have functions for actions. Well, why don't we do this? Why don't we somehow require that in order to access an attribute, you go through some function?

And let's require that in order to set some attribute, you go through some function. And conventionally, those functions are called a getter function. And a setter function. And why are we using functions, or in this case, methods inside of a class? Well, once you have functions, those are just actions or verbs that you and I can create ourselves. We can put any error correction I want in these functions because it's code that's going to get executed top to bottom. So how can I now prevent the user from setting the house to an invalid value? Let me borrow some logic from before. Rather than blindly do this, just set self.house equal to the house value that's passed in. Let's add our error checking there.

So if house is not in the following list of Gryffindor, or Hufflepuff, or Ravenclaw, or Slytherin, just as before, let's go ahead and raise a value error just to signify that, uh-uh, something has gone wrong. I'll be more explicit. I'll include a message like invalid house quote unquote. Otherwise, I'm going to proceed on now line 21 to set self.house to house. So I've just copied, if you will, or retyped my error checking inside of this so-called setter function. Now, why have I done that? Well, to be clear, whenever the user or the programmer writes code like this, student.house equals-- what's about to happen magically is Python will not just let the programmer access student.house directly. That attribute, that instance variable, a.k.a. self.house,

it's instead going to magically, automatically call this setter function for me. How does Python know to do that? Well, if it sees that on the left-hand side, there is self.house, where house is the name of the getter or setter, and then it sees an equal sign indicating assignment, that's just enough of a visual clue to say, wait a minute, I'm not going to let you access that attribute directly. I'm going to use the setter instead. Why? Because the equal sign means I'm trying to set, I'm trying to assign a value from right to left into that attribute. So what Python's going to do automatically is call this function for me. And that's amazing, because now I can execute code and algorithm to check,

do I want to let the user, the programmer set that attribute to that value? If not, I'm going to raise a value error, and you're just not going to be able to do it. If so, fine, I'll go ahead and set it for you. But in order to do this, we need a little more syntax. And I'm going to get rid of my comment, and I'm going to use that decorator. I need to tell Python to treat this method as a getter. And then the syntax for the setter is a little different. You now say, house.setter. I wish one was getter and the other was setter. That's not the way they designed it.

When you wanted to find a getter, you just say, @property above the function. And you name the function exactly like you would like the property to be called, quote unquote, house. Once you do that, you can now use a new decorator that's sort of automatically created for you called @house, because I called it house. And then you literally say, @house.setter. And this whole line on line 17 is a clue to Python that here comes a function whose name is identical, but notice that it takes two arguments, both self-- so you have access to the contents of the object-- and house, which is just going to be a stir that comes from the programmer from the human input return value, so that you can set that value as well. But there's one fix I need to make now here. Everything else, I think, is still good.

However, watch this. I no longer need this error check here. Why? Because if I scroll back down to my code here, I claimed a moment ago that code like this with student.house equals is going to automatically get Python to call my setter for me. Guess what? Even up here in my init method, calling self.house equals is also going to call my setter method, which is amazing, because now I can keep all of my error checking in one place in the setter. And it will now get called either when I create the object for the first time because of init, or even if the programmer tries to circumvent that init method and change the value of this attribute, my setter will also get called. My setter will get called any time I access .house.

But there's one fix I need to make. Unfortunately, I have collided names. Right now, if we go up here on line 5, this is an instance variable. It's a string inside of myself, inside of the current student object called name. And this is another instance variable called house. Unfortunately, if I have an instance variable called name and house, I cannot also have functions called house. They're going to collide. You've got to decide. Do you want the variable to be called house, or do you want the function to be called house? Unfortunately, you can't have both because now Python's going to confuse one for the other.

So the conventional fix for this is to do this, to have the setter not store the value that's passed in in self.house, but to use an almost identical name, but to use a little indicator that means you know you're doing this correctly, you typically, by convention, put an underscore in front of the instance variable's name. And when you return it up here, you similarly put an underscore. So now, technically, my instance variable is called underscore house, but my property, which is a fancier attribute, if you will, is called house alone. Huge amount of syntax, I know, but it's a very powerful feature. And again, this is why you can graduate from dictionaries alone and have so much more functionality at your disposal. Let me go ahead and clear my terminal window and run python of student.py, Enter, Name.

All right, let's go ahead and type in Harry. Let's go ahead and type in Gryffindor, crossing my fingers as always. And now look, invalid house. This is a good thing. Why? Because notice, in my main function, I'm still trying, maliciously, if you will, to change Harry's house to not be one of the four valid ones. I'm trying to change it to his childhood home of number four, Privet Drive. But because Python knows that, wait a minute, you're trying to assign, that is, set a value, and that value, a.k.a. house, is now defined as a property, you're going to have to go through the setter function instead to even let you change that value. And because I have this raise value error, if the house is not as intended, you're not going to be allowed to change it to an invalid value.

So I'm protecting the data on the way in through the init method, and I'm even defending the data if you try to override it there. So I think the only solution for me, the programmer, is don't try to break my own code. Let me remove that line because it's just not going to work. Let me run Python of student.py and again type in Harry, type in Gryffindor, Enter. And Harry is indeed from Gryffindor. If I did something incorrect, like Harry from number four, Privet Drive, Enter, we're again going to see the value error because my code just doesn't let that value in via manual input now or via that adversarial change. All right, that was a lot. But any question on properties?  While we are using getters and setters, it's just for the purpose so that we can find that function, that method, that function in our code.

 The reason that I'm going through the trouble of defining this getter or setter is because I want to make sure that programmers cannot do things like this. If I'm going through the trouble of validating the attributes for these student objects, I don't want you to be able to go in there and just change them at will. I want to have some control over that object so that you can just trust that it's going to be correct as designed. So using a getter and setter really just enables Python to automatically detect when you're trying to manually set a value. The equal sign and the dot, as I've highlighted here, is enough of a clue to Python to realize, wait a minute, you're trying to set a value. Let me see if this class has a setter defined. And if so, I'm going to call that. And I'm not just going to blindly assign the value from right to left. So it's just giving me more control.

Other questions on properties?  When we use getters, we just have just one argument. And if we use setters, it's always going to be two arguments. Is that normal?  Correct. It's always going to be one argument, self, for the getter, two arguments for the setter, self and something else. And the intuition for that is, if you're getting a value, you don't need to pass anything else in because you already know the object. It's called student in this case. So you're just going to get the value of that property. But if you want to set the property to something else, you've got to pass in that argument.

You've got to pass in the value to which you want to set it. So it's always 0 or 1. However, you see it as 1 or 2 because, again, any function inside of a class, a.k.a. a method, is going to be automatically passed self so that you have access to that current object in memory. How about one other question on properties?  Why didn't we use the same underscore house in init method?  A good question. So even though I'm using the underscore house here in my setter and the underscore house here in my getter, I deliberately did not use it up here. The reason for that is that by using self.house and this equal sign, that's the same pattern that I want Python to recognize. I want Python to automatically call the setter even when I'm passing in the house via the init method. If I were to change this to do this, that would circumvent the setter.

And now there's no error checking in init whatsoever. So it's such a fine line. The only thing standing between us and error checking or no error checking is the presence or absence of this underscore. But that's typically the convention. By not using the underscore there, make sure that even that assignment goes through the setter so that honestly I don't have to copy paste the same error checking in two places. I can put it just in the setter. So it's better designed. And that's why I manually retyped it at first, but then I deleted it from init. Well, allow me to propose that we make one other change to this file.

Might as well go ahead and define a property for name as well. And let me go ahead and do this. Maybe above the house property just to keep things in the same order as I defined them earlier. Let me give myself another property. This one's going to be called name. It's going to take one argument called self as always. And this one, very similarly, is just going to return self.underscore name. So I'm going to anticipate that I'm going to have to rename name also so that I don't have that same collision as before. But now let me go ahead and define another setter, this one for name. So the convention is @name.setter.

Why name? Because the property I just created is called name. So the getter and setter sort of work in conjunction in this way, if you will. Let me go down under @name setter and define another function also called name. But the key thing here is that it's not identical. It's not the exact same function name and the exact same number of arguments. The setter, again, takes a second argument. And I can call it anything I want, but I'm going to call it name because that's what's being passed in. And I'm going to put my error checking here. If not name, just like we used to do, let's go ahead and raise a value error.

And let's put an explanatory message like missing name, quote unquote. Otherwise, let's go ahead and update self.underscore name to equal name. And I don't have to change in it except to get rid of this duplicate error checking now because, again, if I use self.name equals here and self.house equals here with no underscore, both of those assignments are going to go through my two setter functions now. Before we run this, let me go ahead and remove this adversarial code, which we know won't work because we're catching it. Let me go back down to my terminal window and run Python of student.py, Enter. Let's type in Harry. Let's type in Gryffindor. And that seems to work. Let's try, though, again, to run Python of student.py with Harry from number 4, privet drive. This will not work.

A value error with invalid house because that's not one of the four Hogwarts houses. And now, for good measure, let's run it one more time. And let's not even give it a name. Let's just hit Enter when prompted. I can type anything for the house. I'll go ahead and still give it Gryffindor, Enter. Now we get another value error. But this one is for missing name. So we seem now to have all the more of a defense mechanism in place to ensure that name is as we expect. It's got to have some value that's not blank.

And house is as we expect. It's got to have one of those four values. But at the risk of bursting everyone's bubble and making you wonder, why did we just go through all of that, unfortunately, Python really focuses on conventions, not hard constraints. And by that, I mean this. If I go back into my main function after I've gotten a student on line 30 and I try to adversarially do something like this, student.house equals quote unquote number four, privet drive, we know this won't work because my setter for house is going to catch this. Watch again. Python of student.py. Let's type in Harry.

Let's type in Gryffindor, which will at least pass our check that's induced by init. But line 31 is going to trigger the same setter to be called. And we're going to raise a value error saying invalid house. Unfortunately, and if some of you are already thinking a little adversarially, tragically, look what you can do. You can change .house to be ._house. Why? Well, the instance variable is now called underscore house. The property is called house, no underscore. But the underlying attribute implemented as an instance variable is still called underscore house. And tragically, Python of student.py.

Let's type in Harry. Let's type in Gryffindor, which is correct. But watch what happens now. Oh my god. We slipped through. So what was the point of all of this emphasis from me on doing things the right way, the Pythonic way, by having this getter and setter? Well, unlike languages like Java that just prevent you from doing things like this, Python itself allows you to specify that certain instance variables can be public and accessible to anyone's code or protected or private, which means that no one else should be able to change these values. In the world of Python, it's just the honor system.

It's not baked into the language itself that there's a notion of visibility, public or private, or even somewhere in between protected. Instead, you're on the honor system. And the convention generally is, if a instance variable starts with an underscore, please don't touch it. Just don't. That's on you if you touch that variable and break things. The underscore is meant to signify a convention that this is meant to be private, but it really just means please don't touch this. Sometimes if there's two underscores, which you can use too, that's an even greater effort by programmers to say, really don't touch this. But technically speaking, there's nothing stopping you or me from circumventing all of these mechanisms, these properties, these getters and setters. We're ultimately just on the honor system not to do so when we see instance variables prefixed with one or perhaps even two underscores. All right, so this is a lot all at once.

This introduction to object-oriented programming. But it might come as quite a surprise that even though we might have identified OOP by name in weeks past, we've all been using classes and objects for weeks now in this class. In fact, if you think back on one of the very first things we did in this class, we used integers and just got integers from the user. But if you haven't already, if you go and dig into the documentation for integers, which again lives at this URL here, you would actually find that int itself is and has been for weeks a class. And in fact, this is the signature of the constructor call for an int whereby you pass in x, like a number, quote unquote, 50 or quote unquote something else. You pass in optionally the base, 10 for decimal, 2 for binary, or anything else. And that int function will actually return to you all this time an object of type int.

That is to say, int is a class. It is a template, a blueprint for creating integers in memory. And any time you and I have converted a string, for instance, to an int, you and I have been creating an object of type int that was calling, apparently, the underscore, underscore, in it, underscore, underscore method that someone else, the authors of Python wrote, to give us back that proper integer. Besides that, if you can believe it, strs, strings in Python, have been classes since the first week of this class as well. If you look up the documentation for a str, which lives at a similar URL there, you will find that when you instantiate, that is, create a str, it takes optionally a parameter called object here, the default value of which is just quote unquote, which allows you to create, in effect, an empty string, a blank string, if you will. But any time you and I have created strs or even used explicitly this str function, you are getting back an object of type str.

Any time you and I have forced a string to lowercase, per the documentation using syntax like this, you and I have been taking an object of type str and forcing it all to lowercase by calling a method called lower, a method that the authors of PyGathon built into the str class, but it's been there from the get-go. So this notion of methods is not even new today. You and I have been doing it for this long. If you've ever called strip to remove the leading and the trailing white space from a string in Python, you are calling another method that came with Python, written by the authors of Python. And even though we didn't call it a class at the time, a str all this time has been a class. And instances of strings are themselves objects. And those objects come, therefore, with these functions built in, a.k.a. methods that allow us to do things like force to lowercase and strip white space from the beginning and end.

Let's do another list. Any time you've created a list, either syntactically with square brackets or literally with list, open parentheses, closed parentheses, which is also possible, you have been using a class. If you go to the documentation for list at this similar URL here, or more specifically, the tutorial on lists here in Python, you will see that a list is and has been, since the early weeks of this class, a class itself. And that list class takes as part of its initialization an optional iterable, something that can be iterated over, like 1 comma 2 comma 3 or some list of values. And you can then get back a list containing those same iterable values. If you've ever appended something to a list in this class, as I have myself in the past, you've been using a method called append that comes with the list class that per the x here takes an argument that allows you to append something to the current list, a.k.a. self in the context of that method.

We can do this all day long if you've used a dictionary or a dict in Python. I've actually all this time been calling them dict objects. And that's for a reason. Dict itself is a class in Python. If you pull up its official documentation here, and you'll see that it is defined, indeed, as itself a class. And that class comes with methods as well. And so any time we've manipulated dictionaries, we've been in underneath the hood using all of those same methods. And in fact, we can see this if we're really curious. Let me go back over here to VS code. And let me go ahead and create a new file that very simply does something like play around with data types.

And let me go ahead and create a new file, for instance, called, say, type.py, just so that I can poke around inside of some values. And in type.py, I'm just going to go ahead and do this. I'm going to print out whatever the type is of, say, the number 50. And this is a function you've not necessarily seen me use already. And it's not one you would frequently use in your own code. There are other ways to detect, if you need to, what the type is of a variable. But in this case, type of 50 is just going to tell me and then print out what the data type is of that value. Now, hopefully, all of us could guess that 50 is indeed going to be an integer. That is an int. But we can see it in this way.

And this, too, is what's powerful about knowing a bit of programming. If you want to know the answer to a question, just try it out, like I am here. So let me go ahead and run Python of type.py, Enter. And there it is. When you print out the type of the number 50, you'll see on the screen in this cryptic syntax class, quote unquote, int. This is not something that you'd probably want to show to the user. But if you yourself just want to poke around and see what's going on or maybe use that information somehow, it's certainly at your disposal to use with this type function for that. Let's change it around a little bit. Instead of passing as the argument to type 50 as an int, let's type something also familiar, like hello, comma, world in double or single quotes.

Let me go back to my terminal window, clear the screen, and run Python of type.py again. And now, voila, there it is. All this time, a str is also a class. We can do this a few more times. For instance, let's go ahead and change hello, world to just an empty list, open square bracket, close square bracket. And this is starting to look a little cryptic. But again, notice what I'm doing. In square brackets is an empty list. We've done that before. That is the sole argument to this new type function.

And that's just being passed to the print function so that the return value of type is the argument to print. So if I now run this code, Python of type.py, there it is. A list is a class too. You might recall that I said that you can also create an empty list by literally doing list, open parentheses, close parentheses. This is a bit of an inconsistency, as we can now identify that int and str and now list, they're technically all lowercase. And I went to great lengths of creating my student class to have that capital S. And that's a convention. Because int and str and list and others come with Python, they decided to make their built-in data types, even though their classes all lowercase. But the convention, the recommendation in the Python community when creating your classes is indeed to capitalize the first letter as I did in something like student, capital S. But list, open parentheses, close parentheses is identical to really just two empty square brackets. If I clear my screen and run type.py again, you see the exact same thing.

The class is called list. Let's do one more. Let me change the list to be not square brackets but curly braces. We've done this before. Any time I've done two curly braces with nothing in between, this, of course, is an empty dictionary or a dict object in Python. Well, we can see that now. Let me clear my screen, run Python of type.py, enter, and there it is. Class dict. It's been there this whole time. We just didn't call it a class until today.

I can similarly do this one explicitly. Instead of two curly braces, let's write out dict with two parentheses. Now we have a lot of parentheses again, like with list, but this is just making even more clear that the type of a dict object is indeed the class dict itself. So this is to say that as new as a lot of today's idea and syntax might be, you've actually been using it, perhaps unbeknownst to you, for weeks now. We now just have terminology to describe what it is we've been doing all this time. And you now have the expressiveness with some practice to create your own classes, inside of which are your own instance variables, perhaps wrapped with those properties, and your own instance methods. But it turns out there's other types of methods in the world. Thus far, I've been deliberate in calling all of our variables instance variables and all of our methods instance methods.

It turns out there's other types of variables and methods out there, and one of those is called class methods. It turns out that sometimes it's not really necessary or sensible to associate a function with objects of a class, but rather with the class itself. An instance or an object of a class is a very specific incarnation thereof. Again, on that neighborhood that has a lot of identical looking buildings, but they're all a little bit different because of different paints and such, sometimes you might have functionality related to each of those houses that isn't distinct or unique for any of the houses. It's functionality that's going to be exactly the same no matter the house in question. Same in the world of object-oriented programming. Sometimes you want some functionality, some action, to be associated with the class itself no matter what the specific object's own values or instance variables are.

And for that, we have a keyword called @class method. This is another decorator, really another function, that you can use to specify that this method is not by default implicitly an instance method that has access to self, the object itself. This is a class method that's not going to have access to self, but it does know what class it's inside. So what do I mean by this? Well, let me go back to VS Code here and let me propose that we create a new file this time implementing the notion of the sorting hat from the world of Harry Potter as well to stay on theme. I'm going to go ahead and run code of hat.py. And in hat.py, let's implement the notion of this sorting hat. If unfamiliar, in the books and in the films, there is literally a pointy hat that when a student put it on their head,

that sorting hat, so to speak, decides what house the student is in, whether it's Gryffindor or something else. So let's implement in code this notion of a sorting hat such that when we pass to the sorting hat the name of a student, like quote unquote Harry, this sorting hat implemented in code will tell us what house that student should be in. All right, well, let's go ahead and do this. In hat.py, first, let's go ahead and define a class called hat. And then let's get back to implementing it itself. And I find this to be a helpful technique, not just with teaching, but when writing code. I know I want a hat class. I don't necessarily know what I want it to do yet. So I'm going to create this sort of placeholder dot, dot, dot.

So I'll come back to that. Let's now try to use this class as though it existed. And from there, I perhaps can realize exactly what functionality that class needs to have to support my use case. Let me go ahead and create a variable called hat in all lowercase and instantiate a hat object. So no matter what the hat class ends up looking like, this is the common syntax for instantiating an object of a certain class. In the past, we saw student, all lowercase, equals capital student, open parentheses, closed parentheses. And then eventually, we added in things like name and house. For now, let's assume that the hat is much simpler than a student. And it only has sorting capabilities. So I'm not going to even pass any arguments there, too.

Indeed, let me assume that the sorting hat has one function, one method inside of it called sort. And so if I do hat.sort, quote unquote, "Harry," let's propose that that prints out what house that student should be in. So that's it. I'm going to encapsulate, that is, tuck away inside of a hat class all of this requisite functionality. And I'm going to print out onto the screen what house Harry belongs in. Now I think I need to get into the weeds of actually initializing this class. Well, let me go ahead and do this. If I don't care to parameterize hat, I just want to, for instance, sort values. Let's go ahead and define this function sort first. So let's define sort as taking a first argument self, which is always going to be the case when defining an instance method as before.

But the sort method clearly takes one argument from the programmer, me, namely the student's name. And again, we've seen this dichotomy before. Even though I'm trying to pass in one argument, when I define the method, it's got to take that many arguments plus one more, self, which is always going to be automatically passed in by Python first. All right, what do I want to do? Well, let's go ahead and do something like this. Print quote unquote, or rather print this name, how about quote unquote is in quote unquote some house. I'm going to again use some placeholder code for myself because I'm not quite sure how to finish implementing this sorting hat. But I think that's enough to just test where my code is at now. Let me go ahead and run Python of hat.py and hit Enter.

And it looks like indeed, Harry is in some house. We're not done yet because it's clearly not doing anything interesting, but it at least is running correctly with no errors. Well, let's go ahead now and decide what house Harry should actually be in by introducing a bit of randomness and choosing a house randomly. Well, I can do this in a few ways. Let me go ahead and do this. I need to have a list of houses somewhere. So where can I put that? I could solve this problem in different ways. Let me propose that I do this. Let me define a method called init as I've done before that takes in self but no other arguments.

And whenever the sorting hat is instantiated, let's do this. Let's create a houses instance variable, plural, that equals this list. Gryffindor, Hufflepuff, Ravenclaw, Slytherin. So the exact same list that we've used before, and I'm storing it in an instance variable inside of this class. I'm not taking any arguments beyond self to init, but I just need this list of values somewhere, for instance. So what can I do here? Well, let me go ahead and replace some house with the actual house. Well, what could I do here? Well, I want to put a house there. Well, let's go ahead and create a variable called house.

And if you think back to our discussion of libraries, in the random module, there is a function called choice that if you pass in a list of choices like self.houses, that will pick a random house out of those four. And then on line 7, I can pass it in. If I want to tighten this up, let me just go ahead and highlight that code, get rid of the variable. It's technically unnecessary. And because the line of code is still pretty short, I'm OK with just putting it all in one line. But I could certainly use the variable like I did a moment ago. So what have I done? In my init function, I have defined a initialization of the object that stores in self.houses the list of four houses. And then in sort, I'm accessing that same list, but I'm randomly choosing the set of houses there.

Now, why have I done it in this way? This, too, is general convention. Any time you have a list of things that who knows, maybe will change over time. Places like Harvard have constructed new houses over the years, so you might have to change the list of available houses. It didn't happen in seven books or eight films of Harry Potter, but you could imagine maybe Hogwarts eventually has a fifth house. So there's generally some value in putting list of constants toward the top of your file, toward the top of the class, so it's just obvious what the list of values is. You don't want to necessarily tuck it away in some function like sort, especially if you might want to use that function-- sorry, especially if you want to use that list in multiple functions. Not just sort, but if I kept adding to this class, you might want to use that same list of houses in multiple functions.

So let's keep it in the object itself by storing it in self.houses. All right. Well, we're about to change the course of history here, perhaps. Let me do python of hat.py, and I think we're about to assign Harry to one of those four houses randomly. Huh. Name error. Name random is not defined. Well, wait a minute. Where did I go wrong here? Thinking back to our class on libraries, why did my code break and not tell me where Harry is to be? You do not import the random library.

Exactly. If the random library or module is something I want to use, I need to tell Python that at the top of my file. So let me go up here and do import random. And then below that, let me go ahead and clear my terminal window and try again. Python of hat.py, crossing my fingers, seeing where Harry is going to end up. And OK, Harry, as of now, is officially in Hufflepuff, despite everything you've read or seen. Well, let's run this again. Let me clear my window and run Python of hat.py. And now he's in Ravenclaw. That's consistent with using random.

Let's clear that and run it again. He's still in Ravenclaw, but that could happen, even though there's four choices. Let's do it again. Hufflepuff back in Hufflepuff. We can't seem to get the right answer, so to speak. Now he's in Gryffindor, albeit randomly. So we seem to have a program that, based on these limited tests, seems to indeed be assigning Harry to a house randomly. Now, I'm somewhat lazily just letting sort print out this value. I could do something else like return a string and then let me, on line 13, do the printing for me. But for now, I think we have an example of a class called hat that nonetheless applies some of our lessons learned thus far today,

where I've created a class because a sorting hat is, frankly-- well, I was about to say real world entity, but really a fantasy world entity. And indeed, that's a perhaps common heuristic or mental model to have. When should you use a class to represent something in your code? Very often when you're trying to represent some real world entity or fantasy world entity, like a student, which is something in the real world, like a sorting hat, which, OK, doesn't exist, but hats certainly do. So quite reasonable to have a class for hat. And that's not always the case that classes represent real world entities, but indeed, we've seen thus far that int and str and list and dict, these are all structures that you might have in the real world. We have integers and strings of text and other things, so it rather makes sense to represent even those things, more technically using a class as well.

You could use just a dictionary to represent a student or a hat, but again, with classes come all this and even more functionality. But I honestly am not using classes in really the right way here. Why? Well, in the world of Harry Potter, there really is only, to my knowledge, one sorting hat. And yet here I have gone and implemented a class called hat. And again, a class is like a blueprint, a template, a mold that allows you to create one or more objects thereof. Now, most of my programs thus far have been pretty simple, and I've just created one student. But certainly, if I spent more time and wrote more code, you could imagine writing one program that has a list of students, many more students than just the one we keep demonstrating. Yet it would be a little weird.

It's a little inconsistent with the real or the fantasy world of Harry Potter to instantiate one, two, three, or more sorting hats. There really is just one, really one singleton, if you will, which is a term of art in a lot of contexts of programming. So let me propose that we actually improve the design of the sorting hat so that we don't have to instantiate a sorting hat. Because right now, this is kind of allowing me to do something like hat1 equals hat, hat2 equals hat, hat3 equals, and so forth. I don't really need that capability. I really just need to represent the sorting hat with a class. But I don't really need to instantiate it. Why? Because it already exists. I need just one.

So it turns out in Python that up until now, we've been using, as I keep calling them, instance methods, writing functions inside of classes that are automatically passed a reference to self, the current object. But sometimes you just don't need that. Sometimes it suffices to just know what the class is and assume that there might not even be any objects of that class. So in this sense, you can use a class really as a container for data and/or functionality that is just somehow conceptually related, things related to a sorting hat. And there's this other decorator or function called class method that allows us to do just this. So let me go back to my code here. And let me propose that if I'm not going to instantiate multiple houses, I don't really need this init method because that's really meant to initialize specific objects from that blueprint, that template, that mold.

So let me get rid of this. But if I get rid of this, I no longer have access to self. But that's OK. Because it turns out, in addition to their existing class methods, there are also what we might call class variables. And class variables exist within the class itself. And there's just one copy of that variable for all of the objects thereof. They all share, if you will, the same variable, be it an int or a str or, in this case, a list. So what I've done here is define inside of my hat class in a class variable called houses. I don't say self because self is no longer relevant. Self refers to specific objects.

I want a variable inside of this class, a.k.a. a class variable that equals that list. Because it's inside of this hat now class, I can use that list in any of my functions. I've only got one now called sort. But if I had more, it would be accessible to all of those methods as well. And with sort, it also doesn't really make sense to sort within a specific sorting hat because, again, I only want there to be one. So I can actually specify that this is a class method by saying at class method. And I don't pass in self anymore. I actually, by convention, pass in a reference to the class itself. It's typically written as clsy. Well, if you wrote class, that would actually conflict with the keyword class that we keep using up here.

So the world realized that, oops, we can't reuse that same phrase here. So let's just call this class. This is useful in some contexts, including this one. Why? Well, notice what I can now do. I can now change self to be just class. Why? Because house is now not an instance variable accessible via self.houses. It is now a class variable accessible via class.houses, or technically cls.houses in this case. But now the final flourish is this.

Now I don't have to instantiate any hat objects as I used to on here line 13. I can just use functionality that comes with this class. So I'm going to delete that line altogether. I'm going to capitalize the hat on this new line 13 and just say hat.sort quote unquote Harry. So what have I done? I've not bothered instantiating an object of type hat. I am just accessing a class method inside of the hat class that, you know what, is just going to work. This is how class methods work. You use the name of the class, capital letter in all, dot method name, passing in any arguments you want. Python is going to automatically pass in some variable via which you can refer to that class in that function that you've implemented inside of that class so that I can do something like this.

It's not that I want a variable called houses locally in this function. I want the variable called houses that's associated with this current class. So I can still access this same list that I defined on line 6. And now, if I go back down here to my terminal and run python of hat.py, enter, Harry is still in Hufflepuff. Once more, Harry is still in Hufflepuff. Once more, Harry is back in Gryffindor, at least randomly. Questions now on these class variables or these class methods, which are in contrast with instance variables and instance methods. And the one thing at least that's a little strange here is that even though there's a decorator called at class method, there is not one called at instance method. A method is just automatically a so-called instant method when you define it without any decorator.

- Can you have a class inside another class? - You can. You can define one class inside of another. Generally speaking, this isn't done, but there are cases where it can be helpful, especially for larger, more sophisticated programs. So yes, it is possible. Other questions? - The question was about the self.houses. When we remove it and we pass the data, the variable is created itself. Why we remove the self? - So in the previous examples, both of the hat demonstration and also all of the student demonstrations,

we were creating a student object by calling student capital S, open parenthesis, close parenthesis, with eventually name and a house passed in. And then we were using the double underscore init method to initialize the self.name and the self.house instance variables therein to those respective values. In this latest version of the sorting hat, I haven't bothered with self anywhere only because, conceptually, I don't need or want there to be multiple hats in the world. I'm just using the class as kind of a container to bundle up this list of houses, this sorting functionality. Maybe eventually I'll add more functionality to it, but that's it. And so sometimes you can use object oriented programming in this somewhat different way when you want there to be functionality, but it's not specific to any one specific hat. It's specific to the sorting hat. Itself.

How about one other question now on these class variables or methods? Just another way of using object oriented programming, but to solve somewhat different problem. Well, what's the difference between the class hat and a function of hat? A good question. So why are we using a class at all and not just having a file called hat.py with a variable called houses and a function called sort? Why are we adding this complexity? In this particular case, we don't necessarily need to. I could absolutely go in here. I could get rid of the class. I could undo this indentation.

I could get rid of this decorator. And I could get rid of hat. And I could just do this. And additionally, let's see. Let's get rid of class here. Let's get rid of class here. And now run Python of hat.py, Enter. And it still works. Put Harry in the wrong house, but that's what happens randomly. That's fine too.

What we're introducing today by way of object-oriented programming, it's just a different way of modeling the world. It's not really compelling with an example like this, frankly, that's relatively simple. It's not very complex. There's not much functionality. Honestly, the version that we just typed up, these 10 lines, this is fine. This solves this problem. But as our code gets longer, as we start collaborating with other people, as the problems we're trying to solve with code get more sophisticated, you're going to find that your code gets messy quickly. And you're going to find that you have a huge number of functions, for instance, in one file. And some of them are related to each other, but some of them are not.

Well, at that point, wouldn't it be nice to just organize them a little differently? And in the world of Harry Potter, let's have a class for student. Let's have a class for professor. Let's have a class for the sorting hat. Let's have a class for something else. And so once your world gets much more complicated than some of the demonstrations we do here in class, when we want to focus on individual ideas, object-oriented programming is just a way of encapsulating related data-- that is, variables, related functionality, that is, methods-- inside of things that have names. These things are called classes. So it's just another way to solve problems.

And when we focused on libraries a couple of weeks back, that, too, was another solution to the same problem. You could define your own modules or packages, put some of your data and/or functionality in there, and that's fine, too. And sometimes, which one you should use overlaps. If you're familiar with Venn diagrams, the overlapping region might mean that you could use a class. You could use a module or a package. You could just use a single local file. Over time, you'll develop an instinct and maybe even a personal preference for which tool to use. All right. Let me propose now that we apply this same idea of a class method to clean up one other thing as well. Let me close hat.py and reopen student.py as we left it earlier.

And let me go ahead and simplify it just a little bit. I'm going to go ahead and get rid of the properties, not because there's anything wrong with them, but just because I want us to focus on some of the key ideas when we began with this program. So I'm going to go ahead and keep main as well. I'm not going to adversarially try to change Harry's address there. I'm going to instead go ahead, though, and just print the student. But this is the thing I want to focus on here. This, in our previous student examples, was kind of a missed opportunity to clean up my code. Well, what do I mean by that? Well, up here at the top of this file, even though I've simplified it by getting rid of the properties and all of that error checking,

because I want to focus on the essence of this class now, just the student's name in the house and the printing thereof, this is, by nature of classes and object-oriented programming, theoretically all of my student-specific functionality. That is to say, if I have functionality and data related to a student, you, the programmer, my colleague, would assume that it's all bundled up, encapsulated, so to speak, inside of the student class. And yet, if you scroll down further, what is this? There's a function called get student that just exists elsewhere in this file that prompts the user for a name, prompts the user for a house, creates the student object, and then returns it. That's not wrong. It works. And we saw many, many times it kept working.

But this is a little weird, right? Because if this is a function that helps you get a student, helps you get the name of a student and the house of a student, why isn't that functionality in the class itself? After all, as my code gets more and more complicated and does more things, I'm going to be looking at the student class for all student-related functionality. I'm not going to be scrolling down expecting that, oh, maybe there's some other student functionality just randomly later in this file. So it's not wrong, but this is, again, evidence of maybe bad design. Not so much with this small program, but this is an example, again, of code smell. Like something smells a little off here. Like this is probably going to get us in trouble by separating related functionality.

So again, it's a design principle, not a correctness concern. But class methods allow us to address this, too. Let me go ahead and do this. I'm going to delete get student altogether, leaving only main as my other function here. And inside of my student class, I'm going to do this. I'm going to define a function, even more simply called get. And by nature of how class methods work, it's going to take in the name of the class itself, or reference there, too, as an argument. And I'm going to move the functionality from get student into the student class. I'm going to do this. Name equals input, quote unquote name.

House equals input, quote unquote house. And then what this function is going to do is return a new student object by calling class, which again, is just an automatically passed in reference to the class itself, passing in name and house. And I will admit, this syntax seems a little strange, that now I'm calling cls and I'm passing in these arguments. But let me do one final fix here. Let me go to the top of this function and more explicitly say, this is a class method. This solves a potential chicken and the egg problem, so to speak, whereby one needs to come before the other potentially. So what am I doing here? Inside of my student class, I now have a function called get. It is, I shall claim, a class method.

What does that mean? It just means I can call this method without instantiating a student object first. Therein lies the potential chicken and the egg problem. And if unfamiliar, that's an expression meaning, well, did the world have chickens first that laid eggs? Or was there an egg that then yielded the chickens? But how did the egg get there? It's the sort of weird circular problem. And that's what we're facing here. It would be weird if you had to create a student object in order to call get in order to get another student object. That sounds messy.

Let's just get a student via a class method that, by definition, does not require you to create a student object first. Just like the hat, in its final form, we use the hat class to just say hat, capital H, dot sort. We didn't need to create a hat first. We just use the class itself. So what am I going to do here now? Let me go down to main. And instead of saying get student, notice what I can now do. Student dot get. And everything else can stay the same. All I've done now is I've migrated all of my logic from get student, which was this own standalone function.

But clearly, related to students by name, I've moved the same code, really, to inside of the student class in a more simply named function called get. But I could still call it get student if I want. It just seems a little redundant to call it get student in a student class. So I'm simplifying. So I have a method called get. But I'm calling it a class method to avoid that chicken and the egg problem. I want to be able to call get without having a student object in my universe already. And the syntax for that is at class method. The convention is to give this method at least one argument by convention called cls for class, which is just going

to be a reference to the class itself. Lines 11 and 12 are identical to what they've always been. And get student, the only new syntax here is this. But this, again, is one of the features of object-oriented programming. You can now instantiate a student object by just using cls that's passed in. I technically could use student capital S. But it turns out I'm doing what's more conventional because this will both solve and avoid problems down the line with more complicated code. This line here on line 13 just means create an object of the current class. What class is that? Well, whatever cls is. Well, that, by definition of how it all works, is going to be student.

And I want you to initialize it, as always, with name and house. So now, scrolling down, my code is this. And this is just nice to read. You perhaps have to acquire a taste for this. And I sound a little odd saying this is nice to read. But indeed, student.get just tells me what's going on. I'm going to get a student. I don't need a separate function written by me called get student in the file itself. The get functionality is built into the class. All my student-related code now is together.

So let me go down to my terminal window and run python of student.py, Enter. Let's type in Harry. Let's type in Gryffindor. And we're back to where we began. But, but, but, everything related to students now is in this here class. The only other thing in the file is main and this conditional that we always use to avoid accidentally executing main when we're making a module or a package or the like. So again, a solution to a problem, not a big one in the case of a relatively small program, but one that you will eventually encounter as your programs get longer and longer with more and more entities to represent. Questions now on this use of a class method. Does the class have to be defined before the main function in terms of the order of the program?

Oh, really good question. So when in doubt, let's try this. So let's try to change the order. Let's move main to the top, which I've often encouraged. So let's go ahead and above the class do this. And notice now that technically line two is mentioning student, which does not exist until line six and below. Let me go ahead and clear my terminal and run Python of student.py. So far, so good. Harry, Gryffindor. OK, indeed, Harry's from Gryffindor. The reason, Michael, it does not matter in this case is because we're not actually calling main until the very end.

And just as in the past, that means that Python has a chance to read everything, top to bottom, left to right, so everything exists. I would say generally, classes are defined at the top of the file. However, it would be even maybe cleaner to move the class's definition to its own file and then import it. So essentially, to make reusable code by putting it into your own module or package so that not just this program, but many others can use that definition of student as well. Other questions now on classes, class methods, or the like? I wanted to ask, is there a way to declare all the possible attributes of the class? Because it looks so inconsistent. Well, so my takeaway there is this is Python's approach to these principles. Different languages like Java just take a different approach but have very similar features.

The syntax just tends to vary. And this is how the Python community chose to implement this idea. The right mental model ultimately is that these instance variables, instant methods, belong to or operate on specific objects, a specific student, a specific hat. Class variables and class methods operate on the entire class itself or in turn all objects of that class, which we've not seen a demonstration of, but it's sort of a higher level concept. So it turns out besides these class methods, which are distinct from those instance methods, which to be fair, do not have their own decorator. They just are by default instance method. There's yet other types of methods you can have in classes in Python. They tend to be called static methods.

And they too come with another decorator called at static method, which is a rabbit hole we won't go down, but realize that there is yet other functionality that you can leverage with an object-oriented programming. But what we thought we'd do is focus really on some final core features that you see not just in Python, but other languages as well. And perhaps one of the most compelling features of object-oriented programming that we haven't yet used explicitly, though it turns out we've seen implicitly over the past weeks, is this notion of inheritance. It turns out by object-oriented programming, there's actually an opportunity to design your classes in a hierarchical fashion, whereby you can have one class inherit from or borrow attributes, that is, methods or variables from another class, if they all have those in common. So what do I mean by this here? Well, let me propose that we implement over in VS Code here a brand new file called wizard.py. Let me go ahead and run code of wizard.py.

And then let's start as before defining a class called student. And let's go ahead and first define the underscore underscore init method, which of course is minimally going to take an argument traditionally called self. And in this case, let's also have it take as before a name and a house. And then in this init method, let's go ahead and assign the instance variables self.name equals name and self.house equals house. Let's assume that there's some other functionality in this class as well, dot dot dot. But let's move on now to implementing the notion of a professor in the wizarding world as well. So for this class, let's call it professor. And a professor, let's say, is also going to have its own initialization method. So underscore underscore init.

It's going to take self, as always, as the first argument. A professor also has a name, so we'll pass that in second too. And even though some professors are heads of houses, let's assume that a professor is really identified by their name and their subject area, the class that they teach. So we'll call this third argument subject. Now, as before, let's go ahead and assign self.name equals name. And let's assign self.subject equals subject here. And as before, let's assume that there's some more functionality associated with professors as well. Well, what do you notice already here in my definitions of students and professors? Typically, we're a bit reluctant to allow for any redundancy in our code.

And here, I feel like my init method is taking a name for students. My init method is also taking a name for a professor. And I have these identical lines of code, like self.name equals name. And this is only going to get exacerbated if I now go and add some error checking. So for instance, how about if not name, we should probably be in the habit of raising something like a value error in an explanatory message like missing name. And you know what? If a professor is missing their name, I should probably copy paste that code down here. And that's where the red flag should be going off, whereby as soon as you start copy pasting code, there's probably a better way so that we can write the code once and perhaps reuse it in some way.

And here too, object-oriented programming offers a solution. It turns out that object-oriented programming in Python also supports inheritance, whereby you can define multiple classes that somehow relate to one another. They don't need to exist in parallel in this way. There could actually be some hierarchy between them. So for instance, in the wizarding world, we could argue that both a student and a professor are, at the end of the day, wizards. So maybe what we should really define is a third class, for instance, called wizard that has any of the common attributes for students and professors alike. And for now, we've kept it relatively simple. The only thing they have in common is a name and a name in student and professor respectively.

So why don't we minimally factor that out first? All right, so let me go ahead here. And just to keep things organized, at the top of my file, let's define a third class called wizard. And a wizard will have its own initialization method, so def_init___ and self, as always. And a wizard, let's say for now, is only going to be initialized with their name in this way. And now I'm going to go ahead and do some of that error checking. So if not name, we'll raise a value error in the wizard class. Otherwise, we'll go ahead and do self.name equals name. And heck, dot, dot, dot, maybe some other functionality as well. But not a subject, which is specific to professors, and not a house, which I've claimed is specific to students.

Now I think we can begin to maybe remove some of the redundancies in our other classes here. So for instance, down with student, why don't I go ahead and remove this error checking here and remove this assignment of self.name equals name? Because I'm already doing that in wizard. And similarly, down here in professor, why don't I do the same? Let's get rid of the error checking. Let's get rid of self.name equals name. Because again, I'm doing that already up there for wizard as well. But at the moment, even though they're all in the same file, I haven't told Python that a student is a wizard and a professor is a wizard. So I really need to link these two together. And the way you can prescribe inheritance, whereby one class should inherit from another, or conversely, one class should descend from another,

we can do this. I can say class student, but before the colon, I can go in and say in parentheses, a student inherits from or is a subclass of wizard, which conversely is the superclass of the student class. So this just means that when I define a student class, go ahead and inherit all of the characteristics of a wizard as well. And I'm going to do the same thing for professor. So parentheses, wizard after the class name professor. And that's going to give me access to some of that same functionality. But because my student class and my professor class still have their same init methods, those are the methods that are going to get called whenever I create a student in code or I create a professor in code. I need to somehow explicitly say that I also want to use the functionality in the wizard classes init method.

And the way to do this in Python is as follows. Let me go into my init method for student. And let me call super with no arguments, which is a reference to the superclass of this class. So if this class is student, the superclass, that is the parent class, is wizard. So super, open paren, closed paren, will have the effect of accessing the superclass, and then I'm going to go ahead and explicitly call its init method. And I'm going to pass to the wizard's init method the name that the student's init method was passed. And I'm going to go ahead and do the same down here in wizard. This is one line of copy paste, but I think I'm OK with it here because it's still allowing me to do all of the name assignment and the error checking up in the wizard class instead.

I think we're OK now by just calling super.init for both student and professor alike. Now, admittedly, this syntax is definitely out there. The fact that we're calling super in parentheses and dots and underscore underscore on the left and the right of init here, but it's just a combination of these two ideas. Super, open parentheses, closed parentheses is a way of programmatically accessing a current class's parent class, or superclass. And underscore underscore init, of course, is just referring to now that class's own initialization method. Now, per the dot dot dot, there could be a lot more going on in these classes, but what's nice now is that wizard, as a class, is taking care of all of the assignment of a wizard's name, whether that wizard is a student or a professor. And it's even doing some error checking to make sure that the name was actually passed in. Meanwhile, student is inheriting all of that functionality and using it by calling the superclass's own init method,

but it's additionally taking the house that's presumably passed into the student constructor function and assigning it to its own instance variable, self.house. And similarly, professor are restoring in self.subject the subject that was passed into that one as well. Now, how might we use these classes? Well, we'll continue to wave our hands with a little bit of detail here. But if at the bottom of this file or any other file that imports this one, I could now write code like this. I could create a student variable and assign it the return value of the student constructor call. And maybe that student is named Harry. And that student's house, for instance, might be Gryffindor. And meanwhile, I might do something like this.

Professor equals professor over here. And notice the lowercase s on the left, capital S on the right, same for professor on the left, lowercase and uppercase on the right, respectively. Professor quote unquote "severus" and how about defense against the dark arts will be his subject. And meanwhile, if we want more generically just a wizard who at the moment is neither student nor professor teaching classes actively, we could even do that. We could do wizard equals wizard in capital W on the right hand side of the equal sign because it's the name of the class and someone like Albus passing in only Albus's name, not a house, not a subject, because in this case, he's known only as a wizard. Meanwhile, with each of these calls, this line of code here will ensure that the init method for the wizard class is called. This line of code here will ensure that the init method of the student class and in turn the init method of the superclass wizard is called. And then lastly on this final line of code,

will this syntax ensure that the init method of the professor class is called, which in turn calls the init method of the superclass as well. Any questions now on this idea of inheritance, which is a key feature of a lot of object oriented programming languages?  So is there any situation where-- because from what I've seen so far, a lot of times there's a lot of nesting. If you do super, does it go one up? Is there any situation where it's nested in another class as well, above wizard, let's say?  A really good question. If you were to have a super superclass, so your hierarchy is even taller than the two levels of hierarchy that we currently have, absolutely. But what's nice about object oriented-- what's nice about inheritance, as the name implies, is just as you might have inherited certain traits as a human from your grandfather and grandmother, or your great grandfather or great grandmother, some of those properties can actually trickle down to you, so to speak, in the context of code as well.

So when you descend from another class, that is, when you subclass a superclass or a super superclass, you actually do inherit all of the functionality, not just from one level above you, but from two or three. So you can indeed access some of that functionality as well. And you can even override it if you want some of these classes to behave a little bit differently than others. Other questions on inheritance?  So it's kind of similar to the last one, but can you have two parents on the same level?  A really good question. So there are ways to implement descendants from multiple parents. And there's different ways to do this, not just in Python, but other languages. We've kept things simple here, though, by having a single inheritance path.

A good question. How about one more question on inheritance?  Can we have multiple arguments in super dot double underscore init?  Yes, but in this case, I'm only passing in name on line 18, and I'm only passing in name on line 10. Why? Because on line 2, when I define the init method for the wizard class, I only expect a single argument. But I could absolutely have on their common functionality-- like I could add in a patronus if both students and professors have patronuses that can come out of their wands. I could have two arguments instead.  We've been using this feature of object-oriented programming now for quite some time in the form of exceptions. Indeed, if you look at the official documentation for exceptions in Python, you'll see that there's not even the ones we've seen in class,

like value error and others. There's any number of others as well, but they are all themselves hierarchical in nature. This is just a subset of the available exceptions that come built into Python. And you can actually, as a programmer, create your own exceptions as well. But as this chart here captures hierarchically, all exceptions we've seen thus far actually descend from or inherit from super classes already. So for instance, at the bottom of this list here is value error, which we've seen quite a bit. And if you follow the line straight up on this ASCII rendition of this chart, you'll see that value error has a parent class or super class called exception. And the exception class, meanwhile, has a parent class called base exception. Why did the authors of Python do this?

Well, it turns out that whether you have a value error or a key error or an assertion error or any number of others, there's a lot of functionality common to all of those types of errors that you want a programmer to be able to use. And so it turns out that the authors of Python decided, you know what, let's not have a dozen or more different classes that all just have copy pasted similar functionality. Let's create this hierarchy so that even though the exceptions toward the bottom of this list are very precise, they at least inherit, that is, borrow some very common functionality up above. So it turns out that when you use the try and the accept keyword in Python, generally speaking, we've tried to catch very specific exceptions like value error. But technically, you could capture the parent or even the grandparent exception for a given exception, especially if you're not necessarily sure which one is going to get raised.

Or better yet, there could be many exceptions that get raised, but you want to handle them all the same. And you don't want to necessarily enumerate them in parentheses separated by commas. You want to say you want to handle all exceptions of a certain superclass in much the same way. So this has been latent this whole time. Anytime we've seen or used or caught or now raised exceptions. And built into Python is this hierarchy. And if you were to invent your own exception, generally, you wouldn't want to start from scratch. You would want to descend from, that is, subclass, one of these existing exceptions and add your own twist on it, your own functionality as well. Well, there's one final feature of object-oriented programming that we'd like to share with you today. And that it will perhaps be quite the eye opener is what you can really do now that you have classes at your disposal.

And this, too, surprise, has been a feature you and I have been taking for granted for weeks now. This has just worked, but it's been implemented in a way that you can now leverage yourself. It turns out that Python and some other languages, too, support this notion of operator overloading, whereby you can take very common symbols like plus or minus or other such syntax on the keyboard. And you can implement your own interpretation thereof. Plus does not have to equal addition. And minus does not have to equal subtraction. And in fact, you and I have already seen another context in which plus means something else. Plus has not always, in Python, meant addition, per se. What else has Python used plus for?

 Concatenation.  For concatenation, for joining two strings, for adding to a list. Can you use plus as well? So plus has actually been, funny enough, overloaded by the authors of Python for us. And so we can use the same symbol in much the same way as addition, but with different data types to solve slightly different problems. Well, let me propose that we go back over to VS Code here. And let me go ahead and create a new final file called vault.py. So code of vault.py. And let me propose that we implement the idea of a vault at Gringotts, keeping on theme, wherein there's a bank in the world of Harry Potter. And within this bank, families and individuals have vaults containing all sorts of money in the wizarding world.

And the type of money that exists in the world of Harry Potter are coins called galleons and sickles and canuts. And those are in descending order of value. And so inside of a vault might be a whole bunch of coins, gold, silver, and bronze, essentially, each in those denominations tucked away. So how can I go about implementing, first of all, the idea of a vault so that I can store, for instance, for Harry Potter, how much coinage is in his family's vault, or for Juan Riesley, the same? Well, let me go ahead in vault.py and first create a class called vault, essentially meant to represent a bank vault. Perfect, another real world or fantasy world entity that I want to represent with code. I could use a tuple or a list or a dictionary. But again, I'm going to get a lot more functionality with classes. And we'll see one final flourish with operators.

Inside of this vault class, let's go ahead and do this. Let me define my init method, taking its first argument of self. And let me define three arguments to this. When you create a vault in my code here, I want to be able to initialize it with some number of galleons, some number of sickles, and some number of canuts. I want the programmer to be able to pass in one or more of those values, ideally. But they can be optional, so I'll give them defaults. So let's go ahead and define a parameter called galleons, whose default value will be 0, sickles, whose default value will also be 0, and canuts, whose default value will be 0 as well. So the programmer can pass in 1 or 2 or 3 or heck, even none of those.

And they'll all have some implied defaults. How do I want to remember those values that are passed in? Well, let me do this. self.galleons equals galleons, and self.sickles equals sickles, and self.canuts equals canuts. And so I could add some error checking, especially if you don't pass in a number. I could turn these into properties to do even more validation. But let's keep it simple and, as always, focus only on the new ideas. So I'm just going to trust that these values were passed in, and I'm going to immediately assign them to these instance variables. What now do I want to do?

Well, let's come up with a way of printing out what is in someone's vault, ultimately. But first, let's do this. Let's create a vault for the potters by creating, via assignment, a new vault. And let's say that the potters have 100 galleons, 50 sickles, and 24 canuts. All right. And that's in that vault. And let's print out, for instance, potter. All right. Let's run this code and see how it works now. Let me go ahead and run Python of vault.py.

Enter. OK. Seems to work. No syntax errors or anything else. But this is not very enlightening. How do I fix this? Thinking back to what we've done before.  You have to use the underscore underscore str.  Exactly. I need to use one of those special methods that comes with classes and define for myself how I want a vault to be printed as a string. So let me go ahead and do that.

Let me define the str method, taking in self as its sole argument here. And let's just return a very simple string that just reveals what's in the vault. So I'm going to return a formatted f string, inside of which is self.gallions and then the word gallions. So I know which those are. Then let's do self.sickles. And let's output the word sickles. And then lastly, let's output self.canuts and then canuts here. So I know in this string just how many of each of those coins I have in this particular family's vault. All right. Let me go ahead and run Python of vault.py, changing nothing else except the str method.

And now we see, indeed, that Harry has 100 gallions, 50 sickles, and 25 canuts. All right. Well, let's do one thing more here. Below that, let's go ahead and define a Weasley variable. And Ron never seemed to have quite as much money in the vault as did Harry. So let's say that the Weasley vault will have 25, 50, and 100. So I'll just reverse the order of those denominations rather than Harry's 100, 50, 25. And now let me go ahead and print Weasley like this. And let's go ahead and clear my terminal window, run Python of vault.py. This time, that str method will be invoked twice, once for each of those vault objects.

And we'll see, indeed, that the first one for Harry's got 100, 50, and 25, respectively, versus Ron's 25, 50, and 100, respectively. But now let's do something interesting. Suppose that you wanted to combine the contents of two vaults, be it Harry's and Ron's or any other two people. How would you go about doing this in code? Well, if I wanted to combine the vaults for someone, I could do this. Well, I could do galleons equals-- let's do potter.galleons plus Weasley.galleons. That gives me a variable called galleons that has the sum of Harry and Ron's galleons. Let's next do sickles equals potter.sickles plus Weasley.sickles. And then lastly, let's do knuts equals potter.knuts plus Weasley.knuts. I've got three variables.

What can I now do with these values? Well, let's create a third, a new vault. Total will be the name of this variable equals a new vault, capital V, notice. And now let's pass in those three new variables, galleons, sickles, and knuts. And that's it. And let's print out this total vault. So we should now see three vaults, one for Harry, for Ron, and the combination, the addition of the two. Let me go ahead and rerun python of vault.py. And there we have it. What was 100, 50, 25, and 25, 50, and 100 combined through addition now is 125, 100, 125.

So pretty straightforward, using techniques from weeks ago where we're just declaring a few new variables and doing some addition. But wouldn't it be cool if I could do something like this? Wouldn't it be cool if I could just somehow not manually create my own vault and do all of this annoying math up here? What if I could just do potter plus Weasley and get rid of all of this logic here? Wouldn't it be nice if I overload the operator we know as plus, just like str does, just like list does, to allow me to add two vaults together on the left and the right? Well, it turns out in Python and through operator overlating, there is a way to do just this. If you consult the documentation, there's this and so many other special methods that come with classes. The third one we'll see here is this one here, underscore, underscore, add, underscore, underscore. And you'll see that it very generically is described in the documentation as working for any object, be it a vault or a str or a list or something else.

By convention, it's going to take a first argument called self and then it's going to take some other argument by convention called other. Self, in effect, is going to be referring to whatever object is on the left of a plus sign. Other is going to be referring to whatever's on the right hand side of a plus sign. Thereby giving us a way of describing in code the operand on the left and the operand on the right of the operator plus in between. That is to say, if I go back to VS code here, what I'm trying to do is implement support for this. Well, let me try without writing any other code just yet. Python, a vault.py, enter, type error, unsupported operand types for vault and vault. That is to say, Python at this moment does not know what it means to add two vaults together. You and I might have an instinct, probably want to combine the galleons and the sickles and the canuts respectively. Python doesn't know that.

It just knows that you have a new class called vault. But let's teach Python to do this. Let me clear my terminal window. Let me scroll back up to the class itself where at the moment, I only have two special methods, init and str, but let's add this third. All right. Let me go into the class here and define underscore underscore add underscore underscore and then specify its first parameter as self as before and then a second parameter for this particular method called by convention other. Now, as always, I could name those parameters anything I want, but I'm going to stick with convention here. And now inside of this method, am I going to have to now add together the contents of two vaults? Well, what two vaults? Well, if we scroll down to our goal at hand, the goal, of course, is to add this vault plus this other vault, potter plus Weasley respectively.

Well, it turns out in Python that when you do overload an operator like plus, what's going to happen automatically as soon as Python sees that is it's going to call that underscore underscore add underscore underscore method and it's going to pass into it two arguments. Whatever the operand is on the left, potter in this case, and whatever the operand is on the right, Weasley in this case, and those values are going to get passed in as self and other respectively. What that means is that we can access their contents up here in our implementation of that as follows. Let me go ahead and define a local variable called galleons and set that equal to, for instance, the sum of self.galleons, whatever is in potter's vault in this case, plus whatever is in Weasley's vault in this case, which would be other.galleons. Let me do the same for sickles, self.sickles plus other.sickles. And let me lastly do that for knuts. So self.knuts plus other.knuts.

But at the end of the day, I'm going to need to return a brand new bigger vault that contains all of those contents together. And if we ultimately want to assign that bigger vault to a variable like total here on the left, we'd better indeed return a value from this add method. So I'm going to go ahead and give myself a brand new vault as by returning capital vault, which of course is going to call my vault function into which I can now pass some of those initialization arguments. Well, how many galleons, sickles, and knuts do I want this brand new vault to contain? Well, I want it to contain this many galleons, this many sickles, and this many knuts. So ultimately, what we're doing in this implementation of add is adding together those galleons, sickles, and knuts, passing them to the vault function so that we get a brand new bigger vault and return that altogether. So now I've defined this new special method called add that should now just make plus work for two vaults. All right, let's see.

Let me run down to my terminal window. Python of vault.py and hit Enter, and voila. And now we've implemented an overloaded operator plus to do what you and I as humans would hope would be the case when you add two vaults together. But I've now written the code more specifically to teach Python what it means concretely to add two vaults together. And it's with very similar code in effect underneath the hood that Python is doing this for two strings to concatenate them together, to joining two lists into a new list with lists and so many other classes as well. Any questions now on operator overloading with this example here?  How would you go about creating a function for adding a student and a vault for two separate classes? How would that be possible?  Let me see what happens here.

I don't know offhand. Let's do this. Let's create a stir and see what happens if I add potter plus a stir. Stir object-- yeah, OK. So it would work. I'm just figuring this out as I go here, Eric. So just to be clear, what I did was I just changed Weasley to stir just to see what would happen when I add a vault plus a stir. And it will work theoretically. Why? Because so long as the type of value on the left has an add method implemented, other can be any type that you want.

You just have to decide in code what it's going to mean conceptually to add a vault plus a string, which in this case probably doesn't make any sense at all. But it's possible. It's going to be the operand on the left. And I'm inferring that. I did not know the answer a moment ago. I'm inferring that because what I got was an attribute error here on line 11 because Python did not like this. Other .gallions didn't work. But I could make it work by figuring something out. Really good question.

Didn't know that one myself. Other questions on operator overloading.  Can you define new operators in Python?  I don't think so. There is a very long but precise list of operators that you can overload. I do not believe you can assign arbitrary characters to be operators in Python. Let me defer to Carter in the chat to revoke-- OK, I'm seeing two of my colleagues are saying, no, not possible. So I'm going to go with my first instinct. No. Otherwise, that'd be kind of cool. You could make emoji do whatever you want to.

How about one final question on operator overloading?  Is that the only operation you can do? Is this-- as far as like, can you do a subtraction as well?  You can. You can do so many others. Let me-- if Carter, you don't mind pulling up this URL here. So this link here, special method names in today's slides, you'll see a long list of all of the operators that you can overload. You can do less than, equals than, plus equals, minus equals. Pretty much any symbol you've seen me type on the screen can be overloaded in the context of classes. So even though today we focused entirely on object-oriented programming,

this is a technique that we've been using really since the first week of the class. Because indeed, those ints, those stirs, those floats, those lists, those dictionaries, and so much more were already underneath the hood this whole time, classes and objects thereof. But you now, as a programmer, have the ability to create your own classes with your own instance or class variables, with your own instance or class method, with your own properties, and even with your own custom behavior for operators. So ultimately, you can absolutely continue using those simple tuples or lists or those dictionaries or other structures as well. But object-oriented programming and with it classes and now these objects is just another tool in your toolkit. And dare say, as your code gets more sophisticated and your problems get bigger, you'll find that being able to model these real world or even fantasy world entities with classes and related data and functionality will ultimately just allow you to define code that's not just correct, but ever well designed as well.

This was CS50. [BLANK_AUDIO]

# lecture9-Et Ectera


[MUSIC PLAYING] DAVID J. MALAN: All right. This is CS50'S Introduction to Programming with Python. My name is David Malan. And over these past many weeks have we focused on functions and variables early on, then conditionals, and loops, and exceptions, a bit of libraries, unit test file layout, regular expressions, object-oriented programming, and really, et cetera. 

And indeed, that's where we focus today, is on all the more that you can do with Python and programming more generally beyond some of those fundamental concepts as well. In fact, if you start to flip through the documentation for Python and all of its form, all of which is as always accessible at docs.python.org, you'll see additional documentation on Python's own tutorial and library, its reference, its how-to. 

And among all of those various documents as well as others more online, you'll see that there's some tidbits that we didn't quite touch on. And indeed, even though we themed these past several weeks of around fairly broad topics that are rather essential for doing typical types of problems in Python, it turns out there's quite a number of other features as well, that we didn't necessarily touch on, that didn't necessarily fit within any of those overarching concepts, or might have been a little too much too soon if we did them too early on in the course. 

And so, in today, our final lecture, well, we focus really on all the more that you can do with Python and hopefully whet your appetite for teaching yourself all the more to. For instance, among Python's various data types, there's this other one that we haven't had occasion to yet use, namely, a set. 

In mathematics, a set is typically a collection of values wherein there are no duplicates. So it's not quite a list. It's a bit more special than that in that somehow any duplicates are eliminated for you. Well, it turns out within Python, this is an actual data type that you yourself can use in your code. And via the documentation here, might you be able to glean that it's a useful problem if you want to somehow automatically filter out duplicates. 

So let me go ahead and go over to VS Code here. And let me go ahead and show you a file that I created a bit of in advance, whereby we have a file here called houses.py. And in houses.py, I already went ahead and whipped up a big list of students inside of which is a number of dictionaries, each of which represents a student's name and house respectively. 

Now, this is a pretty sizable dictionary. And so, it lends itself to iteration over the same. And suppose that the goal here was quite simply to figure out, well, what are the unique houses at Hogwarts in the world of Harry Potter? 

It would be nice, perhaps, to not have to know these kinds of details or look them up online. Here we have a set of students, albeit not exhaustive, with all of the houses. But among these students here, what are the unique houses in which they live? 

Well, I could certainly, as a human, just eyeball this and tell you that it's, well, Gryffindor, Slytherin, and Ravenclaw. But how can we go about doing it programmatically for these students as well? Well, let's take one approach first here. 

Let me go into houses.py. And let me propose that we first how about create an empty list called houses in which I'm going to accumulate each of the houses uniquely. So every time I iterate through this list of dictionaries, I'm only going to add a house to this list if I haven't seen it before. 

So how do I express that? Well, let me iterate over all of the students with for student in students, as we've done in the past. 

And let me ask you a question now. So if the current student's house-- and notice that I'm indexing into the current student because I know they are a dictionary or dict object, and if that student's house is not in my house's list, then, indented, am I going to say houses.append, because again, houses is a list. And I'm going to append that particular house to the list. 

Then at the very bottom here, let me go ahead and do something somewhat interesting here and say, for each of the houses that I've accumulated in, I could just say houses. But if I just say houses, what was the point of accumulating them all at once? I could just do this whole thing in a loop. Let's at least go about and sort those houses with sorted, which is going to the strings alphabetically. 

And let's go ahead therein and print each of the houses. Let me go ahead now in my terminal window and run Python of houses.py and hit Enter. And there we have it. Gryffindor, Ravenclaw, Slytherin in alphabetical order, even though in the list of dictionaries up here, technically the order in which we saw these was Gryffindor, Gryffindor, Gryffindor, Slytherin, Ravenclaw. So indeed, my code seems to have sorted them properly. 

So this is perfectly fine. And it's one way of solving this problem. But it turns out we could use more that's built into the language Python to solve this problem ourself. Here I'm rather reinventing a wheel, really the notion of a set wherein duplicates are eliminated for me. 

So let me go ahead and clear my terminal window and perhaps change the type of object I'm using here. Instead of a list, which could also be written like this to create an empty list, let me go ahead and create an empty set, whereby I call a function called set that's going to return to me some object in Python that represents this notion of a set wherein duplicates are automatically eliminated. 

And now, I can tighten up my code. Because I don't have to use this if condition myself. I think I can just do something like this. Inside of my loop, let me do houses.add. So it's not append for a set, it's append for a list. But it's add to a set per the documentation. 

Then let me go ahead and add this current student's house. And now, I think the rest of my code can be the same. I'm just now trusting per the documentation for set in Python that it's going to filter out duplicates for me. 

And I can just blindly add, add, add, add all of these houses to the set and any duplicates already there will be gone. Python of houses.py and Enter. And voila, we're back in business with just those three there as well. 

Let me pause here to see if there's any questions now on this use of set, which is just another data type that's available to you, another class in the world of Python that you can reach for when solving some problem like this. 

STUDENT: How can we locate an item in a set, for example, find Gryffindor in that set? 

DAVID J. MALAN: How do you find an item in a set? You can use very similar syntax as we've done for a list before. You can use syntax like if Gryffindor in houses then, and you can answer a question along those lines. So you can use in and not in and similar functions as well. Other questions on set? 

STUDENT: Look what happens if you have a similar house name? Let's say instead of Slytherin, it is maybe an O instead of an I. Will the for loop loop throughout each of those letters in the house name? 

DAVID J. MALAN: It would compare the strings. So if Slytherin appears more than once but is slightly misspelled or capitalized, if I heard you right, those would appear to be distinct strings. So you would get both versions of Slytherin in the result. 

However, we've seen in the past how we can clean up users' data if indeed it might be messy. We could force everything to uppercase, or everything to lowercase, or we could use capitalize the function built into strs, or title case that would handle some of the cleanup for us. 

In this case, because the data is not coming from humans using the input function, I wrote the code in advance, it's safer to assume that I got the houses right. But that's absolutely a risk if it's coming from users. 

Allow me to turn our attention back to some of the other features here that we can leverage in Python if we dig further into the documentation and read up more on its features. Well, in some language, there's this notion of global variables, whereby you can define a variable that's either local to a function, as we've seen many times, or if you put a variable outside of all of your functions, perhaps near the top of your file, that would generally be considered a global variable. 

Or in the world of Python, it might be specific to the module. But for all intents and purposes, it's going to behave for a given program as though it is global. 

However, it turns out that if you do this when solving some problem down the line, whereby you have multiple functions and you do have one or more variables that are outside of those functions, you might not be able to change those variables as easily as you might think. So indeed, let me go back to VS Code here. And in just a moment, I'm going to go ahead and create a new file, how about called bank.py. 

Let's go ahead and implement the notion of a bank wherein we can store things like money in various forms. And let me go ahead and do this. Let me go ahead and implement a very simple bank that simply keeps track of my total balance, the number of dollars or cents or whatever I might be storing in this bank. And I'm going to give myself a variable called balance at the top, which is an integer, a set to zero. 

Now let me go ahead and define a main function as we often do. And inside of my main function, let me go ahead and print out, quote unquote, balance, and then print out the value of balance itself. Passing to print, as we've often done, more than one argument so that they get separated by a single white space. 

And now, since I have a main function, really setting the stage for doing more interesting things soon, let me go ahead and do our usual if the name of this file equals equals underscore underscore main, then go ahead and call main. 

So this is a terribly short program, but it's perhaps representative of how you might solve some future problem in Python. Whereby you have a main function that's going to eventually do some interesting stuff. And at the top of your file, you have one or more variables that are just useful to keep there because then you know where they are. And perhaps not just main but other functions can access them as well. 

So let's see. When I run this program, Python of bank.py, I would hope based on my own intuition thus far that I'm going to see that my current balance is zero. That is to say, even though the balance variable is defined on line one, hopefully I can still print it online five inside of main, even though balance was not defined in my main function. 

Here we go. Hitting Enter. And voila, balance zero. So it does seem to work. Even if you declare a variable in Python outside of your functions, it appears that you can access it. You can read the value of that variable even inside of a function like main. 

Well, let's get a little more adventurous now. Because this program really isn't solving anyone's problems. Let's go ahead and implement more of a bank, like the ability to deposit money into the bank and to withdraw money from the bank. Thereby giving me some more functions that might very well need to access that same variable. 

Let me clear my terminal window here. And let me go ahead and pretend for the moment that I have the ability to deposit, say, $100 or 100 coins, whatever the unit of currency is here. And then, maybe I want to withdraw straight away 50 of those same dollars or coins. 

And now, let me go ahead and just print out at the bottom of main what my new balance should be so that in an ideal world, once I have deposited 100 then withdrawn 50, after starting at 0, I'd like to think that my new balance on line eight should indeed be 50. 

All right. But I haven't implemented these functions yet. So let's do that as we've done in the past. Down here, I'm going to go ahead and define another function deposit. I'm going to say that it takes an argument called n for a number of coins or dollars or the like. 

And I'm just going to do this. I'm going to go ahead and say, balance plus equals n, thereby changing the value of n. I could do it more verbosely, balance equals balance plus n. But I'm going to use the shorter hand notation here instead. 

And now, let's implement withdraw. So define a function called withdraw. It too is going to take a variable-- an argument n for number of dollars or coins. And now, I'm going to go ahead and subtract from balance using minus equals n as well. And I'm still going to call main if the name of this file is main. 

So what have I done? I've just added not just one but three functions total, all of which apparently need to access balance by printing it, incrementing it, or decrementing it, as we've seen here. 

All right. Let me go ahead and focus on these three functions here. Let me go back to my terminal window and run Python of bank.py and hit Enter. And wow. Seems like we've introduced some number of problems here. 

And what are these problems? Well, unbound local error is perhaps the first time we've seen this one here. Local variable balance referenced before assignment. And that's a bit misleading, definitely confusing. Because I absolutely assigned balance of value on the top of my code. 

And indeed, if I scroll back up, nothing has changed or been lost up there. It's definitely been assigned to value. And now on line 12, it would seem, that when deposit is called I'm just trying to access that variable again. 

So intuitively, what might explain this error message, unbound local error? What is Python telling us there that Python can or can't do when it comes to these so-called global variables that are at the top of my file? 

STUDENT: So if you want to change this variable, you should write an inside left function main. And the global variable unchangeable. 

DAVID J. MALAN: Yeah. 

STUDENT: [INAUDIBLE] 

DAVID J. MALAN: So if you want to change the value, it might need to be local to the function. If you are trying to change a global variable though in a function, it clearly does not work. So it's OK to read a global variable. Read meaning access it and print it and so forth. But apparently, you can't write to a global variable in the same way from within one of these functions. 

All right. Well, maybe the fix is to do this. Let me clear my terminal window and that error. And maybe I could just do this. Let's get rid of the global variable. And let's go ahead and put it, for instance, inside of main. Might this now work? 

Well, let me try this now. Python of Bank.py Enter. That alone did not solve it. I still have an unbound local error. This time though, it's for a different reason. It turns out now that balance on line two is by definition a local variable. A local variable is one that exists in the context of a function, at least in this case. A global variable is the opposite, one that does not, for instance at the top of my file. 

So here is another distinction in Python. If you declare a variable in a function, like main, just as I've done on line two with balance, it is indeed local to that function. Deposit and withdraw do not have access to that same variable. Why? Because it's local to main. 

And so, you would think now we're kind of stuck in this vicious cycle. Well, maybe the solution then is to move balance globally so all three functions can access it. But clearly, where we began, as Elena noted, we can't therefore change it. 

So it turns out the solution to this problem in Python is ironically exactly this keyword here. It's a little different as you might have seen if you've programmed before in other languages. But there's indeed a keyword in Python called global that allows you to tell a function that, hey, this is not a variable that's local to you. I mean it to be a global variable that I want you to edit. 

So if I go back to VS Code here, clearing my terminal window to get rid of that error. Let me go ahead and undo the change I just made and put balance back at the top of my file. But this time, what I'm going to do is I'm going to inform my two functions that need to change the value of balance, that it is indeed global, by typing global balance again here as well as here. Global balance. 

I still leave the same lines of code now on lines 13 and 18, that increment and decrement balance. But this now use of keyword global is a little bit of a clue to Python that, oh, OK. It's not a local variable. This is not a bug that you've introduced. You mean for me to edit this variable up above. 

So now, let me go ahead in my terminal window and run Python of bank.py. I'm hoping to see that my balance is zero plus 100 minus 50 is 50. And indeed, it now is. It starts off at zero per my first print statement on line five. But it ends up at 50 total at below that on line eight. Let me pause here to see if now there's any questions on these global or local variables. 

STUDENT: What happens when you declare a variable globally, and as in the same variable globally and in a function? 

DAVID J. MALAN: A good question. You're always thinking about the so-called corner cases. So if you declare a variable both globally, like at the top of your file, and then an identically named variable inside of a function, same name, the latter will shadow, so to speak, the former. That is, you'll be able to use the latter, that is the local variable. But it will have no effect on the global variable. Temporarily, Python will only know that the local variable exists. 

So in general, the rule of thumb is, just don't do that. Not only might it create bugs in your code because you don't quite change what you intend to change. It's also perhaps non-obvious to other readers as well. Other questions on globals or locals? 

STUDENT: OK, what if we decide to add balance as an argument inside the main function? 

DAVID J. MALAN: Yeah, another good instinct. But in this case, that also is not going to solve the problem. Because if you pass in a variable like balance to each of the functions and then change it within that function, it's only going to be changing in effect a local copy thereof. It's not going to be changing what's outside of those functions. So I think we actually need a better way altogether. 

And in fact, allow me to transition to perhaps a modification of this same program. Recall that we looked most recently at this notion of object-oriented programming. Whereby you can model real world entities, for instance a bank, and you can model and encapsulate information about that real world entity, for instance, like someone's account balance. 

So let me propose that we actually do this. Let me start from scratch with bank.py. Get rid of the global variable altogether. And actually use some object-oriented code. Let me define a class called account to represent someone's bank account. And then, let me go ahead and initialize with my init method, which again, takes by convention at least one argument called self. 

Let me go ahead and initialize every person's bank account to some value like zero. Now, how can I do that? Well, I'm going to go ahead and do self.balance equals zero. Thereby giving me an instance variable called balance initialized for this account to zero. 

But I'm going to proactively remember how we also introduced this notion of properties which might otherwise collide with the names of my instance variables. So just by convention I'm going to do this. I'm going to rename this instance variable proactively to underscore balance to effectively indicate that it's private, even though that's not enforced by Python. It's just a visual clue to myself that this is something that really I should not-- or other code should not touch, just functions in this class. 

Now, let me go ahead and do this. Let me go ahead and define an actual function called balance that really is going to be a property whose purpose in life is just to return self.balance. And I'm going to go explicitly and say this is indeed a property of this class. Now, let me go ahead and re-implement those other two functions, deposit and withdraw, but in the confines of this class. 

So I'm going to say, define deposit. It's going to take in an argument self as always, but an additional one n, a number of dollars or coins to deposit. And how do I now manipulate this? Well, I'm going to do self._balance plus equals n. And now down here, I'm going to do def withdraw self n, just like for deposit. But here, I'm going to do self.balance minus equals n. 

And now, if I go down below this class, I'm going to go ahead and define myself a main function just so I can try this now out. I'm going to go ahead and create an account object by calling the account constructor, that is the name of the class with two parentheses if I'm not passing in any arguments to init. I'm going to go ahead now and print out as before the balance of my account. 

But to do that, I'm going to access the property of that account like this. And I'm going to go ahead now and say, deposit another $100 or coins with deposit 100. And I'm going to go ahead, like before, and also now immediately withdraw for whatever reason 50 of the same. 

And now, I'm going to print one last time balance followed by account.balance, again, accessing that property. And for this whole thing to work, of course, I need one of these if name equals equals underscore main, then go ahead and call main. 

Now, before I run this, you'll see that it rather escalated quickly. I had a very simple goal at hand to implement the notion of a bank. And I was able to implement that perfectly fine ultimately by declaring balance to be global but then to tell each of my functions that it is indeed global. 

But that's not really the best form of encapsulation we have at our disposal now. Per our focus on object-oriented programming, if we're trying to implement some real world entity like an account at a bank, that's what classes allow us to do. And it allows us to solve that same problem perhaps a little more cleanly, certainly if we're going to accumulate more and more functions or methods over time. 

So if I didn't make any mistakes here, if I run Python of bank.py and hit Enter now, you'll see that it just works just fine. Because in the world of classes in Python, these so-called instance variables are by definition accessible to all of the methods in that class because we're accessing them all by way of that special parameter self. 

So which way to do it? For a reasonably small script wherein you are simply trying to implement a script that has some global information, like an account balance that you then need to manipulate elsewhere, the global keyword is a solution to that problem. 

But generally speaking, in many languages, Python to some extent among them, using global variables tends to be frowned upon only because things can get messy quickly. And it can become less obvious quickly exactly where your information is stored, if some of it's up here, some of it's in your function. 

So generally, the rule of thumb is to use global variables sparingly. Though technically speaking, in Python these global variables are technically local to our module if we were indeed implementing a library and not just a program. 

So in short, try to use global variables sparingly. But when you do, there is a solution to these same problems. Questions now on globals or our reimplementation of the same idea but using full-fledged object-oriented programming? 

STUDENT: I just would like to ask, what this property does? 

DAVID J. MALAN: What this property does. So if I go back to VS Code here, you'll see that this was a technique we looked at in our lecture on object-oriented programming. Whereby a property is a instance variable that somehow protected. It allows me to control it can be read and written. 

So in this case, I only have what's called generally a setter. And or sorry. In this case, I only have what's generally called a getter. And there's no mention of the word getter here. This is just @property means. That function balance will allow me, recall, to use syntax like this, where I can pretend as though balance is indeed with no underscore an instance variable. 

But I can now prevent code like mine in main from trying to change balance. Because I do not have a setter, I would not be able to do something like account balance equals 1,000 to just give myself 1,000 or coins because I have not defined a setter. So again, per our focus on object-oriented programming, these properties just allow me some finer-grained control. 

Some languages allow you to define variables that are, so to speak, constant. That is, once you have set a value to them, you cannot change the value of that variable. And that tends to be a good thing because it allows you to program defensively. Just in case you accidentally, or someone else, accidentally tries to modify the value of that variable, if you have declared it in some language as a constant, it cannot be changed, or usually cannot be changed without great effort. 

Unfortunately, in Python, we're again on the sort of honor system here. Where we have conventions to indicate that something should be treated as though it's constant. But that's not actually enforced by the language. 

So for instance, let me go back here to VS Code. And let me create a new file, for instance, called meows.py. And let's see if we can't implement the notion of a cat meowing on the screen. So I'll do code of meows.py. And in meows.py, let me go ahead for instance and implement a very simple program that just has a cat meowing three times. 

So how about this. For i in the range of three, go ahead and print out, quote unquote, meow. All right. Well, we've seen in the past how we can clean this up a little bit. For instance, if I'm not actually using i, I might as well Pythonically just change the name of that variable to underscore even though that has no functional effect here. But here we have this three randomly hardcoded, that is, typed explicitly into my code. And it's totally not a big deal when your code is only two lines. 

But imagine that this is a much bigger program with dozens or even hundreds of lines. And imagine that one of those lines just has a three in there somewhere. You're never going to find that three very easily. And it's going to be very easily overlooked by you or colleagues or others that you've hardcoded some magic value like a three right there in your code. 

So it tends to be best practice, not just in Python but other languages as well, any time you have what is essentially a constant, like a number three that shouldn't ever change, is to at least let it bubble up, surface it to the top of your code, so that it's just obvious what your code's constant values are. 

And so, by that I mean this. At the top of this file, it would probably be a little clearer to colleagues, and frankly, me tomorrow after I've forgotten what I did today, to define a variable like meows and set it equal to three. 

And then, instead of hardcoding three here or even lower in a much bigger program, let me just go ahead and pass in that variable's value to my loop. So that now it's just kind of obvious to me that meows is apparently the number of times to meow. 

And if I ever want to change it, the only code I have to change is at the very top of my file. I don't need to go fishing around or figure out what's going to break, what do I need to change. I just know that I can change these constants up at the top. 

The problem though with Python is that Python doesn't actually make variables constant. It's indeed a convention in Python and some other languages to at least capitalize your variables when you want to indicate to the world that you should not touch this. It is constant. But there is literally nothing in my code preventing me from saying, you know what? Today I feel like four meows instead. That would work. 

In other languages though there's typically a keyword or some other mechanism syntactically that would allow you to prevent line three currently from executing. So that when you try to run your code, you would actually get an error message explicitly saying, you cannot do that. So Python, again, is a bit more on the honor system when it comes to these conventions instead. 

Now, it turns out there's other types of constants, quote unquote, that Python typically manifests. And in fact, let me go ahead and change this around a little bit. Let me delete this version of meows. And let me introduce, again, a class from our discussion of object-oriented programming, like a class representing a cat, another real-world entity. 

Recall that within classes, you can have not just instance variables but class variables. That is variables inside of the class that aren't inside of self, per se, but they're accessible to all of the methods inside of that class. Here too, there's a convention but not enforced by Python of having class constants, whereby inside of the class, you might want to have a variable that should, should, should not be changed. But you just want to indicate that visually by capitalizing its name. 

So for instance, if the default number of meows for a cat is meant to be three, I can literally inside of my class but outside of any of my defined methods just create a class variable all capitalized with that same value. And then, if I want to create a method, like meow, for instance, which as an instance method might take in self as we know. And then, I might have my loop here for underscore in the range of-- and now I need to access this. 

The convention would be to say cat.meows to make clear that I want the meows variable that's associated with the class called cat. Then I'm going to go ahead and print out one of these meows. And now, at the bottom of my code, outside of the class, let me go ahead and do something like this. Let me instantiate a cat using the cat constructor. 

Notice this is important. Per our discussion of OOP, the class is capitalized by convention. But the variable over here is lowercase. And I could call it just C or anything else. But I kind of like the symmetry of calling it little cat here and big cat, so to speak, over here. 

And now, if I want this particular cat to meow that default number of three times, I can just do cat.meow like this. And that method meow is going to, per line five, access that class constant. But again, it's constant only in the fact-- only in the sense that you should not touch that, not that it's actually going to be enforced by the language. 

Let me go ahead then and run this with Python of meows.py. And there it is, three of our meows, meow, meow. It turns out that Python is a dynamically typed language. That is to say, it's not strongly typed. Whereby when you want an int, you have to tell the program that you are using an int. You don't have to tell the program that you are using a str, or a float, or a set, or anything else. 

Generally speaking, to date, you and I, when we're creating variables, we just give a variable a name. We frequently assign it using in the equal sign some other value. And honestly, Python just kind of dynamically figures out what type of variable it is. If it's, quote unquote Hello, world, the variable is going to be a str. If it's 50, the integer the variable is going to be an int. 

Now, in other languages, including C, and C++, and Java, and others, it's sometimes necessary for the programmer to specify what types of variables you want something to be. The upside of that is that it helps you detect bugs more readily. 

Because if you intend for a variable to store a string or an integer, but you accidentally store an integer or a string, the opposite, or something else altogether, your language can detect that kind of mistake for you. When you go, for instance, to run the program, it can say, no, you've made a mistake. And you can fix that before your actual users detect as much. 

In Python too here, it's again, more of a friendly environment where you can provide hints to Python itself as to what type a variable should be. But the language itself does not strongly enforce these. Rather, you can use a tool that will tell you whether or not you're using a variable correctly. 

But it's typically a tool you would run as the programmer before you actually release your code to the world. Or if you have some kind of automated process, you can run this kind of tool just like you could reformat or link to your code with some other program before you actually release it to the world. 

So how might we go about using these so-called type hints? Well, they're documented in the usual place in Python's own documentation. And it turns out there's a program that's pretty popular for checking whether or not your code is adhering to your own type hints. 

And that program here is called mypy. And it's just one of several. But this one is particularly popular and can be easily installed in the usual way with pip install mypy. And its own documentation is at this URL here. But we'll use it quite simply to check whether or not our variables are indeed using the right types. 

So how can we go about doing this? All right, let me go back here to VS Code, clear my terminal window, and in fact erase meows.py as it currently was. And let's implement a different version of meows that quite simply has a function called meow that does the actual meowing on the screen. 

And then, I'm just going to go ahead and call that function down toward the bottom. I'm not going to bother with a main function just for simplicity so that we can focus as always only on what's new. 

So here we are defining a function called meow. It's going to take a number of times to meow, for instance n for number. And inside of this function, I'm going to do my usual for underscore in the range of n go ahead and print, quote unquote, meow. 

So based on our earlier code, I think this is correct. I've not bothered defining the variable as i. I'm instead using the underscore because I'm not using it anywhere. But I think I now have a working function whose purpose in life is to meow zero, or one, or two, or three, or more times. 

Well, let's use this function, again, not bothering with main. I'm just going to keep my function at the very top because there's only one. And I'm going to write my code here on line six. So I'm going to give myself-- I'm going to ask the user for a number. And I'm going to go ahead and prompt them in the usual way for that number of times to meow. And now, I'm going to go ahead and call meow on that number. 

Now, some of you might see what I've already done wrong. But perhaps I myself don't. So let me go into my terminal window and run Python of meows.py, the goal being to prompt me. This seems to be working. I'm going to type in three. And I would expect now the meow function to print out meow three times. Enter. 

But no. There's some kind of type error here. str object cannot be interpreted as an integer. Why might that be? Why might that be? 

STUDENT: Because the input function returns a string instead of an integer. 

DAVID J. MALAN: Exactly. The input function returns a string or a str, not an int. So in the past, of course, our solution to this problem has just been to convert the string to an int by using the int function. But now, let me start programming more defensively so that honestly, I don't even find myself in this situation at all. 

Let me go ahead and do this. Let me add what's called a type hint to my function that explicitly specifies for meow what type of variable should be passed in. 

I'm going to go ahead now and change the very first line of my code and my function to specify that n colon should be an int and this is a type hint, the fact that I've added a colon, a space, and the word int is not creating another int or anything like that. It's just a hint, an annotation, so to speak to Python, that this variable on the left called n should be an int. 

Now, unfortunately, Python itself doesn't care. Because again, these type hints are not enforced by the language. And that's by design. The language itself and the community prefers that Python be dynamically typed, not so strongly typed as to require these things to be true. But if I run meows.py, type in three again, the same error is there. 

But let me go about trying this mypy program, an example of a program that understands type hints. And if I run it proactively myself can find bugs like this in my code before I, or worse, a user, actually runs and encounters something cryptic like this type error here. 

Let me clear my terminal window and this time run mypy space meows.py. So I'm going to run mypy on my program, but I'm not running Python itself. When I hit Enter, we'll see this. All right. We see now that mypy found apparently an error on line seven. Error, argument one to meow has incompatible type str expected int. So it's still an error message. 

But mypy is not a program that my users would use. This is a program that you and I as programmers would use. And because we have run this code now before we, for instance, released this program to the world, I can now see even before the code is called or run, oh, I seem to be using my argument to meow wrong. I had better fix this somehow. 

Well, I can actually go about in hints adding type hints even to my own variables here so as to catch this another way too. If I know on line six that I'm creating already a variable called number, and I know already that I'm assigning equal to the return value of input, I could give mypy and tools like it another hint and say, you know what? This variable called number should also be an int. 

That is to say, if I now start getting into the habit of annotating all of my variables and arguments to functions, maybe mypy can actually help me find things quite quickly as well before I get to the point of running Python itself. 

Let's go ahead and try this again. Mypy of meows.py and hit Enter. And this time, notice that mypy actually found the mistake a little more quickly. Notice this time it found on line six that, error, incompatible types and assignment expression has type str, variable has type int. 

So before I even got to the point of calling meow, line six, via this type hint, when used and analyzed by mypy has helped me find, oh, wait a minute. I shouldn't be assigning the return value of input to my variable called number in the first place. Why? Mypy has just pointed out to me that one returns a str. I'm expecting an int. Let me fix this now instead. 

So let me clear my terminal window. And now, let me do what most of you were probably thinking I should have done in the first place after all of these weeks. But now, let me go ahead and convert the return value of input to an integer. For today's purposes, I'm not going to try to catch any exceptions or the like. We're just going to assume that the user types this in properly. 

And now, let me go ahead and run mypy of meows.py, having not only added to type hints to my argument, to my function, to my variable down here on line six. And I've also now fixed the problem itself. Let me go ahead and run mypy. And success, no issues found in one source file. 

Now, it's more reasonable for me to go and run something like Python of meows and just trust that when I type in three, at least I'm not going to get a type error. That is, I didn't mess up as a programmer with respect to the types of my variables. 

Why? Because when I wrote the code in the first place, I provided these annotations, these hints that inform tools like mypy that my intention had better line up with what the actual code does. Let me pause here and see if there's now any questions on type hints or mypy. 

STUDENT: Is it common or how common is it for those to be used? Or is it just that it's more used in more complex code where it's more difficult to ensure that you're actually using the correct type in the way that you're using the variables? 

DAVID J. MALAN: It's a good question. And it's rather a matter of opinion. Python was designed to be a little more versatile and flexible when it comes to some of these details, partly for writeability, to make it easier and faster to write code, partly for performance so that the program like Python doesn't have to bother checking these kinds of details, we can just get right into the code. 

The reality, though, is that strong type checks do tend to be a good thing for the correctness of your code. Why? Because programs like mypy can find, before your code is even run, if there's already known to be an error. And it tends to be good for defensive programming. 

So the situation essentially is that within the Python ecosystem, you can annotate your types in this way. You can use tools to use those type hints. But to date, Python itself does not enforce or expect to enforce these conventions. 

In larger code bases, in professional code bases, commercial code bases, probably depending on the project manager or depending on the engineering team they may very well want themselves to be using type hints. Why? If it just decreases the probability of bugs. 

In fact, let me propose now that I-- imagine a situation where instead of expecting that meow prints meow, meow, meow some number of times, suppose that I accidentally assume that the meow function just returns meow some number of times. 

We saw, for instance when focusing on unit tests that it tends to be a good thing to have functions that return values, be it an int or a string, rather than just having some side effect like printing things out themselves. 

So perhaps I'm still in that mindset. And I've just assumed mistakenly for the moment that meow returns a value, like meow, or meow meow, or meow meow meow, a big string of some number of meows, rather than just printing it itself, as it clearly does at the moment on line three. 

And therefore, suppose that I accidentally did something like this. Rather than just getting the number and passing it to meow, suppose I did this. Suppose I declared a number of-- a new variable called meows, the type of which I think should be str. 

And suppose, again, I assume accidentally that meow returns to me a string of those meows so that I myself can then print them later. This would be a little more conducive, arguably, to testing my meow function. Why? Because I could expect that it's returning meow, or meow meow, or meow meow meow, separated by new lines, returning a str that I could then assert equals what I expect it to be in something like a unit test. I'm not going to bother writing any unit tests now. 

But let's just suppose that's the mindset I'm now in. And so, on line seven I'm assuming that I want to assign the return value of meow to a new variable called meows which I've annotated with this type hint as being a str, just so we can see another variable. This one is not an int but a str instead. 

Well, let me go ahead and run this code now, Python of meows.py, Enter, typing in three. And you'll see a curious bug. Meow meow meow none. Well, why is that? Well, it turns out at the moment, my meow function only has a side effect. It just prints out meow some number of times. It doesn't explicitly return a value as it would if there were literally the return keyword there. 

By default then, when a function in Python does not explicitly return a value, its implicit return value is in effect none. And so, what we're seeing here is this-- on line eight, because I'm assigning the return value of meow, which is none, to my meows variable, line three is what's still printing meow meow meow. 

And line eight is what's now incorrectly printing none. Because I accidentally thought that meow returns a value, but it doesn't. So its return value is effectively none. So I'm printing very weirdly the word none at the bottom. 

So how could I go about catching this kind of mistake too? I might make this mistake. But maybe with less frequency if I'm in the habit of annotating my code with this new feature called type hints. 

What you can do here is this. Let me clear my terminal window to get rid of that artifact. And up here, let me additionally specify with some funny looking syntax that my meow function actually by design returns none. So you literally use this arrow notation. 

In Python when hinting what the return value of a function is, you would do this. After the parentheses, a space, a hyphen, a greater than symbol, like an arrow, and then another space, and then the type of the return value. For now, it's indeed going to-- [SWALLOWS] excuse me, return none. But now, at least I can catch it like this. 

If I now run not Python but mypy on my code, which would be a habit I'm now getting into if using type hints. Check that I'm using all of my types correctly before I even run my program. We'll see that now mypy has found online seven that meow, quote unquote, does not return a value. 

And mypy knows that because I have proactively annotated my meow function as having none as its return value. So now, mypy can detect that. I should now realize, oh, wait a minute. I'm being foolish here. Meow clearly does not return a value. I should not be treating it like it does on line seven. Let me go about actually fixing this now. 

So how do I go about fixing this? Well, let's practice what we preached in our focus on unit tests, having a function like meow not have side effects like printing itself. But let's have it return the actual string. And I can actually do this kind of cleanly. Let me clear my error message in my terminal window here. Let me get rid of the loop here. 

Let me say this time that OK, fine, meow is going to return a value, an actual str or string. So I've changed none to str. And now, I can implement this in any number of ways, maybe even using a loop. But recall that we have this syntax in Python, which will, I think, solve this problem for us. If I want to return a string of n meows, what I can actually do, recall, is this. Return quote unquote meow, backslash n, times that number n. 

So it's kind of a clever one-liner, avoids the need for a for loop or something more involved than that, to just say, multiply meow backslash n against itself three times, or n times, in this case, in general, so that I get back a big string of zero meows, one, two, three, or many more meows instead. 

I think now my code on line six is actually correct. Now I've changed meow to behave the way I was pretending to assume it always worked. So I'm storing in meows plural a variable that's of type str. Because now, meow does have a return value of type str itself per this type hint as well. 

All right. Let me go ahead now and print meows. But because each of my meows comes with a trailing new line, the backslash n, I'm going to proactively fix what would be a minor aesthetic bug. And I'm just going to avoid outputting an extra new line at the end of those three. 

So if I run Python of meows.py now, type in three, there's my meow meow meow. And now, no mention of none. Questions now on type hints, and these annotations in mypy, and using them to defensively write code that just decreases hopefully the probability of your own bugs? 

STUDENT: Is the return three set have double quotes that have meow slash n, why the program don't take it as a [? string? ?] 

DAVID J. MALAN: Why does the program not take it as a-- as strange? 

STUDENT: [INAUDIBLE], yeah. 

DAVID J. MALAN: So recall that early on in the class we looked at plus as a concatenation operator that allows you to join a string on the left and the right. Multiplication is also an overloaded operator for strings. Whereby if you have a string on the left and an int on the right, it will multiply the string, so to speak, by concatenating or joining that many meows all together. 

So this is a feature of object-oriented programming and an operator overloading as we saw it in the past. Other questions on type hints or mypy. 

STUDENT: Can we not typecast this data type of this variable number? 

DAVID J. MALAN: No. You still-- and let me correct the terminology. It wouldn't be called typecasting in this context because it's not like C or C++ where there's an equivalence between these types. You're technically converting on line five a str to an int. You do still have to do this. 

Because mypy, for instance, would yell at you if you were trying to assign a str on the right to an int on the left. You must still use the int function. Int itself is still a function. It's not a type hint. But the word int is being used in another way now in these type hints. 

So this int is still a function call as it always has been. This syntax on the left is another use of the keyword int but in the form of these type hints. So you still have to do the conversion yourself. 

All right. Let me propose that we transition to another feature of Python that's worth knowing, especially since it's one that you'll see in the wild when you see code or libraries that other folks have written, namely something known as a doc string or document strings. It turns out in the world of Python there is a standardized way per another pep, Python Enhancement Proposal, this one 257, that essentially standardizes how you should document your functions among other aspects of your code. 

And so, for instance, let me go back to my meows.py file here. And let me propose that we now start documenting this code too so that I know what the meow function does. And in fact, the standard way of doing this using doc string notation would be as follows. To comment this function, not above it, as you might be in the habit of doing with code in general, but actually inside of it. 

But instead of commenting it like this with the usual hash comment sign, like meow n times, it turns out that when you're formally docking-- when you're formally documenting a function like meow in this case, you don't use regular inline comments, so to speak. You use this syntax instead. 

You use triple quotation marks, either double or single. Then you write out your comment, meow n times. And then you write the same again at the end. So either three double quotes at the start and the end or three single quotes at the start and the end. 

And Python has built into it certain tools and certain assumptions that if it detects that there is a comment using this doc string format triple quotes on the left and the right, it will assume that that's indeed the documentation for that function. And it turns out in the Python ecosystem, there's a lot of tools that you can then use to analyze your code automatically, extract all of these document strings for you, and even generate web pages or PDFs of documentation for your own function. 

So there's these conventions via which if you adhere to them you can start documenting your code as for other people by generating automatically the documentation from your own code without writing something up from scratch manually. 

Now, it turns out if your function does take arguments and perhaps does a bit more, there are multiple conventions for how you can document for the human programmers that might be using your function, whether it's you, or a colleague, or someone else on the internet, to actually use these docs strings to standardize the information therein. So you might see this instead. 

Using these same triple quotes above and below now, you might see your one-sentence explanation of the function, meows-- meow n times. Sometimes depending on the style and use, it might actually still be on the first line but with a blank line below it. But I'll keep everything uniformly indented. 

And this is a convention used by some popular Python documentation tools as well. You would say syntax like this-- param n colon, and then a description of what n is, number of times to meow. Then colon type n colon int, which just indicates that the type of n is an integer. Then, if this function could actually raise an exception, you can document that too. 

And actually, it's not really-- well, it's arguably my mistake here. If n comes in as an argument and is not, in fact, an int, maybe it's a float, or a string, or something else, the multiplication sign here is not going to work. It's not going to multiply the string. It's going to trigger what I know from experience to be a type error. 

So I'm going to go ahead and proactively say in my own documentation that this function, technically, if you use it wrong could raise a type error, even though I'm hinting up here with this annotation that you should pass in an int. Again, Python doesn't enforce that. So if you pass in a float, this might, in fact, raise this function a type error. And so, that might happen if n is not an int. 

And then, lastly, I might say for clarity's sake for other programmers, this function returns a string of n meows, one per line. And the return type of that value, r type, is going to be str. 

Now, all of this syntax here as I've used it is not Python per se. This is a convention known as restructured text, which is a form of markdown-like language that's used for documentation, for websites, for blogs, and even more. But it's one of the popular conventions within the world of Python to document your own functions. 

So this does not have anything to do fundamentally with type hints. Type hints are a feature of Python. What I'm doing here is just adhering to a third party convention of putting in between a Python doc string from the start to the end a certain standard format so that these third party tools can analyze my code for me top to bottom, left to right, and ideally generate documentation for me. 

It can generate a PDF, a web page, or something else, so that I or my colleagues don't need to not just only write code but also manually create documentation for our code. We can keep everything together and use tools to generate the same for us. Any questions now on these doc strings, which again are a convention of documenting your own code often following some standard syntax? 

STUDENT: Yeah. So when you say you would document it and put it in a PDF, is the purpose of doing this to publish it and share your function so other users can use it? 

DAVID J. MALAN: Absolutely. In the past, when we have installed some third party libraries, for instance, cowsay a few weeks back. Recall that I showed you what functions it had. But if you read the documentation, you might actually see that it was documented for us by the author of that program. 

Now, I don't believe they were using this particular syntax. But it was definitely useful for you and me to be able to read some web page or PDF telling us how to use the library rather than wasting time reading through someone else's code and trying to infer what functions exist and how to use them. It just tends to be much more developer-friendly to have proper documentation for our own code or libraries as well. Other questions? 

STUDENT: Yeah. When with doc strings, when it's used to generate a PDF or whatever, does it include any of the code? So if you're referencing in your comment, if you're referencing the code in the comment itself and might not make sense without seeing the code. Does it-- do these include it? 

DAVID J. MALAN: Short answer, you can do that. Not in the convention I'm using here. But there's actually a clever way to write in your doc strings sample inputs to your functions and sample outputs for your functions. 

And if you use a different tool that we've not discussed, that tool will run your code using those sample inputs. It will check that your outputs match your sample outputs. And if not, the program will yell at you saying, you've got a bug somewhere. So this is just another way where you can use doc strings to not only document but even catch errors in your code. 

This has been a lot. And there's a bit more to go. Why don't we go ahead here and take a five-minute break. And when we resume, we'll take a look at yet another feature of Python, yet another library to write code faster. 

All right. Suppose we want to modify this meows program to actually take its input not from the input function in the blinking prompt but from the command line. Recall in our discussion of libraries, that you could use something like sys.argv to get at command line arguments that a human has provided when you're running your program. So why don't we whip up a version of meow that uses command line arguments instead of, again, input. 

So I'm going to go ahead and delete what we've done here thus far. And let me propose that we import sys as we've done in the past. And let's do this. How about if the user does not type any command line arguments. Then my program will just meow once, just so that it does something visually interesting. Otherwise, let's also give the user an option to specify how many times I want the cat to meow. 

So let's start simple. Let's first of all go ahead and do this. If the length of sys.argv equals equals one, that is the user only typed the name of the program and nothing else after the-- in their command, then let's go ahead and just print out one meow like this. 

Else for now, let's go ahead and print out something like this. Else go ahead and print out, let's say, usage for the program, which will be usage of meows.py, just so that the user knows that the program itself is called meows.py. 

Now let me go down to my terminal window and start to type Python of meows.py. And at this point, notice that the length of sys.argv should indeed be one. Why? Well, Python the name doesn't end up in sys.argv at all ever. But meows.py, the name of the file does. And it's going to go in sys.argv zero. But that's only one element. So the length of this thing is one. There's nothing more to the right. So when I hit Enter now we should see, indeed, one meow. 

If I don't cooperate, suppose I do something like meows three Enter. Then I'm going to see a reminder that this is how you use the program. And this is a common convention to literally print out the word usage, a colon, then the name of the program, and maybe some explanation of how to use it. So I'm keeping it very simple. 

But let's be a little fancier. What if I really wanted the user to type in maybe not three, but something more sophisticated. And in fact, when controlling programs from the command line, it's very common to provide what are often called switches or flags, whereby you pass in something like dash n, which semantically means this number of times, then often a space, and then something like the number three. This still allows me to do other things at the command line if I want. 

But the fact that I've standardized on how I'm providing command line arguments to this program with dash n three is just a more reliable way now of my program knowing what does the three mean. It's a little less obvious if I just do meows.py space three. 

Well, what does the three mean? At least with syntax like dash n three, especially if you've read the documentation for this program, ultimately, oh, dash n means number of times. Got it. It's a way of passing in two additional arguments but that have some relationship between them. 

So how do I modify my program to understand dash n three? Well, if I'm using sys like this, I could do this. elif the length of sys.argv equals this time three. Because notice, there's one, two, three things at my prompt. 

So sys.argv is zero, one, and two, three things total separated by spaces. If it equals three-- and let's be safe, and sys.argv bracket one equals equals dash n, then let's go ahead and do this. 

Let's go ahead and convert sys.argv of two to an integer and assign it to a variable, for instance, called n. And then, let's go ahead and do this. For underscore in the range of n, let's go ahead and print out some of these meows. 

Now, there's still an opportunity maybe to consolidate my print lines with meow. But for now, I'm going to keep these ideas separate. So I'm going to handle the default case with no arguments up here as before. 

And now, more interestingly, I'm going to do this to be clear. I'm going to check if the user gave me three command line arguments, the name of the program, dash n, and a number. If indeed the second thing they gave me in sys.argv of 1 equals equals dash n, then I'm going to assume that the next thing, sys.argv of two is going to be an integer. And I'll convert it to such and store it in this variable n. 

And now, just using a loop, I'm going to print out meow that many times. All right, so it's kind of a combination of our earlier focus on loops, our earlier focus on command line arguments, just creating a program that allow me to claim is representative of how a lot of command line programs work, even though we've typically not used many like this. But it's very common to configure a program, one, you're about to run it at the command line with something like these command line arguments like dash n or dash something else. 

Now, I'm going to go ahead and hit Enter. And I think I should see, indeed, three meows. By contrast, if I do two at the end, I should see two meows. If I do one, I should see one meow. And frankly, if I just omit this altogether, I should see one meow as well, because that was my default case earlier. 

And now, let me allow us to assume that this program eventually gets more complicated. Let's imagine a world where I don't want to support just dash n. Maybe I want to support dash a, and dash b, and dash c, and dash d, and a whole lot of others. Or heck, at that point, I should maybe give them words. So maybe it's a dash, dash, number. 

It's indeed a convention in computing typically to use single dashes with a single letter, like n, but use double dashes if you're actually using a whole word like number. So the command line argument might be dash n, or maybe it's dash, dash number. But you can imagine just how complicated the code gets if now you want to support dash n, dash a, dash b, dash c, and so forth. You're going to have to be checking all over the place. 

And what if they come in a different order? You're going to have to check is dash n first, or is it second, or is it third, or is it's fourth? I mean, this just becomes very painful very quickly just to do something relatively simple like allow the user to pass command line arguments into your program. 

Well, this is why, as always, there exist libraries. And another library that comes with Python that's probably worth knowing something about is this one here called argparse. In fact, with a lot of the tools I myself or CS50's team writes in Python, we very frequently use argparse whenever they are more complicated than a lot of our class demos and a little more similar to this one where we want to allow the user to pass in configuration options at the command line. 

And by supporting things like dash n, or dash a, or dash b, or dash c, argparse is a library that per its documentation just handles all of this parsing so to speak, this analysis of command line arguments for you automatically so you can focus on writing the interesting parts of your program, not the command line arguments part. 

So how might we use this? Well, let me go back to VS Code here. Let me clear my terminal window. And let me propose that I rewrite this using not sys but actually using argparse. And I'm going to start a little simple and then build back up. 

So let me throw all of this away for now and instead import argparse. Argparse stands for argument parser. To parse something means to read it, kind of pick it apart to analyze it. So this is indeed going to do just that for me. 

Now, let me go ahead and do this. And for this library, it's helpful to know a little object-oriented programming like we all now do. I'm going to create a variable called parser. Though I could call it anything I want. I'm going to set it equal to the return value of argparse.ArgumentParser, with a capital A and a capital P. A constructor for a class called argument parser that comes with Python itself within this library here. 

Now, I'm going to configure this argument parser to know about the specific command line arguments that I myself want to support in my program. So I'm going to do this, parser.add_argument. So that's apparently a method in the parser object. I'm going to add an argument of dash n. Easy enough. 

Now I'm going to go ahead and actually parse the command line arguments. I'm going to do args, or I could call the variable anything I want, parser.parseargs. And by default, parseargs is going to automatically look at sys.argv for me. I don't need to import sys myself. I can leave the argument parser, its code to import sys, look at sys.argv, and figure out where dash n or anything else actually is. 

And what's nice now, because this line of code here results in the parser having parsed all of the command line arguments, I now have this object in this variable called args inside of which are all of the values of those command line arguments, no matter what order they appeared in. Not such a big deal when I've only got one because it's only going to go in one place at the end. 

But if I've got dash n, dash a, dash b, dash c, you could imagine them being in all different orders. They definitely don't have to be alphabetical. The user should be able to type them in any order they want. That's better for usability. Arg parser is going to figure all of that out for me. 

And all I have to do now is this. If I want to iterate over that many numbers of arguments and that many meows rather, I can do this. For underscore in the range of the int conversion of args.n. So dot is the syntax we kept using to access things like properties inside of an object. And that's what args is. It's the object returned by the parse args function for me. I'm going to go ahead now and print out, quote unquote, meow this many times. 

So it's not super simple. These are three new lines of code I need to write and rather understand. But it's already a little simpler and more compact than my if, and my elif, and my ors, and my ands, and all of that Boolean logic. It's handling a lot of this for me. 

So if I didn't make any mistakes, let me run Python now of meows.py Enter. And I did make a mistake here. I did make a mistake. What's wrong here now? What's wrong? Well, I definitely didn't run it the way I intend. So dash n three Enter. 

So it does work. But if I don't cooperate, this actually seems to be a worse version. If I don't pass in dash n and a number, it just errors with a type error. Int must be a string. None is what came back. So there's clearly an error here. But the library is more flexible. I can actually provide some documentation on how to use this thing. 

So how do I know how to use this? Well, typically it's conventional in Python and in a lot of programming environments to run a program with a special argument, dash h or dash dash help. And almost always I will claim you'll then see some kind of usage information. 

And indeed, that's what I'm looking at now. I just ran Python of meows.py space dash h. I'll do it again. Let me clear my screen and this time do dash dash help in English, Enter. And I see the same thing. It's not very useful at the moment. It just shows me what the usage is up here. 

And this is kind of interesting. This is a standard syntax in computing. And we've kind of seen it in Python's documentation before. This just means that the program's name is, of course, meows.py. Square brackets as almost always in documentation means it's optional. 

So I don't have to type dash h, but I can. I don't have to type dash n and another value, but I can. And then, down here is some explanation of these options, and more verbosely showing me that I can also do dash dash help and not just dash h. 

But this is so generic. This has nothing to do with my program. This is not going to help my users when I actually release this software for the world. So let me go ahead and improve it. Let me add a description to my argument parser that the humans will see. Meow like a cat, quote unquote, is going to be the value of this named parameter called description. 

And let me also add a help parameter to my dash n argument that just explains what dash n means, number of times to meow, quote unquote. I'm not going to change anything else. But I am going to go back to my terminal window and run Python of meow. I'm going to run Python of meows.py dash h, or equivalently dash dash help. 

And now notice that this is a little more user friendly. If I scroll up, we still see the same usage. But there's a quick sentence in English of explanation that this program meows like a cat. And if I look at the options now, oh, that's what n means. It's the number of times to meow. And this capital N, a mental variable, if you will, is just indicating to me that I need to type a number by convention after the lower case dash n. 

So it would be nice though, all that said, if my program still didn't just break when I run it without any command line arguments. Ideally, my program would handle this just like my manual version did when I used sys.argv myself. So we just need to add a little more functionality to this library. And if I read the documentation, I'll see that add argument takes yet another named argument. If you want, you can specify a default value for dash n, for instance, one. And I'll do that there. 

And you can further specify that it's got to be an int. And what this will additionally allow me to do is if I tell arg parser to make sure that the value of dash n is an int, I don't need to do the conversion manually. I can just trust down on line seven that when I access the property called n inside of my args object, it's going to be automatically an int for me. 

And again, this is the value of a library. Let it do all of the work for you so you can get back to focusing on the interesting project at hand, whatever problem it is you're trying to solve. In this case, granted, not that interesting, but meowing like a cat. 

Let me go ahead now and run Python of meows.py and hit Enter. This time, no arguments. And now it meows. Why? Because I specified that if I don't, as a user, specify dash n, it's going to have a default value of one apparently. 

And I don't have to convert that value from a str to an int because I told arg parser please just make this an int for me. Any questions now on argparse, or really this principle of just outsourcing the commodity stuff, the stuff that everyone's program eventually needs to do so that you can focus on the juicy part yourself. 

STUDENT: What does args.n contain? 

DAVID J. MALAN: What does args.n contain? It contains the integer that the human typed after a space after dash n. Good question. Other questions? 

STUDENT: Yeah. When you specify the type for the argument, what happens if-- does that basically handle the exception if the user inputs a string in this case? 

DAVID J. MALAN: A really good question. Suppose that the human does not type a number and therefore not an in. Well, let's see what happens. So Python of meows.py dash n dog, where dog is obviously not a number. Enter. 

And voila, we see an automatically generated error message. A little cryptic, admittedly. But I'm seeing a reminder of what the usage is and a minor explanation of what is invalid about this. And again, this is what allows you, this is what allows me to focus on writing the actual code we care about and just letting the library automate some of this stuff for us. 

All right. Well, allow me to propose now that we take a look at one other feature of Python that we've seen before. But it turns out we can use it even more powerfully as our programs become more sophisticated and the problems we're trying to solve themselves become more involved. 

Let me go ahead and turn to VS Code, closing out meows.py, and creating a new file for instance, called unpack.py. So code of unpack.py. And let me just remind us what we mean by unpacking. Because this is actually a feature of Python that we've seen before. 

For instance, suppose that I write a program that prompts the user for their name, like David space Malan. Wouldn't it be nice if we could split the user's name into two separate variables? And when we've done this in the past, we've done it in a few different ways. But one of them involved unpacking a single value that comes back from that, like a list or some other data structure, and putting it immediately into two variables. 

So let's do this here. Let me go ahead and call the input function, asking someone what's your name, question mark. Then, let me go ahead and just split a little naively on a single space. 

So I'm assuming that the only users at the moment are people like me, David space Malan. No middle names, no multiple names. It's just one and two, which itself could be buggy for other users. But for now, I'm keeping it simple, just to remind us that I can now unpack that return value with something like first underscore last equals the return value of input. 

And now I can go ahead and do something like this, like printing out with an f string, Hello, comma, and then in curly braces, first. If I just want to greet myself or any other user as, Hello, David, without the last name. And frankly, if I'm not using the last name, recall that a Python convention is just to name it underscore to make clear that you know you're not using that value. But it does need to be there because you're unpacking two values at once. 

So if I run this, it won't be all that unfamiliar. I'm just going to run now Python of unpack.py. I'll type in David Malan, which has a single space. And there we have it, Hello, comma, David. 

Well, it turns out that there's other ways to unpack values. And there's other features that Python offers, especially when it comes to defining and using functions. And this is slightly more intermediate functionality, if you will, that's useful, because you can start to write even more elegant and powerful code once you get comfortable with syntax like this. 

So let me go ahead and propose that we not just play with, Hello names anymore, but instead do something maybe involving some coinage again. So maybe not dollars and cents, but maybe, again, as in the past, some galleons, and sickles, and knuts which among which there's a mathematical relationship as to how many of those in the wizarding world equal each other. 

And let me go ahead and do this. Let me define a simple function called total that just tells me the total value of someone's vault in Gringotts, the wizarding bank, based on how many galleons, sickles, and knuts that they have, which again, are currencies from the wizarding world as opposed to our actual human world. 

So this total function might take a variable like galleons and sickles and knuts like this. And then, it's going to return the formula, which I admittedly had to look up myself. And it turns out that the formula for converting galleons and sickles to knuts would be this. Galleons times 17 plus sickles, then times all of that by 29 and then add in the individual knuts. Not sure in what detail this came up in the books or movies. But here we have it, the official formula. 

All right. Now let's go ahead and do this. Let me go ahead and call the total function with just some sample inputs. Suppose that someone like Harry has 100 galleons, 50 sickles, and 25 knuts. Let me go ahead and print that out on the screen. 

Well, if total returns an integer, which I think this arithmetic expression will do, let me go ahead and store, rather, pass the return value of total to print. And then just for clarity, let me write knuts at the end So? I know that the unit of measure here is indeed knuts in total. 

Now, let me go ahead in my terminal window and run Python of unpack.py and hit Enter. And it turns out mathematically that if I got my math correct, 100 galleons plus 50 sickles plus 25 knuts equals in total 50,775 knuts. Just avoiding having to use our own human currency here. But I'm not doing anything along the lines of unpacking at least just yet. 

Let me propose now that I do this. Just for the sake of discussion, let me propose that I leave the total function as is. But let me go ahead and just store all of my coins in a list. So coins in order from left to right, 100, 50, 25, it just because for whatever purposes in this story I have all of my coinage in a list in this order. Kind of a purse or wallet of sorts. 

Well, how can I pass this in? Well, I'm not going to hard-code the same values twice. Just for the sake of discussion, how could I pass in the individual elements of a list to my total function? Well, of course, I could treat this list as I always do using numeric indices by doing coins bracket zero, coins bracket one, coins bracket two. So this is old-school stuff with lists. 

If I've got a list called coins and there's three elements, the indices or indexes of those elements are zero, one, and two respectively from left to right. So all I'm doing here now is passing in the first element from that list as galleons, the second element of that list as sickles, and the third element of this list as my knuts. And that lines up with, of course, the signature of this function, which as total expects that I've passed in those three things in that order left to right. 

Let me go ahead and run, just to make sure I haven't broken anything, unpack.py and hit Enter. And the math still checks out. But this is getting a little verbose-- a little verbose. And wouldn't it be nice if I could just pass the list of coins to this total function? Wouldn't it be nice if I could just say something like this, coins. 

But let me pause and ask the group, why would this not actually work as is? It technically is passing in all three. But why would I get some kind of error when I run this? Eric? 

STUDENT: Because you are passing a list to galleons. 

DAVID J. MALAN: Yeah. I'm passing a list to galleons and nothing for sickles and knuts. And notice, those don't have default values. There's no equal signs on that first line of code, which means Python is not going to know what value should be assumed there. So it just seems like it's not going to work. Plus, it's the wrong type, as Eric notes. It's a list and it's not an integer as it was before. 

So let's actually run this incorrect version, Python of unpack.py Enter, type error. And that is probably what you might expect, like I'm messing up with the types here. And I am required to pass in two positional arguments, sickles and knuts, that were not even passed. So I've definitely erred here. 

But it certainly seems unfortunate if the only solution to this is to do what I previously did, which is index into the first element, index into the second element, index into the third. You can imagine, with bigger fancier functions that take even more arguments, this is going to get very verbose and honestly very vulnerable, potentially, to just mistakes, typos on my part. 

But here too is where you can do what's known, again, as unpacking a value in Python. Right now, a list is packed with multiple values. My current list has these three values, 100, 50, and 25 respectively. But they're all packed up in this one list. Wouldn't it be nice if I could unpack that list, just like I previously unpacked the return value of the str class's split function into multiple things too. 

And indeed, I can do just that. Python actually allows me to pass in not coins but star coins. So if you use a single asterisk at the beginning of your variable, that will unpack it. And it will take one sequence, in this case coins of size three, and explode it, if you will, unpack it into three individual arguments. No commas are needed. Python just handles this for you. 

But the effect of passing in star coins is to pass in the individual members of that list. Which in this case are going to be 100, 50, and 25 respectively. Which is perfect, because now it's going to line up with galleons, sickles, knuts respectively. 

So now when I run Python of unpack.py, we're back in business and the math checks out. But I've cleaned up my code by just introducing this new symbol, which we've used, of course, in other contexts for multiplication and the like. But now, it's also used for unpacking in this way. 

Questions on what we've just done? It's a single operator, but it's already quite powerful. Because it allows us to take a data structure and unpack it and pass it in individually. 

STUDENT: Does that work for tuples, sets, dicts, dictionaries as well? 

DAVID J. MALAN: Tuples, yes. Sets I don't know. [? Ranshin? ?] I don't know if order is preserved. No. Oh, is that no it does not, or you're checking? Order's not preserved. So it wouldn't work with set? It does not work with set. Does not work with set. 

Sorry, I'm verbally googling here just to save us some keystrokes. So it would work for enumerations that where order is indeed preserved. And we'll see another example in a moment where it actually can be used in a different way for dictionaries, which nowadays do preserve order. Other questions on unpacking in this way? 

STUDENT: Yes. Hi. 

DAVID J. MALAN: Hello. 

STUDENT: Can you use unpacking to get the value, for example 10 plus 50 plus 25 instead of a for loop and then result plus? 

DAVID J. MALAN: Short answer, no. If you want the individual values, you should be just indexing, in this case, into those specific locations. This is returning multiple values, the equivalent of a comma separated list. So you would use the earlier approach if you cared about the individual locations. How about one other question on unpacking? 

STUDENT: What if we have declared-- we declare some default values. And if you use this as two points, will it go out right, or will it skip it? 

DAVID J. MALAN: Good question. If I heard you right, what if, for instance, the list has four values like this here and you're still unpacking it when it's only three that's expected. Well, let's try it. Python of unpack.py Enter. 

Another type error. This time it takes three positional arguments but four were given. So the onus is on us as the programmer not to do that in this case. So potentially fragile, but avoidable if I'm controlling the contents of this list. 

In fact, let me propose now that we take a look at another variant of this. Whereby we use not just positional arguments, whereby we trust that the first is galleons, the second is sickles, the third is knuts. Suppose that we actually passed in the names as we're allowed to do in Python. And then, technically, we could pass them in in any order and Python would figure it out using named parameters instead. 

Well, how might I do this? Well, it's going to be a bit of a regression at first. So let me get rid of this list here. Let me change this now to just manually passing the values I care about. Galleons I want to still equal 100. Sickles I want to equal 50. And knuts I want to equal 25. 

So this is old-school parameter passing. It's no longer positional. I'm explicitly specifying the names of these arguments. But that's just going to work because that's exactly what the names of these parameters are in my total function as before. 

Let's make sure I, nonetheless, did not break anything. Let's run Python of unpack.py Enter. And there we have it, still 50,775 knuts. 

Well, once you start giving things names and values, names and values, that probably should bring to mind one of our most versatile data structures in Python and even other languages, that of a dictionary. Remember that a dictionary is just a collection of key value pairs, names and their respective values. 

So this kind of opens up an opportunity. What if I did this. What if I actually had for some reason in my program on a variable as before called coins. But instead of making it a list of three values like before, what if it's a proper dictionary? So what if it's galleons, quote unquote, colon 100 for 100 of those, sickles quote unquote and 50 of those, and knuts quote unquote 25 of those, each of those separated by colons. 

And let me fix my square brackets to this time be curly braces, which, recall, is the symbol we use for dictionaries or dict objects in Python. So now, I have a dictionary called coins. Not a list. It's a collection of keys and values, three keys, galleons, sickles, knuts, and three values, 100, 50, and 25 respectively. 

If I were to now pass these individual values into my total function, I could do it as always with my dictionary. So I'm doing it old-school now. Coins is the name of my dictionary. I index into it not with numbers like with lists, but with words. So galleons, strings like this, coins, quote unquote, sickles in square brackets there. And then lastly, coins, square brackets, quote unquote, knuts. 

So it's getting-- it's verbose again. This is not maybe the best road to go down. But we'll backpedal in a moment. This is just how, if you happen to have all of your coins stored in a dictionary, you could pass the galleons, sickles, and knuts into your function respectively. Let's make sure I didn't break anything. Let's rerun Python of unpack.py, and we're still good. 

Now, how could we get to a situation like this? Well, as always, imagine this program is a little longer than this one here. And somehow you're using a dictionary maybe just to keep track of someone's purse or wallet, like how many coins of each type that they have. And as such, it's perfectly reasonable to use a dictionary. 

But then you want to print out the total. And darn it. If that total function does not expect a dictionary so you cannot just do something nice and simple like pass in coins. For reasons we saw earlier, that would be a type error. Total expects three arguments, three integers. You can't just pass in a dictionary. But if that's the data structure you're using to store the person's purse or wallet, well, it's kind of unfortunate that we have this clash between these data types. 

Well, here's what we can do. We can't pass in coins. Because watch, if I try doing that and run Python of unpack.py, we're getting another type error. Missing two required positional arguments. Sickles and knuts, I have to pass in three things. 

But, wonderfully, Python allows you to unpack dictionaries as well. For a dictionary, you don't use a single asterisk, you use two. And what this syntax has the effect of doing is passing in three values with names. It has the effect of passing in galleons equals 100 comma, sickles equals 50 comma, knuts equals 25. 

And so, it has the similar effect to the list unpacking. But that just passed in the values, 100, 50, 25 separated by commas in effect. When unpacking a dictionary, it passes in the keys and the values separated conceptually with equal signs just like our function expects. 

So if I now run Python of unpack.py again, we're still good, but we've tightened our code up again. And now, I'm giving myself yet another option. I can either store a wizard's purse or wallets in their-- in a list as we did earlier. Or I can store it in a little more versatility-- with even more specificity using a dictionary instead. 

And so, to be clear, let me rewind. Star star coins is the same thing if I rewind a little bit to our first example of named arguments is equivalent to what I've highlighted here. When you unpack a dictionary, it passes in all of the keys and all of the values much like the syntax here. But let me tighten it up and go to where we left off. Questions now on unpacking? 

STUDENT: Can we have a-- in this dictionary, can we have instead of having a constant name value pair, can we have a variable number of name value pairs? 

DAVID J. MALAN: Short answer, yes. You can have more than three key value pairs as I have here. But it's not going to work unpacking it if the total function is expecting only three. So if I were to add something here, like let me introduce pennies to the wizarding world. And suppose I have one penny, for instance. 

And now I run this same code, Python of unpack.py, we're back to a type error again. Whereby I got an unexpected keyword argument pennies, because that is not expected by the total function. We will see in just a moment, wonderfully, a solution though to that. But for now, it does not work. Other questions on unpacking with dictionaries or lists? 

STUDENT: In list-- in list values, we gave the same number of arguments and we declared a default value in the function. Now, if you use this asterisk, will it overwrite that value or will it skip that default value? 

DAVID J. MALAN: A good question. If we did have default values up here, for instance, equals zero, equals zero, equals zero, the upside of that, recall, from our discussion of arguments to functions a while back, is that now you don't have to pass in all of those values. They will default to those zeros. 

Therefore, you could pass in fewer than three values, either using a list or a dictionary that's unpacked in this scenario. I deliberately did not do that because I wanted us to encounter this specific error in this case. But you could absolutely go back and add those defaults. 

So it turns out that this single asterisks or this double asterisk is not only used in the context of unpacking. That same syntax is actually used as a visual indicator in Python when in a function itself might very well take a variable number of arguments. 

That is to say, a function can be variadic. Which means that it doesn't necessarily have to take, say, three arguments specifically. Even if they do or don't have default values, it can take maybe zero, or one, or two, or three. And it turns out the syntax for implementing the same idea is quite similar in spirit. 

In fact, let me go back to VS Code here. And let me propose that we start over with this code and get rid of our notion of galleons, and sickles, and knuts, and do something just a little more generic just so that we've seen the syntax for this. Suppose that I define a function as follows. Define a function, let's call it f. And that function is not going to take a specific number of arguments but a variable one. 

And so, I'm going to go ahead and use this syntax here, star args, which indicates that this function is indeed variadic. It takes some variable number of positional arguments. Positional in the sense that they go typically from left to right. But I don't know how many just yet I want to support. 

Suppose that I additionally want to support some number of keyword arguments, that is, named parameters that can be called optionally and individually by their own name. Well, the convention syntactically here would be to use two stars and then kwargs. I could call args, or kwargs, anything else that I want. 

But a convention you'll frequently see in Python's own documentation is that when you have placeholders like this for some number of arguments and some number of keyword arguments, the world tends to use args and kwargs. 

Well, inside of this function, let's do something super simple just for now. Let me go ahead and print out literally quote unquote positional, just to indicate to myself while wrapping my mind around what's going on here what the positional arguments are. 

And let me quite simply print out those args. This is not something you would typically do. You don't typically just take in these arguments and print them, no matter how many there are. I'm just doing this diagnostically for now to show you how the syntax works. 

Now, let me go ahead at the bottom of my file-- and I won't bother with a main function this time so we can focus only on this function f. Let me go ahead and just call f with three arguments. I'll use the same arguments as before. But I didn't bother giving them names just yet, like galleons, and sickles, and knuts, and the like. 

So what do I have? A program that no matter what calls this function f, but it first defines f at the top of the file. It's taking some number of positional arguments, some number of named arguments. 

And for the moment, I'm just printing out the positional ones. Let me go ahead and in my terminal window run Python of unpack.py and hit Enter. And you'll see that the positional arguments passed in are apparently this-- a sequence, 100, 50, 25. 

But notice this. If I clear my terminal window there and pass in something else, like five, a fourth argument. Previously, if I tried to change the number of arguments I'm passing in to my total function, which was only defined as taking three, I would have gotten a type error, some visual indication that, no, you can't pass in more or fewer arguments than is actually in the function's definition. 

But now watch. If I run Python of unpack.py, this time passing in 100, 50, 25, and 5, a fourth argument, all four of those went through just fine. I can get rid of all of those but one, for instance now, rerun my program after clearing my screen. 

And now, I'll see just one argument here. And even though there's a comma and nothing after it, this is actually the syntax when seeing a tuple, in effect, whereby the comma just indicates this is indeed a list, but there's only one element therein. 

Well, let's get a little more curious too. Let me go ahead and rewind here to where we started with just those three values. And this time, let me go ahead and print out my named argument, so to speak, which isn't args but kwargs. Again, the positional args in this syntax come first. The named arguments, kwargs come second. That's what Python prescribes. 

So now, let me go ahead and not pass in just these numbers. Let me go ahead and pass in actually named arguments. So let me do something now more specifically, like galleons equals 100, and sickles equals 50, and knuts equals 25. I'm not going to bother doing any math with total. I just want to poke around right now at this functionality of having a variable number of arguments. 

And what's neat now is if I run Python of unpack.py and hit Enter, no problem. What kwargs is, is automatically a dictionary that contains all of the named arguments that were passed to my function. 

Which is to say, when designing your own functions, if you want to support more than one argument, maybe more than two, or three, or four, maybe a variable number of arguments, indeed, you can support both a variable number of positional arguments that are just value comma value comma value, or any number of named arguments, where you actually put the name of the parameter equals the value and then maybe a comma and some more of the same. 

So now, it turns out we have seen this before in some of the functions we've used to date. We didn't necessarily see it called args or necessarily see it called kwargs. But we have seen at least one example of this in the wild. Recall our old friend print, which we've been using now for weeks. 

And when we first looked at the documentation for print way back when, it looked a little something like this. The first argument to print was objects. And I waved my hand at the time at the asterisk that was at the start of that variable name. 

But then we had sep for separator, the default value of which was a space. We had n, the default value of which was a new line. And then some other names arguments that we waved our hands at then and I'll again do now. 

But what you can now perhaps infer from our emphasis on these asterisks today, the single stars or the double stars, is that you know what? This is the convention in Python's documentation to indicate that print takes a variable number of arguments. 

So if we were to look at the actual implementation of the print function implemented by Python's own authors, it might very well look something like this. Def print, and then the first our argument would be star objects, thereby indicating that print takes a variable number of arguments. The next one of which might be sep equals quote unquote either using double quotes or as in the documentation single quotes too. 

The next one of which might be n, the default value of which is a new line. And then some of those other named arguments that we've not looked at as well. And then, maybe inside of the print function implemented by the authors of Python, maybe there's a for loop like for object in objects that allows them to iterate over each of those variable number of objects and print each of them. 

And this is why in programs past, you and I have been able to do just print open parentheses close parenthesis with nothing inside. Or you and I have been able to print out something like, Hello, world, a single string inside of those parentheses. Or you and I have been able to do a single string, Hello, and then another string quote unquote world, thereby passing in two arguments or even more. 

So we've long had this ability to use variadic functions, whereby you can pass in a variable number of arguments. What you now have via this args and kwargs syntax-- but again, they do not need to be called that-- is the ability using that star or two stars to implement those kinds of functions yourself. 

My own f function a moment ago did not do anything all that interesting. But it hints at how you could, if in the future you have a use case, for taking zero or one or more of either type of argument. Any questions now on these types of arguments? 

STUDENT: What will happen if you print kwargs and the argument is like a list? 

DAVID J. MALAN: Ah. So what would happen if you print the argument like it's a list? So I think we saw that. If I roll back in my history here to when I had that f function. Which I called f just to be very generic just so we could play around with the syntax. This is what I had here. So this is a-- I passed in 100 comma 50 comma 25. That gets automatically stored in args. 

And when I run it, you can actually see that sequence of values by running Python of unpack.py. There is that sequence all in the form of one single variable. I'm printing it just for diagnostic purposes. This is not really a useful or pretty program. But it hints at how we can access that whole sequence of values. Other questions on this approach here? 

STUDENT: Can we pass the kwargs from one function to another function? 

DAVID J. MALAN: Absolutely. You can pass either of those to another function, which you might want to do if you want to wrap another function, provide some additional functionality, but still pass in all of the supported arguments to the underlying function as well. 

All right. How about this next. It turns out that a few other tools we can add to your tool kit relate to the types of programming models that Python supports. We started out quite some time ago focusing really on procedural programming in Python. Whereby we wrote code top to bottom, left to right, defining some functions, or if you will, procedures along the way, defining variables, and having side effects, and assigning values as needed. 

But we then eventually introduced or really revealed that Python is also very much object-oriented. And a lot of those variables, a lot of those types that we were using all that time were in fact objects, objects that came from certain classes. And those classes were templates of sorts, blueprints, via which you could encapsulate both data and functionality therein. 

Well, we also saw along the way some hints of a third paradigm of programming that Python also, to some extent, supports, which is known as functional programming. Whereby functions are ever more powerful in that they tend not to have side effects, no printing or changing of state globally. But rather, they're completely self-contained and might take as inputs and return values. 

And that's generally a paradigm we saw when we started sorting things, particularly with functions like our sort function or Lambda function when we passed in the function we wanted to use to sort a list way back when. 

Well, it turns out Python has other functionality that is reminiscent of functional programming and indeed is a powerful way to solve problems a little more differently still. Let me propose this. Let me propose that I whip up a new program here in VS Code by closing our unpack.py and this time creating another program called yell. 

Suppose the goal at hand is to implement some program that allows the user to pass an input, and then it yells the response by forcing everything to uppercase. My apologies to those with headphones there. I'll modulate. 

So let me go ahead and run code of yell.py. And within yell.py, let's go ahead and implement a program that really does just that. Let's go ahead and define a main function up here. And let's assume for the moment that this yell function already exists and yell something like, This is CS50, properly capitalized, not in all caps. 

Now, let's go ahead and implement this yell function with def yell. It's going to take, for now, a single word or phrase. And let's go ahead. And I'll call it phrase here. And I'm going to go ahead and just print out the phrase.upper. So phrase.upper is going to force the hole thing to uppercase. And as usual, down here if the name of this file equals equals quote unquote main, then let's go ahead, as always, and call main. 

So let's just run this. But for the most part, it should be fairly straightforward. When I run Python of yell.py, THIS IS CS50 is yelled on the screen. 

All right, that's nice. But it's not great that yell only expects a single phrase. Wouldn't it be nice, like print, if I could pass in one phrase, or two, or three, or really multiple words more generally but as individual words themselves. 

So let me retool this a little bit and change yell to take in not a phrase but how about something like a list of words. So that ultimately, I can call yell like this. Quote unquote, this inside of a list, quote unquote, "This" inside of a list, and, quote unquote, "CS50" inside of a list. I'm not going to bother with type hints or annotations for now. But I'll just assume that yell has been defined now as taking a list of words as defined here. 

But now I want to force them all to lowercase. So I don't quite want to do something as simple as this. Like for word in words, I could, for instance, print that given word and maybe end the line with nothing right now. But I think if I do this, Python of yell.py, no, that's not right. I haven't forced anything to uppercase. So let's fix this. 

Well, let's go ahead and do the following. Let me go ahead and accumulate the uppercase words as follows. Let me create a variable called uppercase and initialize it to an empty list using square brackets or our more verbose list syntax. 

And now, let me go ahead and iterate over each of those words in words. And for each of them, let's go into our upper cased list, append to it the current words uppercase version. So this is a way of creating a new list called uppercase that is just appending, appending, appending to that list each of the current words in the loop but uppercased instead. 

And now, just let me go ahead and print out the uppercased list. This isn't quite right. Let's see what happens here. Python of yell.py, OK. It's not quite right, because I don't think I want those quotes or those square brackets. 

What am I seeing? I'm actually printing a list. But, but, but, here's where some of our unpacking syntax now can be useful. I don't have to change my approach to this problem. I can just unpack uppercase by adding a single star. 

And now, let me go ahead and rerun Python of yell.py. And now, it's actually just English. There's no remnants of Python syntax like the quotes, and the commas, and the square brackets. I've now unpacked, this is CS50 as three separate arguments to print. So already now, this unpacking technique would seem to be useful. 

Well, it's a little unfortunate that I now need to call yell though with a list of values in this way. This is just not the norm. Or it's at least, it's not nearly as user-friendly as something like the print function where I can pass in zero, or one, or two, or three, or any number of arguments. Why are you making me for your yell function pass in only a list? 

Well, we can do better. Let's adopt some of the new conventions we've learned. And let's go ahead and get rid of the list by removing the square brackets. And let's just pass yell three arguments. Now, I don't want to do something like change the definition of words to take in word one, word two. That's not going to scale and it's not going to handle different number of words. 

But we have a technique now. We can say star args, which will allow the yell function to accept any number of arguments. And just for specificity, let's not call it generically args. Let's name it something a little more self explanatory like star words. This just means I have a variable number of words being passed in. 

Now, I think, I've made a marginal improvement. Let me run this again, Python of yell.py. This is CS50 is in all caps. But it's just a little better. Because now I can treat yell just like I've long treated print, pass in as many things as you want, and print will deal with it. Now, my yell function is just as powerful it would seem. And better still, it also forces everything to uppercase. 

Well, it turns out Python comes with this function called map, whose purpose in life is to allow you to map, that is, apply some function to every element of some sequence like a list. So for instance, if we want to force to uppercase each of the words, this is CS50 in the list of words that's been passed in, well, we essentially want to map the upper case function to each of those values. 

So using map in Python can I do just that? Let me go back here to VS Code. And let me propose now that I re-implement this as follows. I get rid of all three of these lines here, getting rid of that loop in particular. 

Let me still declare a variable called uppercased. But let me set it equal to the return value of this new function called map. Map takes two arguments here. In this case, the name of a function that I want to map on to a sequence of values. 

Well, what function do I want to apply to every word that's been passed in? Well, it turns out, thanks to my knowledge now of object-oriented programming, I know that in the str class there is a function called upper. We've usually called it by using the name of a string variable.upper open paren close paren. 

But if you read the documentation for the str class, you'll see that the function is described indeed as str.upper. I'm not using parentheses, open and close, at the end of str.upper. Because I don't want to call it now. I want to pass this function to the map function, so that map can somehow add those parentheses, so to speak, and call it on every one of these words. 

And this is what map does quite powerfully, and is an instance, indeed, of functional programming. Whereby I'm passing to this map function another function. Not calling it. I'm just passing it in by a reference of sorts. 

And what map is going to do for me is iterate over each of those words, call str.upper on each of those words, and return to me a brand new list containing all of those results together in one list. It completely obviates the need for me to do this more manually using that list. I'm still going to print the whole thing using star uppercase. So that if I get back a list of three uppercase words, I'm going to unpack them and print them all out. 

So let's run this again. Python of yell.py Enter. And voila, it's still working. But the code now is even more tight-- even tighter than before. So it turns out there's another way we can solve this problem in a way that's even more Pythonic, or at least quite common. And that's using a feature known as a list comprehension. 

And it's a big phrase, if you will. But it refers to the ability in Python for you to very easily construct a list on the fly without using a loop, without calling append and append, but to do everything in one, daresay, elegant one-liner. 

So how can I go about using this notion of a list comprehension? Well, let me go ahead and do this. In yell.py, in VS Code here, let me go ahead and change my approach as follows. Instead of using map, which is perfectly fine and correct in this way, let me just show you this other way as well. A list comprehension is the opportunity to create a list like this, using square brackets like this. 

But inside of those square brackets to write a Python expression, that in effect is going to dynamically generate a brand new list for you using some logic you've written. And the approach I might take here is this. If I want to store in this list the uppercase version of every word in that words list, I can do this-- word.upper for word in words. 

Now, this is a mouthful. But I dare say Python programmers love this capability of being able to define on the fly a list inside of which is any number of values that you would ordinarily, at least as we've done it, construct with a loop and again calling append, and append, and append. But that usually takes two, three, four or more lines. 

This list comprehension that I've highlighted here is now an alternative way to create the exact same thing-- a list inside of which are a whole bunch of uppercased words. Which words? For each word in the words list that was passed into yell is what ends up in this list. 

Questions on this syntax here? It definitely takes a little bit of getting used to. Because you've got this value on the left, this function call here. You've got this loop inside of the square brackets. But if you become accustomed to reading the code in this way from left to right, this means give me the uppercase version of the word for each word in my words list. Questions here on list comprehensions? 

STUDENT: Hi. Can you do conditionals also, like if else, or combine if, elif, else? 

DAVID J. MALAN: Indeed, you can. And let me come back to that, where we'll see an opportunity to do things conditionally. But for now, I'm just uppercasing every word in the list. Good question. Other questions? 

STUDENT: Yeah. Is this functional programming? Or I mean, this particular thing, we are using words.upper for a word in words? 

DAVID J. MALAN: Not necessarily. This is more of a feature of Python, I would say. 

STUDENT: OK. 

DAVID J. MALAN: Yeah. Map was one very specific incarnation of thereof our use of Lambda and passing it in as a key attribute to the sort function, sorted function a while back was an example. And we're about to see one other. 

So we can even use these list comprehension to filter values in or out of our resulting list. So in fact, in VS Code here, let me close yell.py and close my terminal window. And let me create a new program here whose purpose in life maybe is to take a same list of students as before with a shorter version thereof, and just filter out all of the students in Gryffindor. 

So let me go ahead and create a file called Gryffindors.py. I'm going to go ahead and copy paste from before really my list of students, at least Hermione, Harry, Ron, and Draco from the start here, just so that I can focus on one student who happens not to be from Slytherin. 

And what I'm going to do here now, if I want to filter out only the Gryffindor students, let me go ahead and do this. Let me create another variable called Gryffindors, which is going to equal the following list. And this is going to be a bit of a longer line. So I'm going to proactively move my square brackets onto two separate lines. And I'm going to create now a list comprehension. 

I want to do this. I want this new list called Gryffindors to contain every student's name for each student in the student's list. But, but, but, if the student's house equals equals quote unquote Gryffindor. So this is nearly identical in spirit to what I just did earlier to create a list comprehension out of each of the words passed to my yell function. But here, I'm doing so conditionally. 

And so, I'm borrowing inspiration from our focus on loops, borrowing some inspiration from our focus on conditionals, combining that into this same square bracket notation. So that what Gryffindors ultimately is, is zero or more students' names. And the names that are included are the result of iterating over each of those students and only including in the final result the students whose house happens to be Gryffindor. 

So when I go ahead and run this with Python of Gryffindors.py and hit Enter, you'll see, huh, nothing actually happened here. Well, that's because I didn't finish the program. Let me go ahead and actually finish the program with this. How about for each Gryffindor in Gryffindors plural-- and better yet, so that it's sensible that I did all of this work in advance, let me go ahead and sort all of those names with our familiar sorted function. 

Let's go ahead now and print out each of these Gryffindors. So now, notice, if familiar with the books and the movies, you'll know that only three of these four students are actually in Gryffindor. And if I run Python of Gryffindor.py, there we see Harry, Hermione, and Ron, but now in sorted order as well. 

So that's just one way we can solve this same problem using not just a list comprehension but a list comprehension that has this conditional therein. But there's yet other ways to solve this same problem too. And we come back to some functional features of Python. In addition to functions like map, there's also this one called filter that can be used to achieve the same effect, but with a more functional approach, if you will. 

Let me go back to VS Code here. And with the same example, let me do this. Let me leave the original list of above as before, including Draco, who's not in fact from Gryffindor. And let me temporarily define a function called is Gryffindor that takes in as a value something like a student S. 

And then, let's do this. Let's go ahead and say if s quote unquote house equals equals Gryffindor, then go ahead and return true. Otherwise, go ahead and return false. Now, we've seen before conditionals like this that are a bit unnecessarily verbose. I don't need to have a conditional if I'm already asking a Boolean question up here. 

So I can actually tighten this up as we've done in the past and just return does the student's house equal equal Gryffindor? Either it does and it's true, or it doesn't in it's false. I don't need to explicitly return true or false. I can just return the value of that Boolean. 

Let's go ahead now and do this. I'm going to create, as before, a variable called Gryffindors, a list for all of my Gryffindor students that equals to, this time, the result of calling filter. Filter takes at least two arguments here, one of which is the name of a function to call is Gryffindor. And I'm going to apply that function to each of the elements of this sequence here. 

So similar in spirit to map, I'm passing in a function that's going to be applied to each of the elements in the sequence. But map returns one value for each element in the sequence. That's how we forced all of the words to uppercase. 

But if I want to conditionally include a student in my resulting Gryffindors list, I can use filter instead. Filter expects its first function to be not something like str.upper, but a function that returns true or false. Tell me whether or not I should include or not include the current student from the final list. 

And the question being asked is, do they live in Gryffindor? We're checking the dictionary's house key for that answer. And so, ultimately, I think we'll be left with something quite similar. For Gryffindor in the sorted version-- let's do for Gryffindor in Gryffindors, let's go ahead then and print out the current students, Gryffindor name. 

It's not going to be sorted just yet. But when I run this version here Python of Gryffindors.py and hit Enter, we're back in business. It's unsorted. But we have Hermione, Harry, and Ron, but not Draco. 

And if you recall from a few weeks back, if we want to even a list of dictionaries, we can still do that too. I can call sorted on Gryffindors plural. And I can pass in a key. And that key can have a anonymous function, a.k.a. A Lambda function, that takes in a student as input, call it s, and then returns the value s quote unquote name, if my goal is to sort by, indeed, students own names. 

If I go ahead now and run Python of Gryffindors.py, I see the same list of students. But this time, it's sorted. So here we've seen two approaches to this particular problem of Gryffindor students. Whereby we can either use something like a list comprehension, and inside of that list comprehension do a bit of filtration, including an if conditional as I did. 

Or we can take a more functional approach by just using this filter function, passing into it the function that I want to make these decisions for me, and then include only those for whom true is returned. Any questions on either of these two approaches? 

STUDENT: Yeah. I just had a question, that if we write a code like in the previous version, where everything is stuffed into one line, won't the-- if we check for the style of the code, then won't it have a problem with it because it's less readable? 

DAVID J. MALAN: So would a formatter like black have a problem with the style of some of this code? 

STUDENT: The previous one, where the everything was tucked into one line. 

[INTERPOSING VOICES] 

DAVID J. MALAN: Oh, a good question. Would something like Black have a problem with this code? Well, let me rewind to that version, which was using the somewhat longer list comprehension, which looked like, if we go far enough back, give me a few more undoes, which looked like this ultimately. Let me go ahead and run Black on Gryffindors.py. 

And you'll see that I actually-- it reformatted ever so slightly. But I proactively fix this myself. Had I done this and done it on just one line, but I knew that Black might not like that, it would have fixed it for me. So I just proactively fixed it before writing the code myself. How about time for one other question on Gryffindors.py and this approach of using a list comprehension or filter? 

STUDENT: Yeah. When using filter, instead of calling the function is Gryffindor, can you use it right there inside filter? 

DAVID J. MALAN: Can you use the function is Gryffindor? So you don't want to call it like this. Because you don't want to call it then. You want filter to call the function for you, if that's what you mean. So I pass it in only by its name instead. 

STUDENT: No, I mean, if you can write the return as house equals equals Gryffindor inside [INAUDIBLE]. 

DAVID J. MALAN: Yes, indeed. In fact, so recall that we indeed used these Lambda functions way back when we wanted to pass in a quick and dirty function anonymously to allow sorted to filter by a different key of a dictionary. We can do that here. 

I can actually take the essence of this is Gryffindor function. I can change the name of this function in my filter call to be another Lambda function, passing in an argument like s, and returning exactly that. I can now delete my is Gryffindor function all together. And now, when I run Python of Gryffindors.py, I still get the same answer. And I've not bothered defining a function only to then use it in one and only one place. 

Well, let me propose too that we equip you with one other tool for your toolkit, namely dictionary comprehensions as well. And admittedly, the syntax is starting to get even weirder. But as you get more comfortable with all of these primitives and others, these are just tools that you can optionally but perhaps powerfully use to solve future problems down the road. 

And with a dictionary comprehension, we have the ability to create on the fly a dictionary with keys and some values without having to do it old-school by creating an empty dictionary, and creating a for loop, and iterating over that loop, and inserting more and more keys and values into the dictionary. We can rather do it all at once. 

So in fact, let me go back to VS Code here. And let me propose now that I do this. Let me go ahead and initially do it the old-fashioned way here as follows. 

Let me go ahead and simplify and get rid of the houses all together so that we can focus for now just on a list of students' names. I'm going to go ahead and run students. I'm going to go ahead and write students equals quote unquote Hermione, quote unquote Harry, and we'll keep it even shorter this time, quote unquote Ron, only those three students in Gryffindor. 

I'm going to now proactively as we've done in the past give myself an empty list, so that I have something to accumulate some answers to this problem in. And now, I'm going to do something like this. For students and students, so I can iterate over each of them, 

Let's go ahead and with the Gryffindors list append to it the name of the student. So quote unquote name and then student, which is indeed their name from that list. And now, let's go ahead and just put these students all in Gryffindor. I know these three students are in Gryffindor. So suppose that the problem at hand is that I want to build up a list of dictionaries that only contains the Gryffindor students. 

So it's sort of a step back from the previous version where I already had the names and the houses. For now, just assume that the problem is I have all of their names, but I don't yet have the student dictionaries themselves. So I'm rebuilding that same structure that I previously took for granted. 

Now, let's go ahead and just for the sake of discussion just print out these Gryffindors so we can see what we've built. If I run Python of Gryffindors.py in my prompt, I see a bit of a cryptic syntax. But again, look for our little hints. I've got a square bracket at the end and a square bracket at the beginning. And that indicates, as always, this is a list. 

I then have a whole bunch of curly braces with a whole bunch of quoted keys. They happen to be single quotes by convention when using print on a dictionary. But that's just a visual indicator that that is my key. 

And the first value thereof is Hermione. Second key is a house. This value thereof is Gryffindor. Then there's a comma, which separates one dict object from the next. And if we look past Harry and Gryffindor, there's a second comma which separates Harry and Gryffindor from Ron and Gryffindor as well. 

So in short, here is some code whereby I fairly manually built up with a for loop in an otherwise initially empty list the same data structure as before minus Draco just for Gryffindor students. But here's where, again, with dictionary comprehensions or really list comprehensions first, can we do this a little more succinctly? 

Let me clear my terminal window. Let's get rid of this initially empty list and this for loop that appends, appends, appends to it. And let's just do this. A Gryffindors variable will equal the following list comprehension. 

Inside of that list, I want a dictionary structured with someone's name and their name. Someone's house and only for now Gryffindor. And that's it. But I want one of these dict objects here in these curly braces for each student in students. 

So here too, inside of my list comprehension with my square brackets, I want an object as indicate-- I want a dictionary as indicated by the curly braces. I want each of those dictionaries to have two keys-- name and house respectively, the values thereof are the student's name from earlier here and Gryffindor only. Which students do I want to create those dict objects from? Well, for student in students. 

So again, on the left I have what I want in the final list. And on the right, I have a loop, and this time, no conditional. I want all of these students in Gryffindor as their house. 

Now, let's print this again, Python of Gryffindors.py and hit Enter. And now, we have the exact same output. So instead of three lines it's just one. It's a little more cryptic to read at first glance. But once familiar with list comprehensions and this sort of syntax, it's just another way of solving that same problem. 

What if I want to change this and simplify? What if I don't want a list of dictionaries, which I now have. Again, per the square brackets I have a list of three dict objects here. What if I just want one bigger dictionary inside of which is a key like Hermione colon Gryffindor, Harry colon Gryffindor, Ron colon Gryffindor. I don't need a list. I don't need separate objects per student. 

I just want instead one big dictionary where the keys are the students' names and the values of their house. And I'm assuming for now no one's going to have the same first name in this world. 

Well, I can do this. Let me get rid of this here and not create a list comprehension, but again, this thing known as a dictionary comprehension. And the visual indicator or difference here is that instead of being square brackets on the very outside, this time it's going to be curly braces instead. 

So inside of these curly braces, what do I want every key to be? I want every key to be the student's name. I want every value for now to be Gryffindor. And I want to do this for each student in students. 

And now, things are getting really interesting. And this is another manifestation of Python in some views being very readable from left to right. Absolutely takes practice and comfort. But this is creating a variable called Gryffindor which is going to be a dictionary per these curly braces. 

Every key is going to be the name of some student. Every value is going to be Gryffindor. What names of what students? Well, this dictionary comprehension will be constructed from the list of students one at a time. 

So when I print this now, the syntax will look a little different because it's not a list of dictionary objects. It's just one bigger dictionary object itself. But now printing Gryffindors gives me Hermione colon Gryffindor, Harry colon Gryffindor, and Ron colon Gryffindor as well. Any questions now on what we've called dictionary comprehensions as well? Any questions on here? No? 

Well, let's introduce one other function from Python's toolkit followed by one final feature and flourish. And then you're off on your way. Well, let's go ahead and think back to this. Recall some time ago that we had just a simple list of students as we have here, Hermione, Harry, and Ron. And for instance, way back when, we wanted to print out, for instance, their ranking from one, to two, to three. 

Unfortunately, when you do something like this for student in students, you can print out the student's name quite easily. Of course, if I do Python of Gryffindors.py, I get Hermione, Harry, Ron in that same order. But I don't see any numerical rank. I see no number one, two, or three. So I could maybe do this with maybe a different type of for loop. Instead of this, why don't I try this? 

So maybe I could do for i in the range of the length of the students list-- and we've done something like this before. And then I could print out i, and I could print out the student's name by indexing into that list at location i. 

Well, what does this look like? If I run Python of Gryffindors.py it's close. But these aren't programmers. They don't necessarily think of themselves as zero-indexed. Hermione he probably wants to be first not zero. 

So how can we fix this? Well. Just a little bit of arithmetic. I could print out i plus one, of course, and then the student's name. So if I clear my terminal window and run Python of Gryffindors.py doorstop once more, now we have this enumeration, one, two, three of each of these students. 

But it turns out that Python actually has had all this time another built-in function that you might now find useful. That is namely enumerate. And enumerate allows you to solve this kind of problem much more simply by iterating over some sequence but finding out not each value one at a time, but both the value one at a time and the index thereof. It gives you back two answers at once. 

So if I go back to VS Code here now and take this approach, I don't need to do this complicated range, and length, and then i all over the place. I can more succinctly do this. I can say for i comma student in the enumerate return value passing in students. So this gives me back an enumeration, if you will. And now, I can go about printing i plus 1 as before. And I can print out the student. 

So I don't need to index into the list with bracket i notation. I don't need to call range. I don't need to call length. Again, enumerate takes a sequence of values like these students, and it allows me to get back the current index zero, one, two, and the current value Hermione, Harry, Ron respectively. 

So now, just tighten things up further. And indeed, that's been our theme here. Can we solve the same problems as we've been solving for weeks but tighten things up using just more of this toolkit? 

Allow us to equip you with one final tool for your tool kit, namely this ability to generate values in Python from functions. This is not a problem that we've necessarily encountered before. But it turns out, if you're writing a function that reads or generates lots of data, your function, your program, your computer might very well run out of memory. And your program might not be able to run any further. 

But it turns out there's a solution to this problem that's something you might have in your back pocket, particularly if after this course you start crunching quite a few numbers and analyzing all the more data. In fact, let's go back to VS Code here. And let's go ahead and create a program that's perhaps timely at this time of day, particularly depending on your time zone, you might be feeling all the more sleepy. 

But here in the US, it's quite common to be lulled to sleep when you're struggling otherwise by counting sheep in your head. And typically, as depicted in cartoons, you might see in your mind's eye one sheep jumping over a fence, and then two, and then three sheep, and then four. And then, eventually, you presumably get so bored counting these sheep you actually do fall asleep. 

So in VS Code here, let's create a program called sleep.py that allows me to print out some number of sheep as though I'm counting them in my mind's eye. And via this program, let's do this. Let's prompt the user for a variable n, setting it equal to the integer conversion of the return value of input, asking the user what's n? For how many sheep do they want to try counting? 

And then, let's do a familiar for loop here. And we'll start counting from zero as always. So we'll first have zero sheep, then one sheep, then two sheep, and so on for i in the range of that value n. Go ahead and print out. 

And I'll paste here an emoji representing a sheep times i. So the first iteration I'll see zero sheep. The second iteration you'll see one, and then two, and then however many specified by n ultimately minus one. 

Let's go down into my terminal window here and run Python of sleep.py. And I should see, indeed, after typing in, say, three for my value of n, zero sheep, then one sheep, then two sheep, and so forth. 

And if I make my terminal window even bigger here, we can, of course, do many more than this, typing in, for instance, 10. And you'll see that we get more and more sheep as time passes, presumably becoming all the more tedious to envision in my mind's eye. 

So let's now go ahead and practice what we've been preaching when it comes to the design of this program and see if and when we actually run into a problem. Let me go ahead here now and put all of this in a main function by defining main up here as always. Let me go ahead and indent all of this code here. And then, let me just do this conditionally as always, if the name of this file equals equals quote unquote main, let's go ahead and call main. 

Let's make sure I didn't break anything just yet, even though functionally this should be nearly the same. And if I type in three, I still have zero, then one, then two sheep on the screen. 

But we've been in the habit of course of creating helper functions for ourselves. That is, factoring our code in a way that allows us to abstract away certain functionality, like generating some number of sheep into separate functions. So that, one, they're indeed abstracted. 

And we no longer have to think about how they're implemented. And we can even reuse them in projects as in libraries. But we've also been in the habit too of now testing those functions as with unit tests. 

So I probably shouldn't keep all of my logic anyway in main. And let's factor some of this out. Wouldn't it be nice if I could, for instance, just call a sheep function as by taking this line of code here. And instead of just printing it here, let's print out the return value of a new function called sheep that tells the function how many sheep to print, i in this case. 

Let's go down as always and create another function here called sheep. The sheep function now will take a parameter n that specifies how many sheep do you want to return. And so, that we can test this as with a unit test, though we won't do that here, let me go ahead and not print the number of sheep as via a side effect. But let me go ahead and return one of those sheep times n so that the user gets back a whole string of sheep that's the appropriate number to print. 

So here too functionally, I don't think we've changed anything too fundamentally. Python of sleep.py typing three still gives us zero, then one, and then two sheep. But now, we at least have a framework for focusing on the implementation of this sheep function. 

But it's a little inelegant now that it's still up to the main function to do this iteration. We've seen in the past way back in week zero, wouldn't it be nice to define a function that actually handles the process of returning the entire string that we want rather than just one row of sheep at a time. 

Well, I think we can do this. Why don't I go ahead and change sheep as follows. Let me go ahead here and first create a flock of sheep that's initially empty using an empty list. Then for i in the range of n, let's go ahead and append to that flock, for instance, one sheep times i, so that I keep adding to this list zero sheep, then one sheep, then two sheep, then three, and so forth. 

And then, ultimately, I'm going to return the whole flock of sheep at once. So this is going to return the equivalent of all of those strings of sheep so that, ah, main can handle the printing thereof. 

So back up here in main, let's do this. How about for each sheep, I'll call it s since sheep is both singular and plural, for s in sheep of n, which again returns to me a list of all of the sheep, the whole flock, let's just print out each sheep, s, one at a time. 

So, so far so good here, I think. Let me go ahead and run Python of sleep.py and hit Enter. What's n three. And that's still seems to work just fine. 

But let me get a little creative here and see not just three sheep on my screen but maybe 10 rows of sheep. And that too seems to work fine. Let me get a little more adventurous and type in maybe 100 sheep. And it's starting to look ugly, to be fair, but they're all printing out pretty fast. 

Let me go ahead and try again with maybe 1,000 sheep on the screen. And they flew by pretty fast. It's still pretty messy. But they're all there. We could count them all up. 

How about not just 1,000 but 10,000 sheep? Well, that too seems OK. It's taking like 10 times as long. And that's why you see this flickering on the screen. All of the sheep are still printing. But, but, but, it's a lot of data being printed. 

If I hang in there a little longer, hopefully we'll see all 10,000 sheep coming to pass. This is here in the video where we will speed up time, a real online. Oh my God. This is a lot of sheep. 

There we go. OK. And now all of my sheep have been printed. So it seems to be working just fine. Well, let me just be even more adventurous and, OK, let me try my luck. Let me try, how about one million sheep this time and hit Enter? 

Ha. Something's no longer working. While we wait for a spoiler here, does anyone have any intuition for why my program suddenly stopped printing sheep? What is going wrong in this version, wherein I'm generating this really big flock of sheep? 

STUDENT: We might have run out of memory or computation power. 

DAVID J. MALAN: Yeah. So maybe we're actually pushing the limits of my Mac, my PCs, my cloud server's memory or CPU, the brains of the computer's capabilities because it's just trying to generate massive, massive, massive lists of sheep, one million of those rows of sheep, each of which has a huge number of sheep. And it seems that my computer here is honestly just really struggling. 

And this is really unfortunate now. Because it would seem that even though this program clearly works pretty well for 1,000 sheep, 10,000 sheep, once you cross some threshold, it just stops working altogether. Or it just takes way too long for the program to be useful anymore. 

But this seems a little silly, because theoretically, I should absolutely be able to print all of these same sheep if I just printed one right away, then print two right away, then print three, then four, then five. 

It seems that the essence of this problem, if I go back to my code, is that per my best practices that I'm trying to practice what I'm preaching, it seems that the fundamental problem is that I've modularized my code by creating this helper function called sheep, whose purpose in life is to do all of the generation of sheep and then return all of them at once. 

Wouldn't it be better-- and I can actually hear my fan turning on now even just trying to generate these sheep-- wouldn't it be better then to just print the sheep one, two, three, four at a time? Well, we could do that. 

But that's really a step backwards. That rather contradicts all of the lessons learned of the past few weeks. Where generally not putting everything in main is a good thing. Generally having an additional function that you can then test separately with unit tests is a good thing. Do we really need to give up all of those best practices just to print out some sheep and here fall asleep? 

Well, it turns out there's a solution to this problem, and namely in the form of these generators in Python. You can define a function as a generator, whereby it can still generate a massive amount of data for your users. But you can have it return just a little bit of that data at a time. And you yourself can implement the code in almost the same way. But you don't have to worry about too much getting returned all at once. 

These two, like all features of Python, are documented in the official documentation therein. But what you'll find, ultimately, that it all boils down to this keyword here, yield. Up until now, when we've been making functions, we have been defining functions that return values, if at all, using the keyword return. And indeed, if we go back to our code here, that's exactly what I've been waiting for. I've been waiting to return the whole flock at once. 

Unfortunately, if you wait too long, and here we have it, my program was quote unquote killed. That is to say, my computer got so fed up with how much memory and CPU it was trying to use it just said, nope, you're not going to run at all. And that's unfortunate. Now my program no longer works for large numbers of sleeps-- sheeps, which is not good if I'm really having trouble falling asleep some night. 

So how can I use yield to solve this problem instead? Well, let me do this. Instead of building up this massive list of sheep in this big list called flock, let's just do this instead. Let me go ahead and simplify this whole function as follows, whereby I iterate for i in the range of n. And then on each iteration, in the past I might have been inclined to use return and return something like one sheep times i. 

But this won't work here. Because if you want a million sheep and you start a for loop saying for i in the range of a million, you're going to return accidentally zero sheep right away. And then this function is essentially useless. You shouldn't return a value in the middle of a loop like this because you're not going to get to any of these subsequent iterations of the loop. It's going to iterate once, and boom, you return. 

But thanks to this other keyword in Python called yield, you can tell Python to effectively return just one value at a time from this loop. So if I go back to this version of my code here. And I say not return but yield, this is like saying return one value at a time, return one value at a time, return one value at a time. The for loop will keep working and I will keep counting from zero, to one, to two, all the way up toward one million. 

But each time, the function is just going to hand you back a little piece of data. It's going to generate, so to speak, just a little bit of that data, not all of the data at once. And that's good. Because my computer has a decent amount of RAM, certainly enough to fit one row of sheep. It just doesn't have enough memory to fit, apparently, one million rows of so many sheep. 

So now, if I go to my terminal window and run Python of sleep.py and hit Enter, what's n? Three would still work-- zero, then one, and then two. Let me go ahead and increase the size of this here and run Python of sleep.py. Let's try one million as before and hit Enter. And now I immediately see results. 

I don't think we'll wait for all of these sheep to be printed, because then we will literally all be asleep. But what you'll notice happening now is the program is not hanging, so to speak. It's not waiting, and waiting, and thinking, and thinking, and trying to generate the entire flock at once. It's just generating one row of sheep at a time. 

And it's flickering on the screen because there are so many of them. And that's all thanks to yield. It's generating a little bit of data at a time, not all at once. Any questions now on this feature called generators? Any questions at all? 

To add one more piece of terminology to the mix, just so you've heard it. This same feature here is returning what we'll technically now call an iterator. Yield is returning an iterator that allows your own code, your own for loop in main to iterate over these generated values one at a time. 

STUDENT: How does this yield actually works under the hood? I mean, is it using multithreading? 

DAVID J. MALAN: You can think of the implementation as being asynchronous in this sense. Whereby the function is returning a value immediately and then subsequently giving you back another one as well. Underneath the hood, what's really happening is the generator is just retaining state for you. It does not going to run the entire loop from top to bottom and then return a value. It's going to do one iteration and yield a result. 

And the Python for you is going to suspend the function, if you will, but remember on what iteration it was. So the next time you iterate over it, as is going to happen again and again in this for loop in main, you get back another value again and again. 

So yield returns, indeed, this thing called an iterator. And that iterator can be stepped over as in a loop one element at a time. But the language, Python handles all of that for you so that you don't need to do all of the underlying plumbing yourself. How about time for one other question on these generators and integrators as our sheep continue to fly by? 

STUDENT: So if every iteration, the program will return the memory to the system so the program will not crash? 

DAVID J. MALAN: Correct. On each iteration, it's only returning the one string of sheep that's appropriate for the current value of i. It is not trying to return all million rows of the same. And therefore, it uses really one millionth the amount of memory, although that's a bit of an oversimplification. 

All right. As these sheep continue to fly across the, screen let me now go ahead and interrupt this, as you might have had to in the past with infinite loops in your own code. Even though this isn't infinite, it's just really long-- control C will interrupt with your keyboard that program, giving me back control of my computer. 

Well, here we are at the end of CS50's Introduction to Programming with Python. And if today in particular of all days felt like a real escalation real quickly, realize that these are really-- these are just additional perhaps optional tools in your toolkit that you can add to all of the past lessons learned. So that as you exit from this course and tackle other courses or projects of your own, you have all the more of a mental model and all the more of a toolbox with which to solve those same problems. 

If we think back now just a few weeks ago, it was probably in our focus on functions and variables that you first started struggling. But now in retrospect, if you look back at those problems and those same problems sets, odds are those same problems would come all too easily to you now. Conditionals was the next step in the class, wherein we gave you the ability to ask questions and get answers and therefore do things conditionally in your code. 

We came full circle today. And you can see that you can now use those same kinds of conditionals now to do fancier things with list comprehension and dictionary comprehensions and the like. Loops, of course, have been omnipresent now for weeks, including today as we built up those same structures. 

And of course, something can go wrong. And exceptions and exception handling was our mechanism for not only catching errors in code but also raising your own exception. So that if you're laying the foundation to write code for other people, as in the form of libraries, you can do that too. 

Libraries, of course, are things you can not only use but now write on your own, be it a small module or whole package of code that you want to share with others around the world. And even better, can you write tests for your own code, for your libraries, for other's code as well. So that ultimately, you can be all the more confident that not only your code is correct today. But if you make a change to your code tomorrow, you haven't broken anything, at least according to your tests if they continue to pass. 

File I/O though, meanwhile, was a way of now storing data not just in the computer's memory like all of these sheep, but actually storing things persistently, longer term to disk, being in a CSV or something more like a binary file like an image. 

With regular expressions, you then had the ability to express patterns and actually validate data or extract data from information. All the more of a useful technique nowadays when so much of the world is trying to analyze and process data at scale, some of which might in fact be quite messy from the get-go. 

And then, of course, most recently, object-oriented programming, an opportunity to solve the same kinds of problems but with a slightly different perspective, a way to encapsulate and to represent real world entities, this time in code. 

And today, of course, et cetera with so many other tools that you can add that didn't necessarily fall under any of those earlier umbrellas but are useful functions, and data types, and techniques just to have, again, in your back pocket as yet other mechanisms for solving problems as well. 

Not just putting everyone to sleep, but I thought another way to end might be a little more vocally to try writing one final program together, this one using a library we've seen in the past, as well as one other. I've taken the liberty of installing a text to speech library on my computer here. And I'm going to go ahead, perhaps, and open a new file here called say.py in VS Code. 

And I'm going to go ahead here and first import our own friend, import cowsay. And I'm going to import this new library here, import pyttsx3, the Python text to speech library. And now, per its documentation, which I read in advance, I'm going to go ahead and create a variable for myself here, engine equals pyttsx3 init to initialize that library for text to speech. 

I'm going to then ask the user, well, what do I want to hear spoken? And I might do something like this. A variable called this equals the return value of input. What's this shall be my simple question. And I'm going to keep it this time as a string. 

We've seen how to use cowsay. We can do cowsay.cow of this. Turns out this new library can allow me to use its own engine to say this as well. But then, ultimately, I'm going to have to run the engine.runAndWait, just in case it's a long phrase or sentence to be said. 

But that's it. In just eight lines of code, not only am I apparently going to have a cow appear on the screen to close us out now but also some synthesized text. 

Ultimately then we hope with this course that you've not only learned Python, that you've not only learned programming, but you've really learned how to solve problems, and ultimately how to teach yourself new languages. Funny enough, I myself only learned Python just a few years ago. 

And even though I certainly went through some formal documentation and resources online, I mostly learned what I know now and even what I had to learn again for today by just asking lots of questions, be it of Google, or friends, who are more versed in this language than I. 

And so, having that instinct, having that vocabulary [INAUDIBLE] which to ask questions of others to search for answers to questions, you absolutely now have enough of a foundation in Python and programming to go off and stand on your own. So you can certainly-- and you're welcome and encouraged to go on and take other courses in Python and programming specifically. 

But better still, as quickly as you can, is to find some project that's personally of interest that uses Python or some other language. Because at least from my own experience, I tend to learn best and I hope you might too by actually applying these skills. Not to problems in the classroom, but really truly to problems in the real world. 

Allow me with all that said to look at my full screen terminal window here. Run Python of say.py, crossing my fingers one final time in hopes that I've not made any mistakes or bugs. And here we go. Python of say.py prompting me, what's this? How about we end on this note here. 

COMPUTER: This was CS50. 