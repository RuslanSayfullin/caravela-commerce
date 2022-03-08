from pathlib import Path

BASE_DIR = Path(__file__).resolve().parent.parent

"""
Django settings for DATABASES and DEBUG.
"""

# SECURITY WARNING: don't run with debug turned on in production!


DEBUG = True
THUMBNAIL_DEBUG = True

# Database
# https://docs.djangoproject.com/en/3.2/ref/settings/#databases

DATABASES = {
    'default': {
        'ENGINE': 'django.db.backends.postgresql_psycopg2',
        'NAME': 'caravela',
        'USER': 'portaluser',
        'PASSWORD': '12345',
        'HOST': 'localhost',
        'PORT': '5432',
    }
}

