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

\addtolength{\topmargin}{-0.6in}
\addtolength{\textheight}{1.0in}
\addtolength{\hoffset}{-0.3in}
\addtolength{\textwidth}{1.5in}

\setlength{\parskip}{\medskipamount}
\setlength{\parindent}{0pt}

\newenvironment{mysong}[2]{\section*{#1 {\footnotesize (v.~#2)}}}{}
