# Python3 program for Naive Pattern Searching algorithm 

from timeit import default_timer as timer

def search(pat, txt): 
    M = len(pat) 
    N = len(txt) 
  
    # A loop to slide pattern one by one 
	
    for i in range(N - M + 1): 
        j = 0
          
        # For current index i check for pattern match 
        while(j < M): 
            if (txt[i + j] != pat[j]): 
                break
            j += 1
  
        if (j == M):  
            print("Pattern found at index ", i) 
  
# Driver Code 
if __name__ == '__main__': 

    print("Input Text")
    txt = input()
    print("Input Pattern")
    pat = input()
    
    start = timer()
    
    search(pat, txt) 
    
    end = timer()
    print("Time elapsed: ",end - start)