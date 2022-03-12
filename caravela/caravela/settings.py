import os

from .settings_db_debug import DEBUG, DATABASES  # импорт настроект "режима отладки" и "базы данных"
from pathlib import Path

# Build paths inside the project like this: BASE_DIR / 'subdir'.
BASE_DIR = Path(__file__).resolve().parent.parent

# SECURITY WARNING: keep the secret key used in production secret!
SECRET_KEY = 'django-insecure-^^ycn0+8%nu6yxg5s+(6_q@rwgfz5iz=foaq08w0qu0crr1s90'

ALLOWED_HOSTS = ['caravela-commerce.ru', 'localhost', '127.0.0.1']
INTERNAL_IPS = (
    "127.0.0.1",
)


# Application definition
INSTALLED_APPS = [
    'django.contrib.admin',
    'django.contrib.auth',
    'django.contrib.contenttypes',
    'django.contrib.sessions',
    'django.contrib.messages',
    'django.contrib.staticfiles',
    'debug_toolbar',
]+['shop.apps.ShopConfig',
   'cart.apps.CartConfig',
   'orders.apps.OrdersConfig',
   'payment.apps.PaymentConfig',
   ]

MIDDLEWARE = [
    'django.middleware.security.SecurityMiddleware',
    'django.contrib.sessions.middleware.SessionMiddleware',
    'django.middleware.common.CommonMiddleware',
    'django.middleware.csrf.CsrfViewMiddleware',
    'django.contrib.auth.middleware.AuthenticationMiddleware',
    'django.contrib.messages.middleware.MessageMiddleware',
    'django.middleware.clickjacking.XFrameOptionsMiddleware',
    'debug_toolbar.middleware.DebugToolbarMiddleware',
]

ROOT_URLCONF = 'caravela.urls'

TEMPLATES = [
    {
        'BACKEND': 'django.template.backends.django.DjangoTemplates',
        'DIRS': [],
        'APP_DIRS': True,
        'OPTIONS': {
            'context_processors': [
                'django.template.context_processors.debug',
                'django.template.context_processors.request',
                'django.contrib.auth.context_processors.auth',
                'django.contrib.messages.context_processors.messages',
                'cart.context_processors.cart',
            ],
        },
    },
]

WSGI_APPLICATION = 'caravela.wsgi.application'

# Password validation
# https://docs.djangoproject.com/en/4.0/ref/settings/#auth-password-validators

AUTH_PASSWORD_VALIDATORS = [
    {
        'NAME': 'django.contrib.auth.password_validation.UserAttributeSimilarityValidator',
    },
    {
        'NAME': 'django.contrib.auth.password_validation.MinimumLengthValidator',
    },
    {
        'NAME': 'django.contrib.auth.password_validation.CommonPasswordValidator',
    },
    {
        'NAME': 'django.contrib.auth.password_validation.NumericPasswordValidator',
    },
]


# Internationalization
LANGUAGE_CODE = 'ru'

TIME_ZONE = 'UTC'

USE_I18N = True

USE_TZ = True


# Static files (CSS, JavaScript, Images)
STATIC_URL = 'static/'
STATICFILES_DIRS = [
    os.path.join(BASE_DIR, 'static')
]
MEDIA_URL = '/media/'   # базовый URL для доступа к файлам
MEDIA_ROOT = os.path.join(BASE_DIR, 'media')    # путь в файловой системе, по которому хранятся файлы

# Default primary key field type
DEFAULT_AUTO_FIELD = 'django.db.models.BigAutoField'

# Ключ, по которому мы будем хранить данные корзины в сессии
CART_SESSION_ID = 'cart'

# рассылка служебных сообщений на e-mail
EMAIL_HOST = 'smtp.gmail.ru'
EMAIL_PORT = 465
EMAIL_USE_SSL = True
EMAIL_HOST_USER = 'caravelaecom@gmail.com'
EMAIL_HOST_PASSWORD = '15081985_Kit_Mercer'
DEFAULT_FROM_EMAIL = u'Уведомление Портала <caravelaecom@gmail.com>'
# /рассылка служебных сообщений на e-mail

# Настройки Braintree.
BRAINTREE_MERCHANT_ID = 'XXX'   # ID продавца.
BRAINTREE_PUBLIC_KEY = 'XXX'    # Публичный ключ.
BRAINTREE_PRIVATE_KEY = 'XXX'   # Секретный ключ.

from braintree import Configuration, Environment
Configuration.configure(
    Environment.Sandbox,
    BRAINTREE_MERCHANT_ID,
    BRAINTREE_PUBLIC_KEY,
    BRAINTREE_PRIVATE_KEY
)
# /Настройки Braintree.

