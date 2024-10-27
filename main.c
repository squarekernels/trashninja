#include <stdio.h>
#include "exercise.h"
#include "ninja.c"

int max_ninjalang_memory(int max, int memory) {
	return max * memory;
}


float ninja_score(
		int num_files,
		int num_contributors,
		int num_commits,
		float avg_bug_criticality
		){
	int size_factor = num_files * num_commits;
	float complexity_factor = num_contributors * size_factor;
	return avg_bug_criticality * complexity_factor;
}

void init_ninjalang(int max_threads, int memory_per_threads) {
	printf("Initializing Ninjalang \n");
	printf("Max threads: %d\n", max_threads);
	printf("Memory per thread: %d\n", memory_per_threads);
	int max_memory = max_ninjalang_memory(max_threads, memory_per_threads);
	printf("Max memory: %d\n", max_memory);	
	printf("=========================================\n");
}

int main() {
	init_ninjalang(4, 512);
	init_ninjalang(8, 1024);
	init_ninjalang(16, 2048);

	unsigned long addr_size = size_of_addr(16);
	printf("%lu", addr_size);	

	return 0;
}
