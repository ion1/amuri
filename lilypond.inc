\usepackage{graphicx}
\usepackage{fancyvrb}
\begin{VerbatimOut}{\jobname.ly.head}
  #(define version-seen #t)
  \paper {
    indent = 0\pt
    line-width = 520\pt
    oddFooterMarkup = ##f
    oddHeaderMarkup = ##f
    bookTitleMarkup = ##f
    scoreTitleMarkup = ##f
  }
  \layout { }
\end{VerbatimOut}
\newcommand{\lilypondfilename}[1]{}
\newenvironment{lilypond}[1]{
  \VerbatimEnvironment%
  \renewcommand{\lilypondfilename}[1]{\jobname-#1}
  \begin{VerbatimOut}{\lilypondfilename{}.ly.in}%
}{
  \end{VerbatimOut}
  \immediate\write18{
    >\lilypondfilename{}.ly cat \jobname.ly.head \lilypondfilename{}.ly.in;
    lilypond -dbackend=eps -dno-gs-load-fonts -dinclude-eps-fonts
      --formats=eps,pdf -o \lilypondfilename{} \lilypondfilename{}.ly;
    touch -c -r \jobname.tex \lilypondfilename{}.eps \lilypondfilename{}.pdf
  }
  \includegraphics{\lilypondfilename{}}
}
