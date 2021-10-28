def is_correct_sequence(sequence: str) -> bool:
    stack = []
    for element in sequence:
        if element in '([{':
            stack.append(element)
        else:
            if element in ')]}':
                if not stack:
                    return False

                open_bracket = stack.pop()
                if open_bracket == '(' and element == ')':
                    continue
                if open_bracket == '[' and element == ']':
                    continue
                if open_bracket == '{' and element == '}':
                    continue
                return False

    if not stack:
        return True
    else:
        return False


if __name__ == '__main__':
    data = input()
    if is_correct_sequence(data):
        print('is correct')
    else:
        print('is not correct')