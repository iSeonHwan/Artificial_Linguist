# Artificial Communicator Programme(A.C.P.)

## Background

for efficiently providing confidence and free to people, it is confident to use by people. Human's essential factor is language. Thus, Technology and Robot should comprehend language and speech it. Language is system of communication to use only by human. Natural language is language constructed by Language Acquistion Device(LAD). Natural language processing indicates handling of principle, meaning of natural language. Deductive approach in programing natural language was limits. Inductive method is trouble for human to comprehend result of program constructing artificial neural network.(need to more research) This method need excessive plenty of resource in coumputer. (need to more research) I want to make program to construct itself Linguistic principle. I want to make program that human understand result of artificial language acquisition.

## Goal

1. product programe to automatically make gramatical rule, when computer input language message

2. Automatically creating dictionary program When it get language message.

3. Automatical program creating context information matrix , when it get language message.

4. Program speeching language message according to certain context.

## Basic Idea

1. I will make Program to realize language acquisition process

  - The program construct language principle itself, which do not receive input of rule that user make.
  
2. input data is limited. The scope is decided by user.


3. I design program reflected HPSG, transformational generative grammar, etc of universal language rule.

  - using transformational grammar to language development stage.
   
  - using HPSG when language development step complete.

4. User input language data.

5. Program analyse language data(usually sentence) according to associated or integrated relation.

    - to extract language unit according associated relation as result of comparing language data.

    - to extract integrated relation of language units.

    - to save, use with frame based upon HPSG matrix about language unit of arbitrary relation about meaning and expression.


6. This program reflect learning step of Gagne's Theory.

7. This program utilize saving and handling of information efficiently 

    - to use C, C++ as Major programing language.

    - to minimize of memory usage amount.

## Step

I develop program that read text, automatically classify language unit(morpheme, word, sentence, discourse, etc).

I develop program that read text, automatically generate dictionary.

I develop program that generate language principle.

## Idea

Analyzer programe connect article, text in hard disk drive.(How?) -> Make matrix of connect information.

## Algoritm

![image](https://user-images.githubusercontent.com/84608929/180610030-a4bc4598-bc86-4e16-a029-ef7fbd1f7973.png)


## Inheritance

class Word{

  //information 1
  
  //information 2
  
}

Word information inheritate phrase.

Word -> phrase.

Sentence: principle of compositionality.



## Reference

열심히 취업한 공대누나. “[C언어 독학하기] 20. 파일 입출력 (fopen_s)”. 공대누나의 일상과 전자공학, 2020년 12월 20일. https://gdnn.tistory.com/100?category=886154.

청. “[C언어] 파일의 끝 (feof)”. 네이버 블로그 | 청청청. 접근된 2021년 10월 16일. https://blog.naver.com/ehdwls3831/221351564239.

“C 언어 레퍼런스 - fopen 함수”. 접근된 2021년 10월 16일. https://modoocode.com/58.

코딩도장. “C 언어 코딩 도장: 70.3 파일에 문자열 쓰기”. 접근된 2021년 10월 2일. https://dojang.io/mod/page/view.php?id=609.

“C 언어 코딩 도장: 70.4 파일에서 문자열 읽기”. 접근된 2021년 10월 1일. https://dojang.io/mod/page/view.php?id=610.

공대누나의 일상과 전자공학. “[C언어 독학하기] 21. 파일 입출력, puts fgetc, fputc”, 2020년 12월 31일. https://gdnn.tistory.com/110?category=886154.

“Integrate with External Tools via Tasks”, 2021년 2월 9일. https://code.visualstudio.com/docs/editor/tasks.

