sources := \
	hoyhen.tex \
	ikava_hirvea.tex \
	junat.tex \
	kaamoslaulu.tex \
	laskuvarjo.tex \
	maailman_murha.tex \
	onkiniemen_mormoonitytot.tex \
	pahoinvointia_rakentamassa.tex \
	perhonen.tex \
	ruusupuu.tex \
	valveunia.tex
targets := $(sources:.tex=.pdf)

all : $(targets)

%.pdf : %.tex
	latexmk -pdf '$<'

