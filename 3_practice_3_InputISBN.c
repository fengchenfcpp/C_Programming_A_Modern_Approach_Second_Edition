/* Input ISBN number */

#include <stdio.h>

int main(void)
{
  int prefix, group, publisher, item, check_digit;

  printf("Enter ISBN: ");
  scanf("%d-%d-%d-%d-%d", &prefix, &group, &publisher, &item, &check_digit);

  printf("GS1 prefix: %d\n", prefix);
  printf("Group identifier: %d\n", group);
  printf("Publisher code: %d\n", publisher);
  printf("Item number: %d\n", item);
  printf("Check digit: %d\n", check_digit);

  /* The five printf calls can be combined as follows:

     printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n",
            prefix, group, publisher, item, check_digit);
  */

  return 0;
}