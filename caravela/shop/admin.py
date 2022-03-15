from django.contrib import admin
from .models import Category, Product


@admin.register(Category)
class CategoryAdmin(admin.ModelAdmin):
    list_display = ['id', 'name', 'slug']       # Поля, которые отображаются в панели администратора
    # list_filter = ['name']  # Cписок полей, по которым выполнена фильтрация
    list_display_links = ('id', 'name')         # Поля, которые открывают заявку в панели администратора
    # prepopulated_fields = {'slug': ('name',)}   # Возможность создания поля slug на базе заголовка
    search_fields = ('id', 'name')              # Поля, по которым можно выполнять пойск


@admin.register(Product)
class ProductAdmin(admin.ModelAdmin):
    list_display = ['id', 'name', 'slug', 'price',
                    'available', 'created', 'updated']     # Поля, которые отображаются в панели администратора
    list_display_links = ('id', 'name')                    # Поля, которые открывают заявку в панели администратора
    list_filter = ['available', 'created', 'updated']      # Cписок полей, по которым выполнена фильтрация
    list_editable = ['price', 'available']                 # Cписок полей, которые можно будет редактировать
    # prepopulated_fields = {'slug': ('name',)}              # Возможность создания поля slug на базе заголовка
    search_fields = ('id', 'name')                         # Поля, по которым можно выполнять пойск
