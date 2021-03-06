\usepackage[finnish]{babel}
\usepackage[utf8]{inputenc}
\usepackage{charter}  % font

\usepackage{fixltx2e}  % \textsubscript

\usepackage[chordbk]{songbook}

\renewcommand{\SBBaseLang}         {suomi}
\renewcommand{\SBBridgeTag}        {Br:}
\renewcommand{\SBChorusTag}        {Kert:}
\renewcommand{\SBContinueTag}      {jatkuu\ldots}
\renewcommand{\SBEndTag}           {Out:}
\renewcommand{\SBIntroTag}         {In:}

\addtolength{\topmargin}{-0.4in}
\addtolength{\textheight}{0.6in}
\addtolength{\hoffset}{-0.1in}
\addtolength{\textwidth}{1.2in}

\setlength{\parskip}{\medskipamount}
\setlength{\parindent}{0pt}

\newenvironment{mysong}[2]{\section*{#1 {\footnotesize (v.~#2)}}}{}
