include $(top_srcdir)/config/Makefile.for.ROSE.includes.and.libs

TEST_TRANSLATOR=$(top_builddir)/tests/nonsmoke/functional/testTranslator

# DQ (11/5/2016): Adding support for address sanitizer (borrowing the VALGRIND variable to support 
# this, this implementation needs review).  It might be better to prepend the information to the 
# CC and CXX variables. I think that the purify support uses this approach.
if ROSE_USE_SANITIZER
VALGRIND = $(NON_RTH_ADDRESS_SANITIZER_OPTIONS)
else
VALGRIND =
endif

$(TEST_TRANSLATOR):
	$(MAKE) -C $(top_builddir)/tests/nonsmoke/functional testTranslator

conditional-check-local: $(TEST_TRANSLATOR)
	@echo "Running the conditional-check-local rule."
if USING_GNU_COMPILER
	@echo "USING_GCC_COMPILER == true"
if ROSE_USING_GCC_VERSION_LATER_4_8
	@echo "USING_GCC_VERSION_LATER_4_8"
# ASAN options are passed as arguments to allow to log them into a logfile
#	$(VALGRIND) ASAN_OPTIONS="$(VALGRIND)" TOOL2=$(TEST_TRANSLATOR) TOOL1=$(CXX) $(top_srcdir)/tests/nonsmoke/functional/CompileTests/STL_tests/stl-eval.sh
if ROSE_USING_GCC_VERSION_LATER_4_9
	@echo "USING_GCC_VERSION_LATER_4_9"
if ROSE_USING_GCC_VERSION_LATER_5_1
	@echo "USING_GCC_VERSION_LATER_5_1"
if ROSE_USE_EDG_VERSION_4_9
# DQ (2/10/2017): Run tests using GNU 4.9 using only EDG 4.9 but disable C++11 specific testing.
	@echo "USE_EDG_VERSION_4_9"
	@echo "Skip all tests on GNU 5.1 an later compilers with EDG 4.9"
else # NOT ROSE_USE_EDG_VERSION_4_9
# DQ (2/10/2017): Run tests using GNU 5.1 and later using only EDG 4.12
	@echo "NOT USE_EDG_VERSION_4_9"
	@echo "Run tests using GNU 5.1 or later compilers and EDG 4.12 (skipping run all C++11 tests)"
# DQ (2/22/2017): Break this up to first test the non C++11 support using the latest compilers and EDG 4.12.
#	$(VALGRIND) ASAN_OPTIONS="$(VALGRIND)" TOOL2=$(TEST_TRANSLATOR) TOOL1=$(CXX) CPP11_STL_TESTS=yes $(top_srcdir)/tests/nonsmoke/functional/CompileTests/STL_tests/stl-eval.sh
	$(VALGRIND) ASAN_OPTIONS="$(VALGRIND)" TOOL2=$(TEST_TRANSLATOR) TOOL1=$(CXX) CPP11_STL_TESTS=no $(top_srcdir)/tests/nonsmoke/functional/CompileTests/STL_tests/stl-eval.sh
endif # ROSE_USE_EDG_VERSION_4_9
else  # NOT ROSE_USING_GCC_VERSION_LATER_5_1
	@echo "NOT USING_GCC_VERSION_LATER_5_1"
if ROSE_USE_EDG_VERSION_4_9
# DQ (2/10/2017): Run tests using GNU 4.9 using only EDG 4.9 but disable C++11 specific testing.
	@echo "USE_EDG_VERSION_4_9"
	@echo "Run tests using GNU 4.9 and EDG 4.9 (but skip C++11 tests)"
	$(VALGRIND) ASAN_OPTIONS="$(VALGRIND)" TOOL2=$(TEST_TRANSLATOR) TOOL1=$(CXX) CPP11_STL_TESTS=no $(top_srcdir)/tests/nonsmoke/functional/CompileTests/STL_tests/stl-eval.sh
