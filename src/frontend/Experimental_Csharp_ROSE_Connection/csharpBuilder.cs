//------------------------------------------------------------------------------
// <auto-generated />
//
// This file was automatically generated by SWIG (http://www.swig.org).
// Version 3.0.12
//
// Do not make changes to this file unless you know what you are doing--modify
// the SWIG interface file instead.
//------------------------------------------------------------------------------


public class csharpBuilder {
  public static void helloFromCxx() {
    csharpBuilderPINVOKE.helloFromCxx();
  }

  public static void beginSeq(SeqKind arg0) {
    csharpBuilderPINVOKE.beginSeq((int)arg0);
  }

  public static void closeSeq() {
    csharpBuilderPINVOKE.closeSeq();
  }

  public static void predefinedType(string arg0) {
    csharpBuilderPINVOKE.predefinedType(arg0);
  }

  public static void name(string arg0) {
    csharpBuilderPINVOKE.name(arg0);
  }

  public static void usingDirective(int uid, int levels) {
    csharpBuilderPINVOKE.usingDirective(uid, levels);
  }

  public static void varDecl(int uid) {
    csharpBuilderPINVOKE.varDecl(uid);
  }

  public static void paramDecl(int uid) {
    csharpBuilderPINVOKE.paramDecl(uid);
  }

  public static void classDecl(int uid) {
    csharpBuilderPINVOKE.classDecl(uid);
  }

  public static void methodDecl(int uid) {
    csharpBuilderPINVOKE.methodDecl(uid);
  }

  public static void stageMethodDecl(int uid) {
    csharpBuilderPINVOKE.stageMethodDecl(uid);
  }

  public static void refVarParamDecl(int uid) {
    csharpBuilderPINVOKE.refVarParamDecl(uid);
  }

  public static void refFunDecl(int uid) {
    csharpBuilderPINVOKE.refFunDecl(uid);
  }

  public static void initVarParamDecl(int uid) {
    csharpBuilderPINVOKE.initVarParamDecl(uid);
  }

  public static void returnStmt(int args) {
    csharpBuilderPINVOKE.returnStmt(args);
  }

  public static void valueInitializer() {
    csharpBuilderPINVOKE.valueInitializer();
  }

  public static void literal(string lit) {
    csharpBuilderPINVOKE.literal(lit);
  }

  public static void binary(string rep) {
    csharpBuilderPINVOKE.binary(rep);
  }

  public static void basicFinalChecks() {
    csharpBuilderPINVOKE.basicFinalChecks();
  }

}
