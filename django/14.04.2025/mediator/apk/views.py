from django.shortcuts import render

menu = [
    {'id':1,'name':'about'},
    {'id':2,'name':'home'},
    {'id':3,'name':'kontakt'},
    {'id':4,'name':'gallery'},
]

def home(request):
    return render(request,'home.html',{'menu':menu})