#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  // TODO: Create space to store the string "hello"
  // You may use your solution from a previous exercise;
  char message[128];
  message[0] = 'h';
  message[1] = 'e';
  message[2] = 'l';
  message[3] = 'l';
  message[4] = 'o';
  message[5] = '\0';

  // Print out the value before we change message
  printf("Before copying: %s\n", message);

  // Creates another_string that contains a longer string
  char *long_message = "Here's a really long string";

  // TODO: Copy the string in long_message to message
  strncpy(message, long_message, sizeof(message));
  // strncpy
  // 函数在复制字符串时，如果源字符串的长度小于指定的复制长度，它会在目标字符串的末尾自动补上
  // \0 但是，如果源字符串的长度等于或大于指定的复制长度，strncpy
  // 不会自动在目标字符串的末尾添加 \0

  // Print out the value after we change message
  printf("After copying: %s\n", message);

  return 0;
}
