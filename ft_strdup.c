char *ft_strdup(const char *source_string)
{
	size_t	length_str;
	size_t	i;
	char	*result;
	
	length_str = ft_strlen(source_string) + 1;
	result = (char *) malloc(sizeof(char) * length_str);

	if (!result)
		return (NULL);
	while ( i++ < length_str)
		result[i] = source_string[i];
	result[i] = '\0';
	return (result);
}
