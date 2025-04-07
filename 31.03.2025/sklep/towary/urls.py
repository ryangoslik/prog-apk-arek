from django.urls import path
from . import views

urlpatterns = [
    path('',views.pokaz,name='home'),
    path('kontakt/',views.kontakt,name='kontakt')
]