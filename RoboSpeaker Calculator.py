#calculator1.2.2
import gtts
import playsound

text1="   enter a number  "
sound=gtts.gTTS(text1, lang="en")
sound.save("text1.mp3")
playsound.playsound("text1.mp3")
a=int(input("enter a number:"))


text2="   enter another number  "
sound=gtts.gTTS(text2, lang="en")
sound.save("text2.mp3")
playsound.playsound("text2.mp3")
b=int(input("enter another number:"))


oper="   enter operator  "
sound=gtts.gTTS(oper, lang="en")
sound.save("oper.mp3")
playsound.playsound("oper.mp3")
op=str(input("enter the operator:"))

if(op=='+'):
    print(a+b)
elif(op=='-'):
    print(a-b) 
elif(op=='*'):
    print(a*b)
elif(op=='/'):
    print(a/b)
elif(op=='%'):
    print(a%b)
elif(op=='^'):
    print(a^b)
else:
    print("try aanother time\n")