else # NOT ROSE_USE_EDG_VERSION_4_9
# DQ (2/10/2017): Run tests using GNU 5.1 and later using only EDG 4.12
	@echo "NOT USE_EDG_VERSION_4_9"
	@echo "Run tests using GNU 4.9 or later compilers and EDG 4.12 (skipping run all C++11 tests)"
# DQ (3/4/2017): We can turn on the C++11 testings now.
# DQ (2/22/2017): Break this up to first test the non C++11 support using the latest compilers and EDG 4.12.
#	$(VALGRIND) ASAN_OPTIONS="$(VALGRIND)" TOOL2=$(TEST_TRANSLATOR) TOOL1=$(CXX) CPP11_STL_TESTS=yes $(top_srcdir)/tests/nonsmoke/functional/CompileTests/STL_tests/stl-eval.sh
#	$(VALGRIND) ASAN_OPTIONS="$(VALGRIND)" TOOL2=$(TEST_TRANSLATOR) TOOL1=$(CXX) CPP11_STL_TESTS=no $(top_srcdir)/tests/nonsmoke/functional/CompileTests/STL_tests/stl-eval.sh
	$(VALGRIND) ASAN_OPTIONS="$(VALGRIND)" TOOL2=$(TEST_TRANSLATOR) TOOL1=$(CXX) CPP11_STL_TESTS=yes $(top_srcdir)/tests/nonsmoke/functional/CompileTests/STL_tests/stl-eval.sh
endif # ROSE_USE_EDG_VERSION_4_9
endif # ROSE_USING_GCC_VERSION_LATER_5_1
else  # NOT ROSE_USING_GCC_VERSION_LATER_4_9
# DQ (2/10/2017): Run tests using GNU 4.8 and either EDG 4.9 or EDG 4.12
	@echo "NOT USING_GCC_VERSION_LATER_4_9"
	@echo "Run tests using GNU 4.8 and either EDG 4.9 or EDG 4.12"
	$(VALGRIND) ASAN_OPTIONS="$(VALGRIND)" TOOL2=$(TEST_TRANSLATOR) TOOL1=$(CXX) CPP11_STL_TESTS=yes $(top_srcdir)/tests/nonsmoke/functional/CompileTests/STL_tests/stl-eval.sh
endif # ROSE_USING_GCC_VERSION_LATER_4_9
else  # NOT ROSE_USING_GCC_VERSION_LATER_4_8
	@echo "ROSE/tests/nonsmoke/functional/CompileTests/STL_tests: make check rule skipped (tests requires using g++ 4.8 compiler or later)."
	@echo "Skip tests for earlier versions of GNU (GNU 4.7 and older)."
endif # ROSE_USING_GCC_VERSION_LATER_4_8
else  # NOT USING_GNU_COMPILER
	@echo "NOT USING_GCC_COMPILER (which can include CLANG and INTEL compilers)"
if ROSE_USE_EDG_VERSION_4_9
# DQ (2/10/2017): Run tests using GNU 4.9 using only EDG 4.9 but disable C++11 specific testing.
	@echo "USE_EDG_VERSION_4_9 (skip testing for later version GNU and CLANG and INTEL compilers)."
else # NOT ROSE_USE_EDG_VERSION_4_9
# DQ (2/10/2017): Run tests using GNU 5.1 and later using only EDG 4.12
	@echo "NOT USE_EDG_VERSION_4_9"
if USING_GNU_COMPILER
	@echo "USING_GCC_COMPILER == true"
	@echo "Run tests using GNU 4.12 and EDG 5.1 and later compilers and CLANG and INTEL compilers (run all C++11 tests)"
