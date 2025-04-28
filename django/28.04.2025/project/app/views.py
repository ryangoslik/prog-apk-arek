from django.shortcuts import render
from .models import Lista

def start(request):
    return render(request,'start.html')

def about(request):
    context = {'about' : 'Pszczyna, Chief Kiep, szikagoniga'}
    return render(request,'about.html',context)

def lista(request):
    query = Lista.objects.all()
    context = {'lista':query}
    return render(request,'lista.html',context)