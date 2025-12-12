function optional_parenthesis(node) {
  return prec.right(
    choice(
      node,
      wrapped_in_parenthesis(node),
    ),
  )
}

function wrapped_in_parenthesis(node) {
  if (node) {
    return seq("(", node, ")");
  }
  return seq("(", ")");
}

function comma_list(field, requireFirst) {
  sequence = seq(field, repeat(seq(',', field)));

  if (requireFirst) {
    return sequence;
  }

  return optional(sequence);
}

function paren_list(field, requireFirst) {
  return wrapped_in_parenthesis(
    comma_list(field, requireFirst),
  )
}

module.exports = {
  optional_parenthesis,
  wrapped_in_parenthesis,
  comma_list,
  paren_list,
};
