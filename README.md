# caravela-commerce
caravela-commerce - интернет портал, который представляет собой платформу для размещения объявлений и информации об 
оказании услуг производителей, покупателей и сопутствующих организаций агропромышленного сектора. Все сделки заключаются 
между пользователями через данную платформу, преимущественно за криптовалюту.
Таким образом, «caravela-commerce» является участником сделок пользователей и гарантом надежных, открытых операций. 
Также, платформа предоставляет доступ к данным о криптопроектах, а также отображает актуальную информацию о крипторынке
в целом.

========================================================================================================================
##### Описание ТЗ:
##### Окружение проекта: requirements.txt

========================================================================================================================

Склонируйте репозиторий с помощью git:
https://github.com/RuslanSayfullin/caravela-commerce.git
Перейти в папку:
$ cd caravela-commerce

Создать и активировать виртуальное окружение Python.

Установить зависимости из файла **requirements.txt**:
```bash
pip install -r requirements.txt
```
========================================================================================================================

В Linux, тобы создать новую пустую БД и загрузить в новую пустую дамп (создать на локальном 
компьютере актуальную, на данный момент БД для портала, нужно ввести:

$ sudo apt-get install libpq-dev python-dev
$ sudo apt-get install postgresql postgresql-contrib

Чтобы проверить, действительно ли база данных Postgres инициализирована:
$ sudo su - postgres
# pg_isready

Кроме того, в systemd служба Postgres также запускается автоматически и включается при загрузке системы. 
Чтобы убедиться, что служба работает нормально, выполните следующую команду:
#systemctl status postgresql

Только что инициализированная система всегда содержит одну предопределенную роль, называемую postgres,
и имеет то же имя, что и учетная запись пользователя операционной системы, называемая postgres, 
которая используется для доступа к psql (оболочка Postgres) и другим программам баз данных.

Учетная запись пользователя системы Postgres не защищена паролем,
для ее защиты вы можете создать пароль с помощью утилиты passwd:
$passwd postgres
Пароль: 12345

Кроме того, роль Postgres (или, если угодно, суперпользователь базы данных) по умолчанию не защищена. 
Вам также необходимо защитить ее паролем. Теперь переключитесь на учетную запись пользователя системы postgres 
и роль postgres (не забудьте установить надежный и безопасный пароль), как показано ниже.

# su - postgres
$ psql -c "ALTER USER postgres WITH PASSWORD '54321';"
$ exit
# exit
$ sudo su - postgres
Теперь запускаем командную оболочку PostgreSQL:
$ psql 
Для просмотра всех пользователей СУБД:
=# select * from pg_user;
To reset the password if you have forgotten:
=# ALTER USER portaluser WITH PASSWORD 'new_password';

=# DROP DATABASE caravela; --не обязательно!!!
=# CREATE DATABASE caravela;
=# CREATE USER portaluser WITH PASSWORD 'myPassword';
=# GRANT ALL PRIVILEGES ON DATABASE clipper TO portaluser;
=# \q
$ exit

Вести список баз данных и таблиц PostgreSQL с помощью psql:
$ sudo su - postgres
$ psql
=# SELECT datname FROM pg_database;

Настройка файла pg_hba.conf
Для возможности подключиться к СУБД от созданного пользователя, 
необходимо проверить настройки прав в конфигурационном файле pg_hba.conf.

$ sudo su - postgres
Теперь запускаем командную оболочку PostgreSQL:
$ psql
Для начала смотрим путь расположения данных для PostgreSQL:
=# SHOW config_file;

$ nano /etc/postgresql/13/main/pg_hba.conf
# в данном примере /etc/postgresql/13/main/pg_hba.conf — путь расположения конфигурационных файлов.

Добавляем права на подключение нашему созданному пользователю:

# IPv4 local connections:
host all portaluser 127.0.0.1/32 md5 


Удаление пользователей 
$ sudo su - postgres
Теперь запускаем командную оболочку PostgreSQL:
$ psql
Удаление пользователя выполняется следующей командой:
=# DROP USER portaluser;

========================================================================================================================

# программа управления локальной базой данных
Valentina Studio 9

ссылка для скачивания: https://valentina-db.com/en/all-downloads/vstudio/current 
пакет: Valentina Studio Linux 64 DEB 

переходим в папку куда был загружен deb пакет, затем устанавливаем.
 $ sudo dpkg -i имя_пакета.deb

Данные для подключения:
Метод подключения: Стандартный TCP/IP
Хост:              localhost
База данных:       caravela
Пользователь:      portaluser
Пароль:            12345
Порт:              5432

========================================================================================================================
# Выполнить следующие команды:

* Команда для создания миграций приложения для базы данных
```bash
python3 manage.py makemigrations
python3 manage.py migrate
```
* Создание суперпользователя
```bash
python3 manage.py createsuperuser
```
Будут выведены следующие выходные данные. Введите требуемое имя пользователя, электронную почту и пароль:
по умолчанию почта portal@portal.com пароль: 12345
```bash
Username (leave blank to use 'admin'): portaluser
Email address: admin@admin.com
Password: *****
Password (again): *****
Superuser created successfully.
```
* Команда для запуска приложения
```bash
python3 manage.py runserver
```
* Приложение будет доступно по адресу: http://127.0.0.1:8000/

========================================================================================================================

# Отладка Django — добавление Django Debug Toolbar в проект

1) Установка библиотеки: pip install django-debug-toolbar;
2) Добавление в INSTALLED_APPS: в settings.py добавьте debug_toolbar в раздел INSTALLED_APPS(после: django.contrib.staticfiles).
Также убедитесь, что в файле settings.py присутствует следующая строка STATIC_URL = '/static/';
3) Импорт в urls.py: Чтобы использовать Debug Toolbar, мы должны импортировать его пути. Следовательно, в urls.py добавьте код:
# debug_tool/urls.py
...
from django.conf import settings
from django.urls import path, include

# urlpatterns = [....

if settings.DEBUG:
    import debug_toolbar
    urlpatterns = [
        path('__debug__/', include(debug_toolbar.urls)),
    ] + urlpatterns

    urlpatterns += static(settings.MEDIA_URL, document_root=settings.MEDIA_ROOT)

4) Подключение MiddleWare:
Добавьте middleware панели инструментов debug_toolbar.middleware.DebugToolbarMiddleware, в список MIDDLEWARE в settings.py.

5) Упоминание INTERNAL_IPS:
Django Debug Toolbar отображается только в том случае, если в списке INTERNAL_IPS есть IP приложения. 
Для разработки на локальном компьютере добавьте в список IP 127.0.0.1.

========================================================================================================================