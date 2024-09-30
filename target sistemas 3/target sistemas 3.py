import json

# Carrega os dados do JSON
with open('faturamento.json') as f:
    dados = json.load(f)

faturamento = [dia['valor'] for dia in dados['faturamento'] if dia['valor'] > 0]

# Calcula o menor e maior faturamento
menor_faturamento = min(faturamento)
maior_faturamento = max(faturamento)

# Calcula a média do faturamento (excluindo dias com valor 0)
media_faturamento = sum(faturamento) / len(faturamento)

# Conta o número de dias com faturamento superior à média
dias_acima_da_media = len([valor for valor in faturamento if valor > media_faturamento])

# Exibe os resultados
print(f"Menor faturamento: {menor_faturamento}")
print(f"Maior faturamento: {maior_faturamento}")
print(f"Dias com faturamento acima da média: {dias_acima_da_media}")
