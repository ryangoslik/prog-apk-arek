from django.shortcuts import render
# Create your views here.

def home(request):
    return render(request,'home.html')

def about(request):
    return render(request,'about.html')

def opis(request):
    return render(request,'opis.html')