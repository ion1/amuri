sources := \
	hoyhen.tex \
	hyvasti_perhonen.tex \
	ikava_hirvea.tex \
	junat_ovat_taasen_myohassa.tex \
	kaamoslaulu.tex \
	kompassit.tex \
	laskuvarjo.tex \
	maailman_murha.tex \
	onkiniemen_mormoonitytot.tex \
	pahoinvointia_rakentamassa.tex \
	ruusupuu.tex \
	valveunia.tex
targets := $(sources:.tex=.pdf)

all : $(targets)

%.pdf : %.tex
	latexmk -pdf '$<'

