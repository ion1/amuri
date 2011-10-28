sources := \
	aika_meni_jo.tex \
	ala_koskaan.tex \
	ala_nayta_pelkoasi.tex \
	hoyhen.tex \
	hyvasti_perhonen.tex \
	ikava_hirvea.tex \
	junat_ovat_taasen_myohassa.tex \
	kaamoslaulu.tex \
	kompassit.tex \
	laskuvarjo.tex \
	lime.tex \
	maailman_murha.tex \
	onkiniemen_mormoonitytot.tex \
	pahoinvointia_rakentamassa.tex \
	ruusupuu.tex \
	valveunia.tex
targets := $(sources:.tex=.pdf)

all : $(targets)

%.pdf : %.tex
	latexmk -pdf '$<'

