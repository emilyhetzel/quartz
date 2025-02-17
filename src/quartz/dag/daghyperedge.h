#pragma once

#include "../gate/gate.h"
#include "../utils/utils.h"

#include <vector>

namespace quartz {

class DAGNode;

// A hyperedge in DAG corresponds to a gate in the circuit.
class DAGHyperEdge {
public:
  int get_min_qubit_index() const;
  std::vector<DAGNode *> input_nodes; // Nodes including parameters!
  std::vector<DAGNode *> output_nodes;

  Gate *gate;
};
} // namespace quartz
