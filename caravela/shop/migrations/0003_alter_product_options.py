# Generated by Django 4.0.2 on 2022-03-11 12:30

from django.db import migrations


class Migration(migrations.Migration):

    dependencies = [
        ('shop', '0002_alter_category_options'),
    ]

    operations = [
        migrations.AlterModelOptions(
            name='product',
            options={'ordering': ('id',), 'verbose_name': 'product', 'verbose_name_plural': 'products'},
        ),
    ]