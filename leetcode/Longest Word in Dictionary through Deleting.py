class Solution:
    def can_form_word(self, s, word):
        w_pointer = 0
        w_len_count = 0
        for ch in s:
            if ch == word[w_pointer]:
                w_len_count += 1
                w_pointer += 1
                if w_pointer == len(word):
                    return True
        return False
    def findLongestWord(self, s: str, d: List[str]) -> str:
        max = ""
        for word in d:
            can = self.can_form_word(s, word)
            if can is True:
                if len(word) > len(max) or (len(word) == len(max) and word < max):
                    max = word
        return max
