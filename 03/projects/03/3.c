#include <stdio.h>

int main(void)
{
    printf("Enter ISBN: ");

    int gs1_prefix, group_id, pub_code, item_num, check_dig;
    scanf(
        "%d-%d-%d-%d-%d", 
        &gs1_prefix,
        &group_id,
        &pub_code,
        &item_num,
        &check_dig
    );

    printf("GS1 prefix: %d\n", gs1_prefix);
    printf("Group identifier: %d\n", group_id);
    printf("Publisher code: %d\n", pub_code);
    printf("Item number: %d\n", item_num);
    printf("Check digit: %d\n", check_dig);

    return 0;
}