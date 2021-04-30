class Solution:
    def count_ones(self, s):
        c = 0
        for i in s:
            if i == '1':
                c += 1
        return c

    def bin_gen(self, max_bin):
        n = len(max_bin)
        bins = ['1']
        res = [1]
        for i in range(n-1):
            for r in bins:
                if len(r) == i + 1:
                    bins.append(r+'0')
                    bins.append(r+'1')
                if bins[len(bins)-1] == max_bin:
                    break
        return bins
    
    def countBits(self, num: int) -> List[int]:
        if num == 1:
            return [0, 1]
        else:
            max_bin = "{0:b}".format(num)
            max_bin_len = len(max_bin)
            bins = self.bin_gen(max_bin)
            res = [1]
            for b in range(1, len(bins)):
                res.append(self.count_ones(bins[b]))
            res = [0] + res
            return res[:num+1]
