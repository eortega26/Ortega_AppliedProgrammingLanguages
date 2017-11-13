// This program reads a txt file and counts the amount of words in a file.

import java.io.*;

// This reads the file
public class ReadFile {
	
	public FileReader file = new FileReader("input.txt");
	public BufferedReader br = new BufferedReader(file);
	public String text = "";
	public String line = br.readLine();
	
	ReadFile() throws Exception {
	
	}
	
	public void Read() throws Exception {
		while (line != null) {
			text += line;
			line = br.readLine();
		}
		System.out.println(text);
	}

// This turns the words into tokens.
public static class ManageWords extends ReadFile{
	public String [] word = null;
	
	ManageWords() throws Exception {
	
	}
	
	public void Manage() throws Exception {
		
		while (line != null) {
			word = line.split(" ");
			line = br.readLine();
		}
	}
}

// This counts the amount of unique words in the text file.
public static class CountWords extends ManageWords { 

	CountWords() throws Exception {
		
	}

	public void Count() throws Exception {
		int wordCount = 0;
		int y = 0;
		String [] wordCheck = null;
		
		// This is used to count the amount of words in text file.
		FileReader checkFile = new FileReader("input.txt");
		BufferedReader checkReader = new BufferedReader(checkFile);
		String text = "";
		String checkLine = checkReader.readLine();
		
		while (checkLine != null) {
			wordCheck = checkLine.split(" ");
			checkLine = checkReader.readLine();
		}
		
		
		while (line != null) {
			word = line.split(" ");
			line = br.readLine();
		}
		
		for (int x = 0; x < word.length; x++) {
			for (y = 0; y < word.length; y++) {
				if (word[y] == " ") {
					break;
				}
				// If there is a match value in array changes to empty.
				else if (word[x].matches(wordCheck[y])) {
					wordCount++;
					wordCheck[y] = " ";
				}
			}
			if (wordCount != 0) {
				System.out.println(word[x] + ": " + wordCount);
				wordCount = 0;
			}
		}
	}
}
	

	
	public static void main(String[] args) throws Exception {
		ReadFile rf = new ReadFile();
		ManageWords mw = new ManageWords();
		CountWords cw = new CountWords();
		
		System.out.println("Here is the text file: ");
		System.out.println("---------------------------------------");
		rf.Read();
		
		System.out.println();
		System.out.println("Total words in the file: ");
		System.out.println("---------------------------------------");
		cw.Count();
	}

}
