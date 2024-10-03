class Solution:
    def encode(self, strs: list[str]) -> str:
        if not strs:
            return ""
        s_tmp = ""
        char = b'\xa1\xa2'.decode('gbk')
        for s in strs:
            s_tmp += s + "#" + char
        return s_tmp[:-1]

    def decode(self, s: str) -> list[str]:
        if not s:
            return []
        char = b'\xa1\xa2'.decode('gbk')

        ans = s.split(char)
        return [i[:-1] for i in ans]