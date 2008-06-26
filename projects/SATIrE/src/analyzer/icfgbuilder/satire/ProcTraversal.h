// Copyright 2005,2006,2007 Markus Schordan, Gergo Barany
// $Id: ProcTraversal.h,v 1.6 2008-06-26 08:08:09 gergo Exp $

#ifndef H_PROCTRAVERSAL
#define H_PROCTRAVERSAL

#include <satire_rose.h>

#include "cfg_support.h"

// this must be used preorder
class ProcTraversal : public AstSimpleProcessing
{
public:
  ProcTraversal();
  std::deque<Procedure *> *get_procedures() const;
  unsigned long original_ast_nodes, original_ast_statements;
  void setPrintCollectedFunctionNames(bool pcf) ;
  bool getPrintCollectedFunctionNames();

  std::multimap<std::string, Procedure *> proc_map;
  std::multimap<std::string, Procedure *> mangled_proc_map;

  SgVariableSymbol *global_return_variable_symbol;
  std::vector<SgVariableSymbol *> global_argument_variable_symbols;
  SgVariableSymbol *global_this_variable_symbol;
  SgType *global_unknown_type;
  
protected:
  void visit(SgNode *);
  void atTraversalStart();
  void atTraversalEnd();

private:
  std::deque<Procedure *> *procedures;
  int node_id;
  int procnum;
  bool _printCollectedFunctionNames;
  TimingPerformance *timer;
};

/* find default constructor method in a given class declaration
 * if no default constructor exists, a "dummy"-default constructor is created
 */
SgMemberFunctionDeclaration *get_default_constructor(
        SgClassDeclaration *);

#endif
