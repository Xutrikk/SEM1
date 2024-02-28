<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0"
xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:template match="/">
<html>
<head><title>Победа</title>
</head>
<body>
<table border="1" >
<tr bgcolor="green">
<th >Круто</th>
<th>Так себе</th>
</tr>
<xsl:for-each select="catalog/cd">
<xsl:sort select="title" data-type="number" order="descending"/>
<tr>
<td><xsl:value-of select="title"/></td>
<td><xsl:value-of select="thms"/></td>
</tr>
</xsl:for-each>
</table>
</body>
</html>
</xsl:template>
</xsl:stylesheet>