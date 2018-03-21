<%-- 
    Document   : Reverse
    Created on : Mar 21, 2018, 10:08:43 PM
    Author     : user1
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<%@include file="revString.jsp" %>
<%@taglib uri="/tlds/rev" prefix="c"%>
${param.str}
<c:rev>${param.str}</c:rev>
