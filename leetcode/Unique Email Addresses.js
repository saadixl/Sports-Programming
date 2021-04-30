/**
 * @param {string[]} emails
 * @return {number}
 */
var numUniqueEmails = function(emails) {
    let emailMap = {};
    emails.forEach((email) => {
        const splitted = email.split("@");
        let localPart = splitted[0];
        localPart = localPart.split(".").join("");
        const plusIndex = localPart.indexOf("+");
        if(plusIndex > -1) {
            localPart = localPart.slice(0, plusIndex);
        }
        const uniqueEmail = localPart + "@" + splitted[1];
        emailMap[uniqueEmail] = true;
    });
    return Object.keys(emailMap).length;
};