# DQ (2/22/2017): Break this up to first test the non C++11 support using the latest compilers and EDG 4.12.
#	$(VALGRIND) ASAN_OPTIONS="$(VALGRIND)" TOOL2=$(TEST_TRANSLATOR) TOOL1=$(CXX) CPP11_STL_TESTS=yes $(top_srcdir)/tests/nonsmoke/functional/CompileTests/STL_tests/stl-eval.sh
	$(VALGRIND) ASAN_OPTIONS="$(VALGRIND)" TOOL2=$(TEST_TRANSLATOR) TOOL1=$(CXX) CPP11_STL_TESTS=no $(top_srcdir)/tests/nonsmoke/functional/CompileTests/STL_tests/stl-eval.sh
else  # NOT USING_GNU_COMPILER
	@echo "USING_GCC_COMPILER == false"
if USING_CLANG_COMPILER
# DQ (3/12/2017): Activate for testingonly.
	@echo "Run tests for CLANG compilers."
#	$(VALGRIND) ASAN_OPTIONS="$(VALGRIND)" TOOL2=$(TEST_TRANSLATOR) TOOL1=$(CXX) CPP11_STL_TESTS=no $(top_srcdir)/tests/nonsmoke/functional/CompileTests/STL_tests/stl-eval.sh
else # NOT USING_CLANG_COMPILER
if USING_INTEL_COMPILER
# DQ (3/12/2017): Activate for testingonly.
# Not clear if this has been tested previusly.
	@echo "Run tests for INTEL compilers."
#	$(VALGRIND) ASAN_OPTIONS="$(VALGRIND)" TOOL2=$(TEST_TRANSLATOR) TOOL1=$(CXX) CPP11_STL_TESTS=no $(top_srcdir)/tests/nonsmoke/functional/CompileTests/STL_tests/stl-eval.sh
else # NOT USING_INTEL_COMPILER
	@echo "Exit tests for unknown compiler."
	exit 1
endif # USING_INTEL_COMPILER
endif # USING_CLANG_COMPILER
endif # USING_GNU_COMPILER
endif # ROSE_USE_EDG_VERSION_4_9
endif # USING_GNU_COMPILER
	@echo "DONE: Running the conditional-check-local rule."

# DQ (1/19/2017): These are a problem for GNU 5.1.
# Markus and Dan discussed that these tests could not be enforce uniformally on newer compiler versions.
check-local:
	@$(MAKE) conditional-check-local
	@echo "*******************************************************************************************************************"
	@echo "****** ROSE/tests/nonsmoke/functional/CompileTests/STL_tests: make check rule complete (terminated normally) ******"
	@echo "*******************************************************************************************************************"

old-rule:
if ROSE_USING_GCC_VERSION_LATER_5_1
# check-local: conditional-check-local
	@echo "Skipping these for GNU 5.1 and later version compilers."
else
	@echo "Run tests for either older GNU compilers than GNU 5.1 or CLANG or INTEL compilers."
if USING_CLANG_COMPILER
# Exclude this list of files in the case of CLANG compiler.
	@echo "Run tests for CLANG compilers."
	@$(MAKE) conditional-check-local
else
if USING_INTEL_COMPILER
	@echo "Run tests for INTEL compilers."
	@$(MAKE) conditional-check-local
else
	@echo "Run tests for earlier versions of GNU (GNU 4.9 and older)."
	@$(MAKE) conditional-check-local
endif
endif
endif
	@echo "*******************************************************************************************************************"
	@echo "****** ROSE/tests/nonsmoke/functional/CompileTests/STL_tests: make check rule complete (terminated normally) ******"
	@echo "*******************************************************************************************************************"

check-no-cleanup: $(TEST_TRANSLATOR)
	$(VALGRIND) ASAN_OPTIONS="$(VALGRIND)" TOOL2=$(TEST_TRANSLATOR) TOOL1=$(CXX)  $(top_srcdir)/tests/nonsmoke/functional/CompileTests/STL_tests/stl-eval.sh no-cleanup

clean-local:
	TOOL2=$(TEST_TRANSLATOR) TOOL1=$(CXX)  $(top_srcdir)/tests/nonsmoke/functional/CompileTests/STL_tests/stl-eval.sh only-cleanup
