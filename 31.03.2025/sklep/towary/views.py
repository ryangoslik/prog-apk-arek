from django.shortcuts import render
from django.http import HttpResponse

def pokaz(request):
    return render(request,'home.html')

def kontakt(request):
    return render(request,'kontakt.html')