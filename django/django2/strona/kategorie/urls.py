from django.urls import path
from . import views

urlpatterns = [
    path('',views.home,name='home'),
    path('par/<str:pk>/',views.par,name='par')
]
