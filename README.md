# ROT 13

ROT 13 is a simple letter substitution cipher that replaces a letter with the 13th letter after it in the latin alphabet. ROT13 is a special case of the Caesar cipher which was developed in ancient Rome.

Because there are 26 letters (2×13) in the basic Latin alphabet, ROT13 is its own inverse; that is, to undo ROT13, the same algorithm is applied, so the same action can be used for encoding and decoding. The algorithm provides virtually no cryptographic security, and is often cited as a canonical example of weak encryption.

ROT13 is used in online forums as a means of hiding spoilers, punchlines, puzzle solutions, and offensive materials from the casual glance. ROT13 has inspired a variety of letter and word games online, and is frequently mentioned in newsgroup conversations.

![ROT13](https://raw.githubusercontent.com/LunarStone292/rot13/main/img/ROT13.png "ROT-13")

## COMPILING

To compile encrypt.c:
```bash
gcc encrypt.c -o encrypt
```

To compile decrypt.c:
```bash
gcc decrypt.c -o decrypt
```

## Running

To run encrypt:
``` bash
./encrypt
```

To run decrypt:
```bash
./decrypt
```