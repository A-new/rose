include $(top_srcdir)/config/Makefile.for.ROSE.includes.and.libs

# AUTOMAKE_OPTIONS = subdir-objects

AM_CPPFLAGS = -Winvalid-pch $(ROSE_INCLUDES) -I$(srcdir)/graph -I$(srcdir)/libraryIdentification

noinst_LTLIBRARIES = libbinaryMidend.la
libbinaryMidend_la_DEPENDENCIES =

libbinaryMidend_la_SOURCES =					\
    AbstractLocation.C						\
    BinaryAstHash.C						\
    BinaryBestMapAddress.C					\
    BinaryCallingConvention.C					\
    BinaryCodeInserter.C					\
    BinaryControlFlow.C						\
    BinaryDataFlow.C						\
    BinaryDebugger.C						\
    BinaryDemangler.C						\
    BinaryDominance.C						\
    BinaryFeasiblePath.C					\
    BinaryFunctionCall.C					\
    BinaryFunctionSimilarity.C					\
    BinaryHotPatch.C						\
    BinaryMagic.C						\
    BinaryNoOperation.C						\
    BinaryPointerDetection.C					\
    BinaryReachability.C					\
    BinaryReturnValueUsed.C					\
    BinarySmtCommandLine.C					\
    BinarySmtSolver.C						\
    BinarySmtlibSolver.C					\
    BinarySourceLocations.C					\
    BinaryStackDelta.C						\
    BinaryString.C						\
    BinarySymbolicExpr.C					\
    BinarySymbolicExprParser.C					\
    BinarySystemCall.C						\
    BinaryTaintedFlow.C						\
    BinaryToSource.C						\
    BinaryVariables.C						\
    BinaryYicesSolver.C						\
    BinaryZ3Solver.C						\
    Concolic/ConcolicExecutor.C					\
    Concolic/Database.C						\
    Concolic/Database2.C					\
    Concolic/ExecutionManager.C					\
    Concolic/LinuxExecutor.C					\
    Concolic/LinuxExitStatus.C					\
    Concolic/Specimen.C						\
    Concolic/TestCase.C						\
    Concolic/TestSuite.C					\
    Concolic/Utility.C						\
    DwarfLineMapper.C						\
    instructionSemantics/BaseSemantics2.C			\
    instructionSemantics/BaseSemanticsDispatcher.C		\
    instructionSemantics/BaseSemanticsException.C		\
    instructionSemantics/BaseSemanticsMemoryState.C		\
    instructionSemantics/BaseSemanticsMerger.C			\
    instructionSemantics/BaseSemanticsRegisterState.C		\
    instructionSemantics/BaseSemanticsRiscOperators.C		\
    instructionSemantics/BaseSemanticsState.C			\
    instructionSemantics/BaseSemanticsSValue.C			\
    instructionSemantics/ConcreteSemantics2.C			\
    instructionSemantics/DataFlowSemantics2.C			\
    instructionSemantics/DispatcherM68k.C			\
    instructionSemantics/DispatcherPowerpc.C			\
    instructionSemantics/DispatcherX86.C			\
    instructionSemantics/InstructionSemantics2.C		\
    instructionSemantics/IntervalSemantics2.C			\
    instructionSemantics/LlvmSemantics2.C			\
    instructionSemantics/MemoryCell.C				\
    instructionSemantics/MemoryCellList.C			\
    instructionSemantics/MemoryCellMap.C			\
    instructionSemantics/MemoryCellState.C			\
    instructionSemantics/MultiSemantics2.C			\
    instructionSemantics/NativeSemantics.C			\
    instructionSemantics/NullSemantics2.C			\
    instructionSemantics/PartialSymbolicSemantics2.C		\
    instructionSemantics/RegisterStateGeneric.C			\
    instructionSemantics/SourceAstSemantics2.C			\
    instructionSemantics/StaticSemantics2.C			\
    instructionSemantics/SymbolicMemory2.C			\
    instructionSemantics/SymbolicSemantics2.C			\
    instructionSemantics/TraceSemantics2.C

if ROSE_USE_SQLITE_DATABASE
libbinaryMidend_la_SOURCES +=					\
    libraryIdentification/FunctionIdDatabaseInterface.C         \
    libraryIdentification/libraryIdentification.C
