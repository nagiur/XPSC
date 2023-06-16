def reverse_words(string):
  words = string.split()
  for word in words:
    word = word[::-1]
    print(word, end=" ")

if __name__ == "__main__":
  string = input()
  reverse_words(string)
