# Generated by Django 3.2.2 on 2022-07-03 12:06

from django.db import migrations, models


class Migration(migrations.Migration):

    initial = True

    dependencies = [
    ]

    operations = [
        migrations.CreateModel(
            name='File',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('name', models.CharField(blank=True, max_length=20, null=True)),
                ('create_time', models.DateField(auto_now_add=True)),
                ('size', models.IntegerField(default=0)),
                ('filetype', models.CharField(blank=True, max_length=20, null=True)),
                ('user', models.CharField(blank=True, max_length=20, null=True)),
                ('url', models.CharField(blank=True, max_length=100, null=True)),
            ],
        ),
    ]
