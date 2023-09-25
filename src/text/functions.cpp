#include <Arduino.h>

#include "variables.h"

int getSmoothTextSize(String text, int fontSize)
{
     int textSize = 0;
     String temp = "";
     for (size_t i = 0; i < text.length(); i++)
     {
          temp = text.substring(i, i + 1);
          if (giessen_mode == true)
          {
               if (fontSize == 12 && (temp.equals("-") || temp.equals("l")))
               {
                    textSize = textSize + 5;
               }
               if (fontSize == 12 && (temp.equals("j") || temp.equals("i") || temp.equals("t") || temp.equals("I") || temp.equals("J") || temp.equals("'") || temp.equals("|") || temp.equals(".") || temp.equals(":") || temp.equals("f") || temp.equals(",") || temp.equals("!") || temp.equals("(") || temp.equals(")") || temp.equals("[") || temp.equals("]")) ||
                   fontSize == 16 && (temp.equals("-") || temp.equals("l")))
               {
                    textSize = textSize + 6;
               }
               if (fontSize == 12 && (temp.equals("{") || temp.equals("}") || temp.equals("r") || temp.equals("`") || temp.equals("s") || temp.equals(";")) ||
                   fontSize == 16 && (temp.equals("j") || temp.equals("i") || temp.equals("t") || temp.equals("I") || temp.equals("J") || temp.equals("'") || temp.equals("|") || temp.equals(".") || temp.equals(":") || temp.equals("f")))
               {
                    textSize = textSize + 7;
               }
               if (fontSize == 12 && (temp.equals("x") || temp.equals("\"") || temp.equals("y") || temp.equals("1") || temp.equals("v") || temp.equals("L") || temp.equals("c") || temp.equals("z") || temp.equals("k") || temp.equals("T") || temp.equals("a")) ||
                   fontSize == 16 && (temp.equals(",") || temp.equals("!") || temp.equals("(") || temp.equals(")") || temp.equals("[") || temp.equals("]") || temp.equals("{") || temp.equals("}") || temp.equals("r") || temp.equals("`") || temp.equals(";")) ||
                   fontSize == 24 && (temp.equals("-") || temp.equals("l")))
               {
                    textSize = textSize + 8;
               }
               if (fontSize == 12 && (temp.equals("ä") || temp.equals("^") || temp.equals("_") || temp.equals("F") || temp.equals("\\") || temp.equals("e") || temp.equals("h") || temp.equals("n") || temp.equals("u") || temp.equals("ü") || temp.equals("/") || temp.equals("7") || temp.equals("o") || temp.equals("ö") || temp.equals("E") || temp.equals("Z") || temp.equals("~") || temp.equals("3") || temp.equals("P") || temp.equals("8") || temp.equals("S") || temp.equals("ß") || temp.equals("?") || temp.equals("g")) ||
                   fontSize == 16 && (temp.equals("s")) ||
                   fontSize == 24 && (temp.equals("j") || temp.equals("i") || temp.equals("t") || temp.equals("I") || temp.equals("J") || temp.equals("'")) ||
                   fontSize == 32 && (temp.equals("-") || temp.equals("l")))
               {
                    textSize = textSize + 9;
               }
               if (fontSize == 12 && (temp.equals("b") || temp.equals("d") || temp.equals("p") || temp.equals("q") || temp.equals("*") || temp.equals("R") || temp.equals("$") || temp.equals("5") || temp.equals("B") || temp.equals("Y") || temp.equals("2") || temp.equals("X") || temp.equals("6") || temp.equals("9") || temp.equals("K") || temp.equals("=") || temp.equals("0") || temp.equals("4") || temp.equals("#") || temp.equals("+") || temp.equals("<") || temp.equals(">") || temp.equals("U") || temp.equals("Ü")) ||
                   fontSize == 16 && (temp.equals("T") || temp.equals("a") || temp.equals("x") || temp.equals("y") || temp.equals("1") || temp.equals("v") || temp.equals("L") || temp.equals("c") || temp.equals("z") || temp.equals("k") || temp.equals("\"")) ||
                   fontSize == 24 && (temp.equals("|") || temp.equals(".") || temp.equals(":") || temp.equals("f") || temp.equals(",") || temp.equals("!") || temp.equals("(") || temp.equals(")") || temp.equals("[") || temp.equals("]")))
               {
                    textSize = textSize + 10;
               }
               if (fontSize == 12 && (temp.equals("A") || temp.equals("V") || temp.equals("Ä") || temp.equals("C") || temp.equals("D") || temp.equals("&") || temp.equals("w") || temp.equals("H")) ||
                   fontSize == 16 && (temp.equals("ä") || temp.equals("^") || temp.equals("_") || temp.equals("F") || temp.equals("\\") || temp.equals("e") || temp.equals("h") || temp.equals("n") || temp.equals("u") || temp.equals("ü") || temp.equals("/") || temp.equals("7") || temp.equals("o") || temp.equals("ö")) ||
                   fontSize == 24 && (temp.equals(";") || temp.equals("{") || temp.equals("}") || temp.equals("r") || temp.equals("`")) ||
                   fontSize == 32 && (temp.equals("j") || temp.equals("i") || temp.equals("t") || temp.equals("I") || temp.equals("J")))
               {
                    textSize = textSize + 11;
               }
               if (fontSize == 12 && (temp.equals("@") || temp.equals("N") || temp.equals("G") || temp.equals("m") || temp.equals("O") || temp.equals("Ö") || temp.equals("%") || temp.equals("Q")) ||
                   fontSize == 16 && (temp.equals("E") || temp.equals("Z") || temp.equals("~") || temp.equals("3") || temp.equals("P") || temp.equals("8") || temp.equals("S") || temp.equals("ß") || temp.equals("?") || temp.equals("g") || temp.equals("b") || temp.equals("d") || temp.equals("p") || temp.equals("q") || temp.equals("*") || temp.equals("R") || temp.equals("$") || temp.equals("5") || temp.equals("B") || temp.equals("Y") || temp.equals("2") || temp.equals("X") || temp.equals("6") || temp.equals("9") || temp.equals("K") || temp.equals("=") || temp.equals("0")) ||
                   fontSize == 24 && (temp.equals("s")) ||
                   fontSize == 32 && (temp.equals("'") || temp.equals("|") || temp.equals(".") || temp.equals(":") || temp.equals("f") || temp.equals(",")))
               {
                    textSize = textSize + 12;
               }
               if (fontSize == 12 && (temp.equals("M")) ||
                   fontSize == 16 && (temp.equals("4") || temp.equals("#") || temp.equals("+") || temp.equals("<") || temp.equals(">") || temp.equals("U") || temp.equals("Ü") || temp.equals("Ü") || temp.equals("A") || temp.equals("V") || temp.equals("Ä") || temp.equals("C")) ||
                   fontSize == 24 && (temp.equals("\"") || temp.equals("x") || temp.equals("y") || temp.equals("1") || temp.equals("v") || temp.equals("L") || temp.equals("c") || temp.equals("z") || temp.equals("k")) ||
                   fontSize == 32 && (temp.equals("!") || temp.equals("(") || temp.equals(")") || temp.equals("[") || temp.equals("]") || temp.equals("{") || temp.equals("}")))
               {
                    textSize = textSize + 13;
               }
               if (fontSize == 16 && (temp.equals("D") || temp.equals("&") || temp.equals("w") || temp.equals("H")) ||
                   fontSize == 24 && (temp.equals("T") || temp.equals("a") || temp.equals("a") || temp.equals("ä") || temp.equals("^") || temp.equals("_")) ||
                   fontSize == 32 && (temp.equals("r") || temp.equals("`")))
               {
                    textSize = textSize + 14;
               }
               if (fontSize == 12 && (temp.equals("W")) ||
                   fontSize == 16 && (temp.equals("@") || temp.equals("N") || temp.equals("G") || temp.equals("m") || temp.equals("O") || temp.equals("Ö")) ||
                   fontSize == 24 && (temp.equals("F") || temp.equals("\\") || temp.equals("e") || temp.equals("h") || temp.equals("n") || temp.equals("u") || temp.equals("ü")))
               {
                    textSize = textSize + 15;
               }
               if (fontSize == 16 && (temp.equals("%") || temp.equals("Q") || temp.equals("M")) ||
                   fontSize == 24 && (temp.equals("/") || temp.equals("7") || temp.equals("o") || temp.equals("ö") || temp.equals("E") || temp.equals("Z") || temp.equals("~") || temp.equals("3") || temp.equals("P") || temp.equals("8") || temp.equals("S") || temp.equals("ß") || temp.equals("?") || temp.equals("g")) ||
                   fontSize == 32 && (temp.equals("s")))
               {
                    textSize = textSize + 16;
               }
               if (fontSize == 24 && (temp.equals("b") || temp.equals("d") || temp.equals("p") || temp.equals("q") || temp.equals("*") || temp.equals("R") || temp.equals("$") || temp.equals("5") || temp.equals("B") || temp.equals("Y") || temp.equals("2") || temp.equals("X") || temp.equals("6") || temp.equals("9") || temp.equals("K") || temp.equals("=") || temp.equals("0")) ||
                   fontSize == 32 && (temp.equals("x")))
               {
                    textSize = textSize + 17;
               }
               if (fontSize == 24 && (temp.equals("4") || temp.equals("#") || temp.equals("+") || temp.equals("<") || temp.equals(">") || temp.equals("U") || temp.equals("Ü")) ||
                   fontSize == 32 && (temp.equals("y") || temp.equals("1") || temp.equals("v") || temp.equals("L") || temp.equals("c") || temp.equals("z") || temp.equals("k")))
               {
                    textSize = textSize + 18;
               }
               if (fontSize == 16 && (temp.equals("W")) ||
                   fontSize == 24 && (temp.equals("A") || temp.equals("V") || temp.equals("Ä") || temp.equals("C") || temp.equals("D") || temp.equals("&")) ||
                   fontSize == 32 && (temp.equals("T") || temp.equals("a") || temp.equals("ä") || temp.equals("^") || temp.equals("_") || temp.equals("F") || temp.equals("\\")))
               {
                    textSize = textSize + 19;
               }
               if (fontSize == 24 && (temp.equals("w") || temp.equals("H")) ||
                   fontSize == 32 && (temp.equals("e") || temp.equals("h") || temp.equals("n") || temp.equals("u") || temp.equals("ü") || temp.equals("ü") || temp.equals("/") || temp.equals("7") || temp.equals("o") || temp.equals("ö")))
               {
                    textSize = textSize + 20;
               }
               if (fontSize == 24 && (temp.equals("@") || temp.equals("N") || temp.equals("G")) ||
                   fontSize == 32 && (temp.equals("E") || temp.equals("Z") || temp.equals("~") || temp.equals("3") || temp.equals("P") || temp.equals("8") || temp.equals("S") || temp.equals("ß") || temp.equals("?") || temp.equals("g") || temp.equals("b") || temp.equals("d") || temp.equals("p") || temp.equals("q") || temp.equals("*") || temp.equals("R")))
               {
                    textSize = textSize + 21;
               }
               if (fontSize == 24 && (temp.equals("m") || temp.equals("O") || temp.equals("Ö") || temp.equals("%") || temp.equals("Q")) ||
                   fontSize == 32 && (temp.equals("$") || temp.equals("5") || temp.equals("B") || temp.equals("Y") || temp.equals("2") || temp.equals("X") || temp.equals("6") || temp.equals("9") || temp.equals("K") || temp.equals("=") || temp.equals("0")))
               {
                    textSize = textSize + 22;
               }
               if (fontSize == 24 && (temp.equals("M")) ||
                   fontSize == 32 && (temp.equals("4") || temp.equals("#") || temp.equals("+") || temp.equals("<") || temp.equals(">") || temp.equals("U") || temp.equals("Ü")))
               {
                    textSize = textSize + 23;
               }
               if (fontSize == 32 && (temp.equals("A") || temp.equals("V") || temp.equals("Ä") || temp.equals("C")))
               {
                    textSize = textSize + 24;
               }
               if (fontSize == 32 && (temp.equals("D") || temp.equals("&") || temp.equals("w") || temp.equals("H")))
               {
                    textSize = textSize + 25;
               }
               if (fontSize == 24 && (temp.equals("W")) ||
                   fontSize == 32 && (temp.equals("@") || temp.equals("N")))
               {
                    textSize = textSize + 27;
               }
               if (fontSize == 32 && (temp.equals("G") || temp.equals("m") || temp.equals("O") || temp.equals("Ö")))
               {
                    textSize = textSize + 28;
               }
               if (fontSize == 32 && (temp.equals("%") || temp.equals("Q") || temp.equals("Q") || temp.equals("M")))
               {
                    textSize = textSize + 29;
               }
               if (fontSize == 32 && (temp.equals("W")))
               {
                    textSize = textSize + 35;
               }
          }
          else
          {
               if (fontSize == 12 && (temp.equals("-") || temp.equals("l")))
               {
                    textSize = textSize + 5;
               }
               if (fontSize == 12 && (temp.equals("j") || temp.equals("i") || temp.equals("t") || temp.equals("I") || temp.equals("J") || temp.equals("'") || temp.equals("|") || temp.equals(".") || temp.equals(":") || temp.equals("f") || temp.equals(",") || temp.equals("!") || temp.equals("(") || temp.equals(")") || temp.equals("[") || temp.equals("]")) ||
                   fontSize == 16 && (temp.equals("-") || temp.equals("l")))
               {
                    textSize = textSize + 6;
               }
               if (fontSize == 12 && (temp.equals("{") || temp.equals("}") || temp.equals("r") || temp.equals("`") || temp.equals("s") || temp.equals(";")) ||
                   fontSize == 16 && (temp.equals("j") || temp.equals("i") || temp.equals("t") || temp.equals("I") || temp.equals("J") || temp.equals("'") || temp.equals("|") || temp.equals(".") || temp.equals(":") || temp.equals("f")))
               {
                    textSize = textSize + 7;
               }
               if (fontSize == 12 && (temp.equals("x") || temp.equals("\"") || temp.equals("y") || temp.equals("1") || temp.equals("v") || temp.equals("L") || temp.equals("c") || temp.equals("z") || temp.equals("k") || temp.equals("T") || temp.equals("a")) ||
                   fontSize == 16 && (temp.equals(",") || temp.equals("!") || temp.equals("(") || temp.equals(")") || temp.equals("[") || temp.equals("]") || temp.equals("{") || temp.equals("}") || temp.equals("r") || temp.equals("`") || temp.equals(";")) ||
                   fontSize == 24 && (temp.equals("-") || temp.equals("l")))
               {
                    textSize = textSize + 8;
               }
               if (fontSize == 12 && (temp.equals("ä") || temp.equals("^") || temp.equals("_") || temp.equals("F") || temp.equals("\\") || temp.equals("e") || temp.equals("h") || temp.equals("n") || temp.equals("u") || temp.equals("ü") || temp.equals("/") || temp.equals("7") || temp.equals("o") || temp.equals("ö") || temp.equals("E") || temp.equals("Z") || temp.equals("~") || temp.equals("3") || temp.equals("P") || temp.equals("8") || temp.equals("S") || temp.equals("ß") || temp.equals("?") || temp.equals("g")) ||
                   fontSize == 16 && (temp.equals("s")) ||
                   fontSize == 24 && (temp.equals("j") || temp.equals("i") || temp.equals("t") || temp.equals("I") || temp.equals("J") || temp.equals("'")) ||
                   fontSize == 32 && (temp.equals("-") || temp.equals("l")))
               {
                    textSize = textSize + 9;
               }
               if (fontSize == 12 && (temp.equals("b") || temp.equals("d") || temp.equals("p") || temp.equals("q") || temp.equals("*") || temp.equals("R") || temp.equals("$") || temp.equals("5") || temp.equals("B") || temp.equals("Y") || temp.equals("2") || temp.equals("X") || temp.equals("6") || temp.equals("9") || temp.equals("K") || temp.equals("=") || temp.equals("0") || temp.equals("4") || temp.equals("#") || temp.equals("+") || temp.equals("<") || temp.equals(">") || temp.equals("U") || temp.equals("Ü")) ||
                   fontSize == 16 && (temp.equals("T") || temp.equals("a") || temp.equals("x") || temp.equals("y") || temp.equals("1") || temp.equals("v") || temp.equals("L") || temp.equals("c") || temp.equals("z") || temp.equals("k") || temp.equals("\"")) ||
                   fontSize == 24 && (temp.equals("|") || temp.equals(".") || temp.equals(":") || temp.equals("f") || temp.equals(",") || temp.equals("!") || temp.equals("(") || temp.equals(")") || temp.equals("[") || temp.equals("]")))
               {
                    textSize = textSize + 10;
               }
               if (fontSize == 12 && (temp.equals("A") || temp.equals("V") || temp.equals("Ä") || temp.equals("C") || temp.equals("D") || temp.equals("&") || temp.equals("w") || temp.equals("H")) ||
                   fontSize == 16 && (temp.equals("ä") || temp.equals("^") || temp.equals("_") || temp.equals("F") || temp.equals("\\") || temp.equals("e") || temp.equals("h") || temp.equals("n") || temp.equals("u") || temp.equals("ü") || temp.equals("/") || temp.equals("7") || temp.equals("o") || temp.equals("ö")) ||
                   fontSize == 24 && (temp.equals(";") || temp.equals("{") || temp.equals("}") || temp.equals("r") || temp.equals("`")) ||
                   fontSize == 32 && (temp.equals("j") || temp.equals("i") || temp.equals("t") || temp.equals("I") || temp.equals("J")))
               {
                    textSize = textSize + 11;
               }
               if (fontSize == 12 && (temp.equals("@") || temp.equals("N") || temp.equals("G") || temp.equals("m") || temp.equals("O") || temp.equals("Ö") || temp.equals("%") || temp.equals("Q")) ||
                   fontSize == 16 && (temp.equals("E") || temp.equals("Z") || temp.equals("~") || temp.equals("3") || temp.equals("P") || temp.equals("8") || temp.equals("S") || temp.equals("ß") || temp.equals("?") || temp.equals("g") || temp.equals("b") || temp.equals("d") || temp.equals("p") || temp.equals("q") || temp.equals("*") || temp.equals("R") || temp.equals("$") || temp.equals("5") || temp.equals("B") || temp.equals("Y") || temp.equals("2") || temp.equals("X") || temp.equals("6") || temp.equals("9") || temp.equals("K") || temp.equals("=") || temp.equals("0")) ||
                   fontSize == 24 && (temp.equals("s")) ||
                   fontSize == 32 && (temp.equals("'") || temp.equals("|") || temp.equals(".") || temp.equals(":") || temp.equals("f") || temp.equals(",")))
               {
                    textSize = textSize + 12;
               }
               if (fontSize == 12 && (temp.equals("M")) ||
                   fontSize == 16 && (temp.equals("4") || temp.equals("#") || temp.equals("+") || temp.equals("<") || temp.equals(">") || temp.equals("U") || temp.equals("Ü") || temp.equals("Ü") || temp.equals("A") || temp.equals("V") || temp.equals("Ä") || temp.equals("C")) ||
                   fontSize == 24 && (temp.equals("\"") || temp.equals("x") || temp.equals("y") || temp.equals("1") || temp.equals("v") || temp.equals("L") || temp.equals("c") || temp.equals("z") || temp.equals("k")) ||
                   fontSize == 32 && (temp.equals("!") || temp.equals("(") || temp.equals(")") || temp.equals("[") || temp.equals("]") || temp.equals("{") || temp.equals("}")))
               {
                    textSize = textSize + 13;
               }
               if (fontSize == 16 && (temp.equals("D") || temp.equals("&") || temp.equals("w") || temp.equals("H")) ||
                   fontSize == 24 && (temp.equals("T") || temp.equals("a") || temp.equals("a") || temp.equals("ä") || temp.equals("^") || temp.equals("_")) ||
                   fontSize == 32 && (temp.equals("r") || temp.equals("`")))
               {
                    textSize = textSize + 14;
               }
               if (fontSize == 12 && (temp.equals("W")) ||
                   fontSize == 16 && (temp.equals("@") || temp.equals("N") || temp.equals("G") || temp.equals("m") || temp.equals("O") || temp.equals("Ö")) ||
                   fontSize == 24 && (temp.equals("F") || temp.equals("\\") || temp.equals("e") || temp.equals("h") || temp.equals("n") || temp.equals("u") || temp.equals("ü")))
               {
                    textSize = textSize + 15;
               }
               if (fontSize == 16 && (temp.equals("%") || temp.equals("Q") || temp.equals("M")) ||
                   fontSize == 24 && (temp.equals("/") || temp.equals("7") || temp.equals("o") || temp.equals("ö") || temp.equals("E") || temp.equals("Z") || temp.equals("~") || temp.equals("3") || temp.equals("P") || temp.equals("8") || temp.equals("S") || temp.equals("ß") || temp.equals("?") || temp.equals("g")) ||
                   fontSize == 32 && (temp.equals("s")))
               {
                    textSize = textSize + 16;
               }
               if (fontSize == 24 && (temp.equals("b") || temp.equals("d") || temp.equals("p") || temp.equals("q") || temp.equals("*") || temp.equals("R") || temp.equals("$") || temp.equals("5") || temp.equals("B") || temp.equals("Y") || temp.equals("2") || temp.equals("X") || temp.equals("6") || temp.equals("9") || temp.equals("K") || temp.equals("=") || temp.equals("0")) ||
                   fontSize == 32 && (temp.equals("x")))
               {
                    textSize = textSize + 17;
               }
               if (fontSize == 24 && (temp.equals("4") || temp.equals("#") || temp.equals("+") || temp.equals("<") || temp.equals(">") || temp.equals("U") || temp.equals("Ü")) ||
                   fontSize == 32 && (temp.equals("y") || temp.equals("1") || temp.equals("v") || temp.equals("L") || temp.equals("c") || temp.equals("z") || temp.equals("k")))
               {
                    textSize = textSize + 18;
               }
               if (fontSize == 16 && (temp.equals("W")) ||
                   fontSize == 24 && (temp.equals("A") || temp.equals("V") || temp.equals("Ä") || temp.equals("C") || temp.equals("D") || temp.equals("&")) ||
                   fontSize == 32 && (temp.equals("T") || temp.equals("a") || temp.equals("ä") || temp.equals("^") || temp.equals("_") || temp.equals("F") || temp.equals("\\")))
               {
                    textSize = textSize + 19;
               }
               if (fontSize == 24 && (temp.equals("w") || temp.equals("H")) ||
                   fontSize == 32 && (temp.equals("e") || temp.equals("h") || temp.equals("n") || temp.equals("u") || temp.equals("ü") || temp.equals("ü") || temp.equals("/") || temp.equals("7") || temp.equals("o") || temp.equals("ö")))
               {
                    textSize = textSize + 20;
               }
               if (fontSize == 24 && (temp.equals("@") || temp.equals("N") || temp.equals("G")) ||
                   fontSize == 32 && (temp.equals("E") || temp.equals("Z") || temp.equals("~") || temp.equals("3") || temp.equals("P") || temp.equals("8") || temp.equals("S") || temp.equals("ß") || temp.equals("?") || temp.equals("g") || temp.equals("b") || temp.equals("d") || temp.equals("p") || temp.equals("q") || temp.equals("*") || temp.equals("R")))
               {
                    textSize = textSize + 21;
               }
               if (fontSize == 24 && (temp.equals("m") || temp.equals("O") || temp.equals("Ö") || temp.equals("%") || temp.equals("Q")) ||
                   fontSize == 32 && (temp.equals("$") || temp.equals("5") || temp.equals("B") || temp.equals("Y") || temp.equals("2") || temp.equals("X") || temp.equals("6") || temp.equals("9") || temp.equals("K") || temp.equals("=") || temp.equals("0")))
               {
                    textSize = textSize + 22;
               }
               if (fontSize == 24 && (temp.equals("M")) ||
                   fontSize == 32 && (temp.equals("4") || temp.equals("#") || temp.equals("+") || temp.equals("<") || temp.equals(">") || temp.equals("U") || temp.equals("Ü")))
               {
                    textSize = textSize + 23;
               }
               if (fontSize == 32 && (temp.equals("A") || temp.equals("V") || temp.equals("Ä") || temp.equals("C")))
               {
                    textSize = textSize + 24;
               }
               if (fontSize == 32 && (temp.equals("D") || temp.equals("&") || temp.equals("w") || temp.equals("H")))
               {
                    textSize = textSize + 25;
               }
               if (fontSize == 24 && (temp.equals("W")) ||
                   fontSize == 32 && (temp.equals("@") || temp.equals("N")))
               {
                    textSize = textSize + 27;
               }
               if (fontSize == 32 && (temp.equals("G") || temp.equals("m") || temp.equals("O") || temp.equals("Ö")))
               {
                    textSize = textSize + 28;
               }
               if (fontSize == 32 && (temp.equals("%") || temp.equals("Q") || temp.equals("Q") || temp.equals("M")))
               {
                    textSize = textSize + 29;
               }
               if (fontSize == 32 && (temp.equals("W")))
               {
                    textSize = textSize + 35;
               }
          }
     }
     return textSize;
}

int getIndexOfBeforeLastString(String text, char search, int mark)
{
     if (text.length() > mark)
     {
          return text.substring(0, mark).lastIndexOf(search);
     }
     return mark;
}

String getLeftPaddingString(String text, char fillChar, int length)
{
     int lengthText = text.length();
     if (lengthText >= length)
     {
          return text;
     }
     String append = "";
     for (size_t i = 0; i < length - lengthText; i++)
     {
          append += fillChar;
     }
     append += text;
     return append;
}

String getRightPaddingString(String text, char fillChar, int length)
{
     int lengthText = text.length();
     if (lengthText >= length)
     {
          return text;
     }
     String append = "";
     for (size_t i = 0; i < length - lengthText; i++)
     {
          append += fillChar;
     }
     text += append;
     return text;
}