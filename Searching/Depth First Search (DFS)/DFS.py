# Python Implementation DFS

def inorder_traversal(self):
    elements = []
    stack = []
    curr_node = self.root

    while curr_node or stack:

        if curr_node:
            stack.append(curr_node)
            curr_node = curr_node.left

        else:
            curr_node = stack.pop()
            elements.append(curr_node.dataval)
            curr_node = curr_node.right

    return elements


def preorder_traversal(self):

    stack = [self.root]
    elements = []

    while stack:

        curr_node = stack.pop()
        elements.append(curr_node.dataval)

        if curr_node.right:
            stack.append(curr_node.right)
        if curr_node.left:
            stack.append(curr_node.left)

    return elements


def postorder_traversal(self):

    stack = [self.root]
    elements = []
    out = []

    while stack:

        curr_node = stack.pop()
        out.append(curr_node.dataval)

        if curr_node.left:
            stack.append(curr_node.left)

        if curr_node.right:
            stack.append(curr_node.right)

    while out:
        elements.append(out.pop())

    return elements
