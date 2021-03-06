#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sys/types.h>
#include <sys/time.h>
#include "sha256/sha256.h"

#define SHA256_DIGEST_LENGTH 32

unsigned char* convert_str(struct block_data *blk);
void create_block(int inputnums);
void add_block(int whichIndex);
void file_write ();
void pr_block ();
void pr_all_Blocks();
int LengthList();
void empty_block_failed();

struct block_data {
	int index;//链条索引
	int id;//区块id
	int blkdata;//随机数据
	char timestamp;//时间戳
	char prehash[SHA256_DIGEST_LENGTH];//前一个哈希
	struct block_data *next_block;//链表结构
}*block_head;
