

bin_PROGRAMS = Pole_objetosc_figur
Pole_objetosc_figur_SOURCES = main.c
Pole_objetosc_figur_DEPENDENCIES = libpola.la libobjetosc.la
Pole_objetosc_figur_LTLIBRARIES = libpola.la libobjetosc.la
libpola_la_SOURCE = pola.c
libobjetosc_la_SOURCE = objetosc.c
Pole_objetosc_figur_LDADD = "-d lopen" libpola.a libobjetosc.a
libpola_la_LDFLAGS = -version - info 1.0.0
libobjetosc_la_LDFLAGS = -version - info 1.0.0
