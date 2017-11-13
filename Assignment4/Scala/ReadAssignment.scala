// This program reads a text file and counts the amount of unique words in the file.

import scala.io.Source
import scala.util.control.Exception

class ManageWords() {
  def Manage(): Unit = {

    // This gets the text file
    val filename = "input.txt"

    // This parses text file
    val words = Source.fromFile(filename).getLines.mkString.split(" ")

    // This prints out the text file
    for (line <- Source.fromFile(filename).getLines) {
      println(line)
    }
    println()
  }
}

class CountWords() {
  def Count(): Unit = {
    var x = 0
    var y = 0
    var wordCount = 0

    val filename = "input.txt"
    val words = Source.fromFile(filename).getLines.mkString.split(" ")
    val checkWords = Source.fromFile(filename).getLines.mkString.split(" ")

    for (x <-  0 to (words.length - 1)) {

      for (y <- 0 to (checkWords.length - 1)) {
        // Compares the words in the file, if there is a match the count will increment
        if ( words(x) == checkWords(y)) {
          wordCount = wordCount + 1
          checkWords(y) = " "
        }
      }
      // This will only print when there are is a match
      if (wordCount != 0) {
        println(words(x) + ": " + wordCount)
        wordCount = 0
      }
    }
  }
}

object ReadExample {

  def main(args : Array[String]) = {
    val mw = new ManageWords()
    val cw = new CountWords()

    println("Here is the text file: ")
    println("------------------------------------")
    mw.Manage()
    println("Total words in the text file: ")
    println("--------------------------------")
    cw.Count()
  }



}
