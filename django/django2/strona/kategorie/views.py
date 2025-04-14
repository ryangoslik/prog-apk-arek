from django.shortcuts import render
from .models import Kategorie
def home(request):
    return render(request,'home.html')

def par(request,pk):
    pk = int(pk)
    if(pk==1):
        context = {'load':'Pan Kupka z Pupki'}
    elif(pk==2):
        context = {'load':'Ogur Rik'},
    elif(pk==3):
        kategorie = Kategorie.objects.all()
        context = {'load':kategorie}
    else:
        context = {'load':'Inny load'}
    return render(request,'par.html',context)