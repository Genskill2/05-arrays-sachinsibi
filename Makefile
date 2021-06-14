.PHONY: run_test_average run_test_factors run_test_max run_test_max run_test_min run_test_mode
%: %.c
	$(CC) $(CFLAGS) $(CPPFLAGS) solns.c $< -o $@ -lm $(LDLIBS)


run_test_all: run_test_average run_test_factors run_test_max run_test_max run_test_min run_test_mode
	md5sum -c ./.checksums.txt

run_test_average: test_average
	./test_average
run_test_factors: test_factors
	./test_factors
run_test_max: test_max
	./test_max
run_test_min: test_min
	./test_min
run_test_mode: test_mode
	./test_mode