endif

pkginclude_HEADERS =					\
    AbstractLocation.h					\
    BinaryAnalysisUtils.h				\
    BinaryAstHash.h					\
    BinaryBestMapAddress.h				\
    BinaryCallingConvention.h				\
    BinaryCodeInserter.h				\
    BinaryConcolic.h					\
    BinaryControlFlow.h					\
    BinaryDataFlow.h					\
    BinaryDebugger.h					\
    BinaryDemangler.h					\
    BinaryDominance.h					\
    BinaryFeasiblePath.h				\
    BinaryFunctionCall.h				\
    BinaryFunctionSimilarity.h				\
    BinaryHotPatch.h					\
    BinaryMagic.h					\
    BinaryMatrix.h					\
    BinaryNoOperation.h					\
    BinaryPointerDetection.h				\
    BinaryReachability.h				\
    BinaryReturnValueUsed.h				\
    BinarySmtCommandLine.h				\
    BinarySmtSolver.h					\
    BinarySmtlibSolver.h				\
    BinarySourceLocations.h				\
    BinaryStackDelta.h					\
    BinaryStackVariable.h				\
    BinaryString.h					\
    BinarySymbolicExpr.h				\
    BinarySymbolicExprParser.h				\
    BinarySystemCall.h					\
    BinaryTaintedFlow.h					\
    BinaryToSource.h					\
    BinaryVariables.h					\
    BinaryYicesSolver.h					\
    BinaryZ3Solver.h					\
    DwarfLineMapper.h					\
    ether.h						\
    instructionSemantics/BaseSemantics2.h		\
    instructionSemantics/BaseSemanticsDispatcher.h	\
    instructionSemantics/BaseSemanticsException.h	\
    instructionSemantics/BaseSemanticsFormatter.h	\
    instructionSemantics/BaseSemanticsMemoryState.h	\
    instructionSemantics/BaseSemanticsMerger.h		\
    instructionSemantics/BaseSemanticsRegisterState.h	\
    instructionSemantics/BaseSemanticsRiscOperators.h	\
    instructionSemantics/BaseSemanticsState.h		\
    instructionSemantics/BaseSemanticsSValue.h		\
    instructionSemantics/BaseSemanticsTypes.h		\
    instructionSemantics/ConcreteSemantics2.h		\
    instructionSemantics/DataFlowSemantics2.h		\
    instructionSemantics/DispatcherM68k.h		\
    instructionSemantics/DispatcherPowerpc.h		\
    instructionSemantics/DispatcherX86.h		\
    instructionSemantics/InstructionSemantics2.h	\
    instructionSemantics/IntervalSemantics2.h		\
    instructionSemantics/LlvmSemantics2.h		\
    instructionSemantics/MemoryCell.h			\
    instructionSemantics/MemoryCellList.h		\
    instructionSemantics/MemoryCellMap.h		\
    instructionSemantics/MemoryCellState.h		\
    instructionSemantics/MultiSemantics2.h		\
    instructionSemantics/NativeSemantics.h		\
    instructionSemantics/NullSemantics2.h		\
    instructionSemantics/PartialSymbolicSemantics2.h	\
    instructionSemantics/RegisterStateGeneric.h		\
    instructionSemantics/SourceAstSemantics2.h		\
    instructionSemantics/StaticSemantics2.h		\
    instructionSemantics/SymbolicMemory2.h		\
    instructionSemantics/SymbolicSemantics2.h		\
    instructionSemantics/TestSemantics2.h		\
    instructionSemantics/TraceSemantics2.h		\
    Concolic/io-utility.h

nobase_pkginclude_HEADERS =			\
    Concolic/ConcolicExecutor.h

if ROSE_USE_SQLITE_DATABASE
pkginclude_HEADERS +=					\
    libraryIdentification/FunctionIdDatabaseInterface.h \
    libraryIdentification/FunctionInfo.h \
    libraryIdentification/libraryIdentification.h \
    libraryIdentification/LibraryInfo.h

endif

EXTRA_DIST = CMakeLists.txt dummyBinaryMidend.C
