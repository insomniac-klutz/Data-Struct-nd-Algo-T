<b>Problem Statement:</b>

Given a text txt[0..n-1] and a pattern pat[0..m-1], write a function search(char pat[], char txt[]) 
that prints all occurrences of pat[] in txt[]. You may assume that n > m. 

<b>Solution:</b>

Slide the pattern over text one by one and check for a match. If a match is found, then slides by 1 again to check for subsequent matches.
